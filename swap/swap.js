let a = parseInt(process.argv[2]);
let b = parseInt(process.argv[3]);

 [b, a] = [a, b]

console.log(`a is ${a}`);
console.log(`b is ${b}`);