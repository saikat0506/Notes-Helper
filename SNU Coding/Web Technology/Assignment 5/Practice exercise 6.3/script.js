// 1. Set up two variables containing number values
let num1 = 20;
let num2 = 10;

// 2. Set up a variable to hold an operator, either + or -
let operator = "+";  // You can change this to "-" later

// 3. Create a function that takes two numbers and an operator
function calculate(a, b, op) {
  if (op === "+") {
    return a + b;
  } else if (op === "-") {
    return a - b;
  } else {
    // Default to addition if the operator is not valid
    return a + b;
  }
}

// 4. Call the function and log the result
console.log("Result:", calculate(num1, num2, operator));  // Should output 30

// 5. Update the operator and call the function again
operator = "-";
console.log("Result after updating operator:", calculate(num1, num2, operator));  // Should output 10
