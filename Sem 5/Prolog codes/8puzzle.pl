% Define the initial and goal state
initial_state([[1, 2, 3],
                [4, 5, 6],
                [7, 8, 0]]).

goal_state([[1, 2, 3],
             [4, 5, 6],
             [7, 8, 0]]).

% Define the possible moves
move(State, NewState) :-
    append(State, [], FlatState),
    select(0, FlatState, TempState), % Replace 0 (blank) with X
    length(State, Size),
    % Get the index of the blank tile (0)
    index_of(0, FlatState, BlankIndex),
    % Determine possible directions (up, down, left, right)
    (
        (UpIndex is BlankIndex - Size, valid_index(UpIndex, Size), % Move up
         replace(TempState, BlankIndex, 0, UpIndex, NewState));
        (DownIndex is BlankIndex + Size, valid_index(DownIndex, Size), % Move down
         replace(TempState, BlankIndex, 0, DownIndex, NewState));
        (LeftIndex is BlankIndex - 1, valid_index(LeftIndex, Size), % Move left
         replace(TempState, BlankIndex, 0, LeftIndex, NewState));
        (RightIndex is BlankIndex + 1, valid_index(RightIndex, Size), % Move right
         replace(TempState, BlankIndex, 0, RightIndex, NewState))
    ).

% Check if an index is valid
valid_index(Index, Size) :-
    Index >= 0,
    Index < Size.

% Find the index of an element in a flat list
index_of(X, List, Index) :-
    nth0(Index, List, X).

% Replace the element at a specific index in a list
replace(List, Old, New, Index, NewList) :-
    nth0(Index, List, Old),
    replace_helper(List, Index, New, NewList).

replace_helper([_|T], 0, New, [New|T]).
replace_helper([H|T], Index, New, [H|R]) :-
    Index > 0,
    NewIndex is Index - 1,
    replace_helper(T, NewIndex, New, R).

% Breadth-first search
bfs([[State|Path]|_], Path, State) :-
    goal_state(State).
bfs([Current|Rest], Path, Goal) :-
    Current = [State|Path],
    findall([NewState, State|Path],
            (move(State, NewState),
             \+ member(NewState, [State|Path])),
            NewStates),
    append(Rest, NewStates, NewQueue),
    bfs(NewQueue, Path, Goal).

% Solve the 8-puzzle problem
solve :-
    initial_state(InitialState),
    bfs([[InitialState]], Path, GoalState),
    reverse(Path, SolutionPath),
    print_solution(SolutionPath, GoalState).

% Print the solution
print_solution([], Goal) :-
    print(Goal), nl.
print_solution([State|Rest], Goal) :-
    print(State), nl,
    print_solution(Rest, Goal).
