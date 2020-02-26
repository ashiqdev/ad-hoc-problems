let number = parseInt(process.argv[2]);
let originalNumber;
let reserved = 0;
let remainder;

originalNumber = number;

while (originalNumber != 0) {
  remainder = parseInt(originalNumber % 10);
  reserved = reserved * 10 + remainder;
  originalNumber = parseInt(originalNumber / 10);
}

if (reserved == number) {
  console.log(`${number} is palindrome`);
} else {
  console.log(`${number} is not palindrome`);
}
