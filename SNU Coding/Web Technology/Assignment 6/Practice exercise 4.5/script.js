// 1. Create a variable called prize and use a prompt to ask the user to select a number between 0 and 10
let prize = prompt("Select a number between 0 and 10 to win a prize:");

// 2. Convert the prompt response to a number data type
prize = Number(prize);

// 3. Create a variable for the output message
let message = "My Selection: " + prize + " - ";

// 4 & 5. Use switch statement to determine prize
switch (prize) {
    case 0:
        message += "Oops! No prize this time. Try again!";
        break;
    case 1:
    case 2:
        message += "You won a chocolate bar!";
        break;
    case 3:
    case 4:
        message += "You won a movie ticket!";
        break;
    case 5:
    case 6:
        message += "You won a gift card worth $10!";
        break;
    case 7:
    case 8:
        message += "You won a Bluetooth speaker!";
        break;
    case 9:
    case 10:
        message += "Congratulations! You won a brand new tablet!";
        break;
    default:
        message += "Invalid selection. Please pick a number between 0 and 10.";
        break;
}

// 6. Output the message back to the user
console.log(message);
