// 1. Create an object named 'people' with an empty array called 'friends'
let people = {
    friends: []
};

// 2. Create three variables with friend objects
let friend1 = {
    firstName: "Alice",
    lastName: "Smith",
    id: 1
};

let friend2 = {
    firstName: "Bob",
    lastName: "Johnson",
    id: 2
};

let friend3 = {
    firstName: "Charlie",
    lastName: "Brown",
    id: 3
};

// 3. Add the three friends to the 'friends' array
people.friends.push(friend1, friend2, friend3);

// 4. Output to the console
console.log(people);
