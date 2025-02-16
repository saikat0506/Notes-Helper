% Define distances between cities as facts
distance(a, b, 10).
distance(a, c, 15).
distance(a, d, 20).
distance(b, a, 10).
distance(b, c, 35).
distance(b, d, 25).
distance(c, a, 15).
distance(c, b, 35).
distance(c, d, 30).
distance(d, a, 20).
distance(d, b, 25).
distance(d, c, 30).

% Find distance between two cities (in either direction)
path_distance(X, Y, D) :- distance(X, Y, D).
path_distance(X, Y, D) :- distance(Y, X, D).

% Calculate total distance of a given path
path_total_distance([_], 0).
path_total_distance([City1, City2 | Rest], TotalDistance) :-
    path_distance(City1, City2, D),
    path_total_distance([City2 | Rest], RestDistance),
    TotalDistance is D + RestDistance.

% Generate all permutations of cities (excluding the starting city)
all_paths(Start, Cities, [Start | Path]) :-
    permutation(Cities, Path).

% Find the shortest path by brute force
tsp(Start, Path, MinDistance) :-
    % List of cities to visit (excluding the start city)
    findall(City, (distance(Start, City, _); distance(City, Start, _)), Cities),
    list_to_set(Cities, UniqueCities), % Remove duplicates

    % Find all possible paths
    findall([Start | P], all_paths(Start, UniqueCities, [Start | P]), Paths),

    % Calculate the distance for each path and find the minimum
    findall(Distance-Path,
            (member(Path, Paths), path_total_distance(Path, Distance)),
            Distances),
    % Find the path with the minimum distance
    min_member(MinDistance-Path, Distances).

% Start TSP with the given start city
solve_tsp(Start) :-
    tsp(Start, Path, MinDistance),
    format('The shortest path is: ~w~n', [Path]),
    format('With a total distance of: ~w~n', [MinDistance]).
