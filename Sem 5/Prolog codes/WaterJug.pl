% Define the main predicate to solve the Water Jug problem
% `X` and `Y` are the capacities of the jugs, `Goal` is the target amount, and `Solution` is the sequence of moves.
solve_water_jug(X, Y, Goal, Solution) :-
    empty_state(InitialState),       % Start with both jugs empty
    search(InitialState, Goal, X, Y, [InitialState], Solution).

% Define the initial state with both jugs empty
empty_state(state(0, 0)).

% Search for the goal state by applying actions and ensuring no repeated states
search(state(Goal, _), Goal, _, _, Path, Path).  % Goal reached in the first jug
search(state(_, Goal), Goal, _, _, Path, Path).  % Goal reached in the second jug
search(CurrentState, Goal, X, Y, Visited, Solution) :-
    action(CurrentState, NextState, X, Y),           % Apply an action
    \+ member(NextState, Visited),                   % Avoid revisiting states
    search(NextState, Goal, X, Y, [NextState | Visited], Solution).

% Define possible actions: fill, empty, and pour between jugs
action(state(_, Y2), state(X, Y2), X, _).               % Fill jug X to its capacity
action(state(X1, _), state(X1, Y), _, Y).               % Fill jug Y to its capacity
action(state(X, Y2), state(0, Y2), _, _).               % Empty jug X
action(state(X1, Y), state(X1, 0), _, _).               % Empty jug Y
action(state(X1, Y2), state(NewX1, NewY2), X, Y) :-     % Pour from X to Y
    Total is X1 + Y2,
    (   Total =< Y -> NewX1 = 0, NewY2 = Total
    ;   NewX1 is Total - Y, NewY2 = Y).
action(state(X1, Y2), state(NewX1, NewY2), X, Y) :-     % Pour from Y to X
    Total is X1 + Y2,
    (   Total =< X -> NewX1 = Total, NewY2 = 0
    ;   NewX1 = X, NewY2 is Total - X).

% Display the solution steps
print_solution([]).
print_solution([state(Jug1, Jug2) | Rest]) :-
    format('Jug1: ~w, Jug2: ~w~n', [Jug1, Jug2]),
    print_solution(Rest).
