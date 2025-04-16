// 1. Setup a blank array
let myWork = [];

// 2-5. Use a for loop to create and push lesson objects with alternating status
for (let i = 1; i <= 10; i++) {
    // 3. Use ternary operator to alternate status: true for odd lessons, false for even
    let status = i % 2 === 0 ? false : true;

    // 4. Create a temporary object with lesson name and status
    let lesson = {
        name: `Lesson ${i}`,
        status: status
    };

    // 5. Push the object to the array
    myWork.push(lesson);
}

// 6. Output the array to the console
console.log(myWork);
