% Define parts of speech
article(a).
article(the).

noun(cat).
noun(dog).
noun(man).
noun(woman).
noun(ball).
noun(apple).

verb(eats).
verb(chases).
verb(sees).
verb(likes).

% Sentence structure: a sentence is a noun phrase followed by a verb phrase
sentence(S) :-
    noun_phrase(NP, S, S1),
    verb_phrase(VP, S1, []),
    append(NP, VP, S).

% Noun phrase structure: an article followed by a noun
noun_phrase([Article, Noun], [Article, Noun | Rest], Rest) :-
    article(Article),
    noun(Noun).

% Verb phrase structure: a verb followed by a noun phrase
verb_phrase([Verb | NP], [Verb | Rest], Remaining) :-
    verb(Verb),
    noun_phrase(NP, Rest, Remaining).

% Parsing helper to test if input is a valid sentence
parse(Sentence) :-
    sentence(Sentence),
    write('The sentence is grammatically correct.'), !.

% Parsing examples
parse_sentence(Sentence) :-
    ( parse(Sentence) -> true ; write('The sentence is grammatically incorrect.') ).
