// 1. Create a variable to be used as the max value for the number guessing game
let maxValue = 10;

// 2. Generate a random number between 1 and maxValue using Math.random() and Math.floor()
let solution = Math.floor(Math.random() * maxValue) + 1;

// Log the solution to the console for development/testing
console.log("Secret number (for testing):", solution);

// Later, you can comment out the line above once the game is ready
