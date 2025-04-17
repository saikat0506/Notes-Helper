// 1. Create an array of descriptive words
let descriptiveWords = ["awesome", "brilliant", "kind", "funny", "creative", "smart", "adventurous"];

// 2. Create a function that asks the user for a name
function describePerson() {
  let name = prompt("What is your name?");

  // 3. Select a random value from the array
  let randomIndex = Math.floor(Math.random() * descriptiveWords.length);
  let randomWord = descriptiveWords[randomIndex];

  // 4. Output the name and the randomly selected word
  console.log(`${name} is ${randomWord}!`);
}

// 5. Invoke the function
describePerson();
