// 1. Create an empty array to hold the table data
let myTable = [];

// 2. Set variable values for rows and columns
let numRows = 4;
let numCols = 5;

// 3. Set up a counter variable
let counter = 0;

// 4. Outer loop to generate rows
for (let i = 0; i < numRows; i++) {
    // Create a temporary array for the current row
    let tempTable = [];

    // 5. Inner loop to generate columns (cells in a row)
    for (let j = 0; j < numCols; j++) {
        tempTable.push(counter); // Push the counter value to the current cell
        counter++; // Increment the counter
    }

    // Push the completed row (tempTable) to the main table (myTable)
    myTable.push(tempTable);
}

// Output the table
console.log(myTable);
