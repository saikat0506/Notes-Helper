// Set a variable name and assign a function expression to it
let displayMessage = function (message) {
    console.log("Function Expression:", message);
};

// 2. Pass an argument into the function
displayMessage("Hello from the function expression!");

// Normal function declaration
function displayMessageDeclaration(message) {
    console.log("Function Declaration:", message);
}

// Pass an argument into the function
displayMessageDeclaration("Hello from the function declaration!");
