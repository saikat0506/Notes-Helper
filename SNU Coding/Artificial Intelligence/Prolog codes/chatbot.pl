% Main entry point for the chatbot
chatbot :-
    write('Hello! I am a simple Prolog chatbot. How can I help you today?'), nl,
    repeat,
    write('> '),
    read_line_to_string(user_input, Input),  % Read input as a string
    respond(Input),
    (Input == "quit" -> ! ; fail).

% Rules for responding to greetings
respond("hello") :-
    write('Hello! How are you?'), nl.
respond("hi") :-
    write('Hi there! How can I assist you today?'), nl.
respond("how are you") :-
    write('I am just a program, but thanks for asking! How can I help you?'), nl.

% Rules for responding to questions about Prolog
respond("what is prolog") :-
    write('Prolog is a logic programming language widely used in AI and computational linguistics.'), nl.
respond("why use prolog") :-
    write('Prolog is useful for tasks that involve symbolic reasoning and rule-based queries.'), nl.

% Rules for general chatbot information
respond("what can you do") :-
    write('I can answer basic questions about Prolog and respond to simple greetings. Ask me anything!'), nl.
respond("help") :-
    write('You can ask me about Prolog, say "hello" or "hi", or inquire about my capabilities.'), nl.

% Rule for handling farewells
respond("goodbye") :-
    write('Goodbye! Have a wonderful day!'), nl.
respond("quit") :-
    write('Exiting the chatbot. Take care!'), nl.

% Rule for unrecognized input
%respond(_) :-
%    write('I am sorry, I do not understand. Could you try
%    rephrasing?'), nl.
