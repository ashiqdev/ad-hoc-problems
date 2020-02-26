(() => {
  let upper = 300;

  console.log(`Fahr \t Cel\n\n`)

  for (let fahr = 0; fahr <= upper; fahr += 20) {
    let cel = 5 * (fahr - 32) / 9;
    console.log(`${fahr} \t ${parseInt(cel)}`);
  }
})();
