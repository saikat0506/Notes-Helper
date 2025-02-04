% Define city connections as bidirectional paths
connected(cityA, cityB).
connected(cityB, cityC).
connected(cityA, cityD).
connected(cityD, cityE).
connected(cityC, cityF).
connected(cityE, cityF).
connected(cityF, cityG).

% Make connections bidirectional
path(X, Y) :- connected(X, Y).
path(Y, X) :- connected(X, Y).

% Depth-First Search (DFS)
dfs(Start, Goal, Path) :-
    dfs_recursive(Start, Goal, [Start], Path).

dfs_recursive(Goal, Goal, Visited, Path) :-
    reverse(Visited, Path).
dfs_recursive(Start, Goal, Visited, Path) :-
    path(Start, Next),
    \+ member(Next, Visited),
    dfs_recursive(Next, Goal, [Next|Visited], Path).

% Breadth-First Search (BFS)
bfs(Start, Goal, Path) :-
    bfs_queue([[Start]], Goal, Path).

bfs_queue([[Goal|Rest]|_], Goal, Path) :-
    reverse([Goal|Rest], Path).
bfs_queue([CurrentPath|Paths], Goal, Path) :-
    extend_path(CurrentPath, NewPaths),
    append(Paths, NewPaths, UpdatedPaths),
    bfs_queue(UpdatedPaths, Goal, Path).

extend_path([Node|RestOfPath], NewPaths) :-
    findall([Next,Node|RestOfPath],
            (path(Node, Next), \+ member(Next, [Node|RestOfPath])),
            NewPaths).
