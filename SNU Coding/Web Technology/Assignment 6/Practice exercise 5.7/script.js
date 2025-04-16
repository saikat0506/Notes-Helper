// 1. Create a simple object with three items
let myObject = {
    name: "Alice",
    age: 25,
    occupation: "Engineer"
};

// 2. Use a for in loop to get the properties' names and values from the object
console.log("Object Properties:");
for (let key in myObject) {
    console.log(key + ": " + myObject[key]); // Output property name and value
}

// 3. Create an array containing the same three items
let myArray = ["Alice", 25, "Engineer"];

// Use a for loop to output the values from the array
console.log("\nArray Values (using for loop):");
for (let i = 0; i < myArray.length; i++) {
    console.log(myArray[i]); // Output each item from the array
}

// Alternatively, use a for in loop to output values from the array
console.log("\nArray Values (using for in loop):");
for (let index in myArray) {
    console.log(myArray[index]); // Output each item from the array using the index
}
