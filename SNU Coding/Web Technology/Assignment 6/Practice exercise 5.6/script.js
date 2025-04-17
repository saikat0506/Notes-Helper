// 1. Create an empty array
let myArray = [];

// 2. Run a loop 10 times, adding a new incrementing value to the array
for (let x = 0; x < 10; x++) {
    myArray.push(x); // Add the incrementing value to the array
}

// 3. Log the array into the console
console.log("Array after loop:", myArray);

// 4. Use a for loop to iterate through the array and output the values
console.log("Using a for loop to iterate:");
for (let i = 0; i < myArray.length; i++) {
    console.log(myArray[i]); // Output each element of the array
}

// 5. Use the for...of loop to output the value into the console
console.log("Using a for...of loop to iterate:");
for (let value of myArray) {
    console.log(value); // Output each value using for...of loop
}
