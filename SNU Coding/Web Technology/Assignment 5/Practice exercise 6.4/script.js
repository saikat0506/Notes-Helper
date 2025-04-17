// 1. Set up an empty array to store calculated values
let resultsArray = [];

// 3. Create a function to return the sum of two parameters
function calculate(val1, val2) {
  return val1 + val2;
}

// 2. Create a loop that runs 10 times
for (let i = 0; i < 10; i++) {
  // Multiply loop counter by 5
  let value1 = i * 5;

  // Multiply loop counter by itself
  let value2 = i * i;

  // 4. Call the calculation function with both values
  let result = calculate(value1, value2);

  // 5. Push the result into the array
  resultsArray.push(result);
}

// 6. Output the value of the array
console.log("Calculated Results:", resultsArray);
