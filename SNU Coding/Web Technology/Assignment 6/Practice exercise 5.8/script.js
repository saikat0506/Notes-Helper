// 1. Set up a string variable to use as output
let output = "";

// 2. Select a number to skip
let skipNumber = 5;

// 3. Create a for loop that counts to 10
console.log("Using continue to skip number:");

for (let i = 0; i < 10; i++) {
    // 4. Add a condition to check if the looped variable is equal to the number to skip
    if (i === skipNumber) {
        // 5. If the number is to be skipped, continue to the next number
        continue;
    }
    // 6. Append the new count value to the output string
    output += i;
}

// 7. Output the final string after the loop completes
console.log(output); // Output will not include the skipped number (5)

// Reset output for the next loop
output = "";

// 8. Reuse the code, but change the continue to break and see the difference
console.log("\nUsing break to stop at the skip number:");

for (let i = 0; i < 10; i++) {
    // 4. Add a condition to check if the looped variable is equal to the number to skip
    if (i === skipNumber) {
        // 5. If the number is to be skipped, break out of the loop
        break;
    }
    // 6. Append the new count value to the output string
    output += i;
}

// 7. Output the final string after the loop completes
console.log(output); // Output will stop at the skipped number (5)
