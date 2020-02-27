const a = [10, 20, 30, 40, 50];
const b = [60, 70, 80, 100, 90];

const isMatched = a.some(item => b.includes(item));

if (!isMatched) {
  console.log("No matching element is found");
} else {
  console.log("Matching element is found");
}
