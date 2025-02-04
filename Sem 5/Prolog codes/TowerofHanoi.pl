% Base case: Move a single disk from the source to the target
move(1, Source, Target, _) :-
    format('Move disk from ~w to ~w~n', [Source, Target]).

% Recursive case: Move N disks from Source to Target using Helper
move(N, Source, Target, Helper) :-
    N > 1,
    M is N - 1,
    % Move N-1 disks from Source to Helper using Target as a temporary peg
    move(M, Source, Helper, Target),
    % Move the Nth disk from Source to Target
    move(1, Source, Target, _),
    % Move the N-1 disks from Helper to Target using Source as a temporary peg
    move(M, Helper, Target, Source).

% Solve the Towers of Hanoi puzzle
solve_hanoi(N) :-
    format('Solving Towers of Hanoi for ~d disks:~n', [N]),
    move(N, source, target, helper).

