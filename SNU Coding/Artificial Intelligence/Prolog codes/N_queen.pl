% Main predicate to solve the N-Queens problem
n_queens(N, Solution) :-
    length(Solution, N),         % Create a list of N elements to represent queen positions
    place_queens(Solution, N),   % Place queens on the board
    safe(Solution).              % Check for safety of all queens

% Recursively place queens on each row
place_queens([], _).
place_queens([Row | Others], N) :-
    place_queens(Others, N),
    between(1, N, Row),          % Ensure Row is between 1 and N
    \+ threatened(Row, Others, 1).

% Check if queens in other rows threaten the current row
threatened(Row, [Row1 | Others], Dist) :-
    Row =:= Row1;                 % Same column threat
    Row =:= Row1 + Dist;          % Diagonal threat (down-right)
    Row =:= Row1 - Dist;          % Diagonal threat (down-left)
    Dist1 is Dist + 1,
    threatened(Row, Others, Dist1).

% Check if solution is safe (no queens threaten each other)
safe([]).
safe([Row | Others]) :-
    safe(Others),
    \+ threatened(Row, Others, 1).

% Print solution in a readable format
print_solution([]).
print_solution([Q | Rest]) :-
    print_row(Q),
    print_solution(Rest).

print_row(Q) :-
    length(Row, Q),
    maplist(=(.), Row),
    append(Row, ['Q'], DisplayRow),
    writeln(DisplayRow).
