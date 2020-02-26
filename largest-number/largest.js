let n1 = process.argv[2];
let n2 = process.argv[3];
let n3 = process.argv[4];

n1 = parseInt(n1);
n2 = parseInt(n2);
n3 = parseInt(n3);

if (n1 > n2) {
  if (n1 > n3) {
    console.log(`largest number is ${n1}`);
  } else {
    console.log(`largest number is ${n3}`);
  }
} else {
  if (n2 > n3) {
    console.log(`largest number is ${n2}`);
  } else {
    console.log(`largest number is ${n3}`);
  }
}
