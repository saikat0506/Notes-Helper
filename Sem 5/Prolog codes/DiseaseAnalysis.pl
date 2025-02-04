% Disease facts based on symptoms

% The flu symptoms
disease(flu) :-
    symptom(fever),
    symptom(headache),
    symptom(body_ache),
    symptom(chills),
    symptom(sore_throat),
    symptom(cough),
    symptom(fatigue).

% The cold symptoms
disease(cold) :-
    symptom(sneezing),
    symptom(runny_nose),
    symptom(sore_throat),
    symptom(cough),
    symptom(congestion).

% Allergy symptoms
disease(allergy) :-
    symptom(sneezing),
    symptom(runny_nose),
    symptom(itchy_eyes),
    symptom(watery_eyes),
    symptom(congestion).

% COVID-19 symptoms
disease(covid_19) :-
    symptom(fever),
    symptom(cough),
    symptom(shortness_of_breath),
    symptom(fatigue),
    symptom(loss_of_taste_or_smell).

% Rule to diagnose a disease
diagnose(Disease) :-
    disease(Disease),
    !.

% Interface to input symptoms and get diagnosis

% Ask the user for a symptom
ask(Symptom) :-
    write('Do you have '), write(Symptom), write('? (yes/no): '),
    read(Response),
    nl,
    ((Response == yes) -> assert(symptom(Symptom)) ; true).

% Start diagnosis by asking symptoms
start_diagnosis :-
    retractall(symptom(_)), % Clear any previous symptoms
    write('Medical Diagnosis Expert System'), nl,
    write('Please answer the following questions:'), nl,
    ask(fever),
    ask(headache),
    ask(body_ache),
    ask(chills),
    ask(sore_throat),
    ask(cough),
    ask(fatigue),
    ask(sneezing),
    ask(runny_nose),
    ask(itchy_eyes),
    ask(watery_eyes),
    ask(congestion),
    ask(shortness_of_breath),
    ask(loss_of_taste_or_smell),
    (diagnose(Disease) ->
        write('You may have: '), write(Disease), nl ;
        write('Diagnosis inconclusive. Please consult a doctor.'), nl).
