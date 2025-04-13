// 1. Create a function that checks if the argument value is 0
function factorial(n) {
    console.log("Current value of n:", n); // To track recursive calls

    // 2. Base condition
    if (n === 0) {
        return 1;
    } else {
        // 2. Recursive case: n * factorial(n - 1)
        return n * factorial(n - 1);
    }
}

// 3. Invoke the function with a chosen number
let number = 5;  // You can change this value to test different numbers
let result = factorial(number);

// Output the final result
console.log(`Factorial of ${number} is:`, result);
