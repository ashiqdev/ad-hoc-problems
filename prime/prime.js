const n = parseInt(process.argv[2]);
let flag=true;

for (let i = 2; i <= n / 2; i++) {
  if (n % i === 0) {
    flag = false;
    break;
  }
}

if (n === 1) {
  console.log(`${n} is neither or a prime or composite number`);
} else {
  if (flag) {
    console.log(`${n} is a prime number`);
  } else {
    console.log(`${n} is not a prime number`);
  }
}
