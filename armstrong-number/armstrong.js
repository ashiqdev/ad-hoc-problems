function numOfDigit(num) {
  let count = 0;
  while (num !== 0) {
    num = parseInt(num / 10);
    count++;
  }

  return count;
}

let number,
  originalNumber,
  remainder,
  result = 0;

console.log("Enter a number");
number = parseInt(process.argv[2]);
const digitCount = numOfDigit(number);

originalNumber = number;

while (originalNumber !== 0) {
  remainder = parseInt(originalNumber % 10);
  result += Math.pow(remainder, digitCount);
  originalNumber =  parseInt(originalNumber/10);
}

if (result === number) {
  console.log(`${number} is armstrong`);
} else {
  console.log(`${number} is not armstrong`);
}
