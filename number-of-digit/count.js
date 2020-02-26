let n = parseInt(process.argv[2]);
let count = 0;
while (n != 0) {
  n = parseInt(n / 10);
  count++;
}

console.log(`Total number of digit is: ${count}`);
