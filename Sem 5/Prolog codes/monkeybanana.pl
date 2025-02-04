% Define initial state
% state(MonkeyLocation, BoxLocation, MonkeyOnBox, HasBanana)
initial_state(state(at_door, at_window, no, no)).

% Define goal state
goal_state(state(_, _, _, yes)).

% Define actions
move(state(at_door, Box, no, HasBanana), walk(door, window), state(at_window, Box, no, HasBanana)).
move(state(at_window, Box, no, HasBanana), walk(window, door), state(at_door, Box, no, HasBanana)).
move(state(Monkey, at_window, no, HasBanana), push_box(Monkey, window), state(window, window, no, HasBanana)) :- Monkey \= at_window.
move(state(Monkey, at_door, no, HasBanana), push_box(Monkey, door), state(door, door, no, HasBanana)) :- Monkey \= at_door.
move(state(window, window, no, HasBanana), climb_box, state(window, window, yes, HasBanana)).
move(state(window, window, yes, no), grab_banana, state(window, window, yes, yes)).

% Plan to reach the goal state
plan(State, [], _) :-
    goal_state(State).

plan(State, [Action | RestOfPlan], VisitedStates) :-
    move(State, Action, NewState),
    \+ member(NewState, VisitedStates), % Prevent loops
    plan(NewState, RestOfPlan, [NewState | VisitedStates]).

% Start the plan from the initial state
solve(Plan) :-
    initial_state(InitialState),
    plan(InitialState, Plan, [InitialState]).
