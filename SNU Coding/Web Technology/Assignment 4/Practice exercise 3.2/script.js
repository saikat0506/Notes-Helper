// Create an empty shopping list
let shoppingList = [];

// Add Milk, Bread, and Apples
shoppingList.push("Milk", "Bread", "Apples");

// Update "Bread" with Bananas and Eggs
let breadIndex = shoppingList.indexOf("Bread");
if (breadIndex !== -1) {
  // Remove Bread and insert Bananas and Eggs at that position
  shoppingList.splice(breadIndex, 1, "Bananas", "Eggs");
}

// Remove the last item and output it to the console
let removedItem = shoppingList.pop();
console.log("Removed item:", removedItem);

// Sort the list alphabetically
shoppingList.sort();

// Find and output the index of "Milk"
let milkIndex = shoppingList.indexOf("Milk");
console.log("Index of Milk:", milkIndex);

// After Bananas, add Carrots and Lettuce
let bananaIndex = shoppingList.indexOf("Bananas");
if (bananaIndex !== -1) {
  shoppingList.splice(bananaIndex + 1, 0, "Carrots", "Lettuce");
}

// Create a new list containing Juice and Pop
let newList = ["Juice", "Pop"];

// Combine both lists, adding the new list twice to the end of the first list
let combinedList = shoppingList.concat(newList, newList);

// Get the last index value of "Pop" and output it to the console
let lastIndexOfPop = combinedList.lastIndexOf("Pop");
console.log("Last index of Pop:", lastIndexOfPop);

// Optional: View the final list
console.log("Final combined list:", combinedList);
