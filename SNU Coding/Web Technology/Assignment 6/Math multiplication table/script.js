// 1. Set up a blank array to contain the final multiplication table
let multiplicationTable = [];

// 2. Set a value variable to specify how many values you want to multiply
let values = 10; // Multiplying 1 to 10

// 3. Create an outer for loop to iterate through each row
for (let i = 1; i <= values; i++) {
    let tempRow = []; // Temporary array to store the current row's results
    
    // 4. Add an inner for loop for the column values
    for (let j = 1; j <= values; j++) {
        // Push the multiplied values to the temp array
        tempRow.push(i * j); // Multiply i (row) by j (column)
    }
    
    // 5. Add the temporary row data to the main array of the final table
    multiplicationTable.push(tempRow);
}

// Output the multiplication table
console.log("Multiplication Table:");
for (let row of multiplicationTable) {
    console.log(row.join('\t')); // Join each row's values with a tab for proper spacing
}
