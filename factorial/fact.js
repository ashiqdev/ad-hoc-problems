const n = parseInt(process.argv[2]);
let prod = 1;

if (n < 0) {
  console.log(`factorial of negative number does not exist`);
} else {
  for (let i = 2; i <= n; i++) {
    prod *= i;
  }
  console.log(`factorial of ${n} is ${prod}`);
}
