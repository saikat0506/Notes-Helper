// 1. Set the start variable at a value of 10
let start = 10;

// 2. Create a function that takes one argument (countdown value)
function countdown(value) {
    // 3. Output the current countdown value
    console.log("Countdown:", value);

    // 4. Check if value is less than 1; if so, end the function
    if (value < 1) {
        console.log("Blast off! 🚀");
        return;
    }

    // 6. Decrement the countdown value
    value--;

    // 5 & 8. If value is still >= 1, call the function again (recursive loop)
    return countdown(value); // 9. This keeps the loop going until condition fails
}

// 🔁 Start the countdown
countdown(start);

// 7. Create a second countdown function using "if value > 0"
function anotherCountdown(value) {
    if (value > 0) {
        console.log("Counting down again:", value);
        return anotherCountdown(value - 1);
    } else {
        console.log("Second countdown complete! ✅");
        return;
    }
}

// ⏳ Trigger second countdown
anotherCountdown(start);
