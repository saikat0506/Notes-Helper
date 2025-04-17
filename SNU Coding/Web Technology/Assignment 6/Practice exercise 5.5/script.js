// 1. Create a grid array variable
let grid = [];

// 2. Set a value of 64 for the number of cells (total cells = rows * columns)
let totalCells = 64;

// We will use 8 rows and 8 columns for this example
let numRows = 8;
let numCols = 8;

// 3. Set a counter to 0
let counter = 0;

// Create the grid with nested arrays (rows)
for (let i = 0; i < numRows; i++) {
    // Create a temporary array for the current row
    let row = [];

    // Add cells to the row
    for (let j = 0; j < numCols; j++) {
        row.push(counter); // Add the counter value to the current cell
        counter++; // Increment the counter
    }

    // Push the row into the grid
    grid.push(row);
}

// Output the grid
console.log(grid);
