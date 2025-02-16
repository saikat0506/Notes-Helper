parent(john, mary).
parent(john, michael).
parent(susan, mary).
parent(susan, michael).
parent(mary, linda).
parent(mary, james).
parent(michael, alex).
parent(michael, emma).
parent(alex, sophia).
parent(alex, tom).

male(john).
male(michael).
male(alex).
male(james).
male(tom).
female(susan).
female(mary).
female(linda).
female(emma).
female(sophia).

child(X, Y) :- parent(Y, X).
sibling(X, Y) :-
    parent(Z, X),
    parent(Z, Y),
    X \= Y.
cousin(X, Y) :-
    parent(Z, X),
    parent(W, Y),
    sibling(Z, W),
    X \= Y.
