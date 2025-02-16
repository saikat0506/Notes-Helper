% Define basic logic gates
and_gate(0, 0, 0).
and_gate(0, 1, 0).
and_gate(1, 0, 0).
and_gate(1, 1, 1).

or_gate(0, 0, 0).
or_gate(0, 1, 1).
or_gate(1, 0, 1).
or_gate(1, 1, 1).

not_gate(0, 1).
not_gate(1, 0).

% Verify truth table for AND gate
verify_and_truth_table :-
    and_gate(0, 0, Output1), write('AND(0,0) = '), writeln(Output1),
    and_gate(0, 1, Output2), write('AND(0,1) = '), writeln(Output2),
    and_gate(1, 0, Output3), write('AND(1,0) = '), writeln(Output3),
    and_gate(1, 1, Output4), write('AND(1,1) = '), writeln(Output4).

% Verify truth table for OR gate
verify_or_truth_table :-
    or_gate(0, 0, Output1), write('OR(0,0) = '), writeln(Output1),
    or_gate(0, 1, Output2), write('OR(0,1) = '), writeln(Output2),
    or_gate(1, 0, Output3), write('OR(1,0) = '), writeln(Output3),
    or_gate(1, 1, Output4), write('OR(1,1) = '), writeln(Output4).

% Verify truth table for NOT gate
verify_not_truth_table :-
    not_gate(0, Output1), write('NOT(0) = '), writeln(Output1),
    not_gate(1, Output2), write('NOT(1) = '), writeln(Output2).

% Verify all truth tables
verify_all :-
    writeln('--- AND Gate Truth Table ---'), verify_and_truth_table, nl,
    writeln('--- OR Gate Truth Table ---'), verify_or_truth_table, nl,
    writeln('--- NOT Gate Truth Table ---'), verify_not_truth_table.
