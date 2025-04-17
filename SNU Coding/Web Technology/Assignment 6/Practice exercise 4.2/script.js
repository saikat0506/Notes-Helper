// 1. Create a prompt to ask the user's age
let userAge = prompt("Please enter your age:");

// 2. Convert the response from the prompt to a number
userAge = Number(userAge);

// 3. Declare a message variable that you will use to hold the console message for the user
let message;

// 4. If the input age is equal to or greater than 21
if (userAge >= 21) {
    message = "You may enter the venue and purchase alcohol.";
}
// 5. If the input age is equal to or greater than 19
else if (userAge >= 19) {
    message = "You may enter the venue, but you may not purchase alcohol.";
}
// 6. Provide a default else statement
else {
    message = "You are not allowed to enter the venue.";
}

// 7. Output the response message variable to the console
console.log(message);