const n = parseInt(process.argv[2]);
let prod = 1;

for (let i = 1; i <= n; i++) {
  prod *= i;
}

console.log(`factorak of ${n} is ${prod}`);
