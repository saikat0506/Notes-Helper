// 1. Create a variable value with let and assign a string value of 1000 to it
let value = "1000";

// 2. Create an IIFE (Immediately Invoked Function Expression)
(function() {
  let value = "500"; // local scope variable
  console.log("Inside first IIFE (local value):", value); // should print 500
})();

// 3. Create another IIFE assigned to a variable named result
let result = (function() {
  let value = "250"; // local to this IIFE
  return value;
})();

// Print both the outer variable and the result
console.log("Result from second IIFE:", result);  // should print 250
console.log("Global 'value' variable:", value);   // should still be 1000
