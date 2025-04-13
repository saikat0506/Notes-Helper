// 1. Create an array to hold the inventory of store items
let inventory = [];

// 2. Create three items with properties: name, model, cost, and quantity
let item1 = {
  name: "Laptop",
  model: "Dell XPS 13",
  cost: 1200,
  quantity: 5
};

let item2 = {
  name: "Smartphone",
  model: "iPhone 14",
  cost: 999,
  quantity: 10
};

let item3 = {
  name: "Headphones",
  model: "Sony WH-1000XM5",
  cost: 349,
  quantity: 15
};

// 3. Add all three objects to the inventory array using an array method
inventory.push(item1, item2, item3);

// Log the entire inventory
console.log("Full Inventory:", inventory);

// 4. Access the quantity of the third item and log it
console.log("Quantity of third item:", inventory[2].quantity);

// Optional: Experiment by adding another item
let item4 = {
  name: "Smartwatch",
  model: "Samsung Galaxy Watch 6",
  cost: 299,
  quantity: 8
};

// Add new item to inventory
inventory.push(item4);

// Access the name and cost of the newly added item
console.log("New item added:", inventory[3].name, "- Cost:", inventory[3].cost);
