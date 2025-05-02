function collatz(n) {
  let x = n;
  let iterations = 0;

  while (x > 1) {
    if (x % 2 === 0) {
      x = x / 2;
    } else {
      x = x * 3 + 1;
    }
    iterations++;
  }
  return iterations;
}

function main() {
  let stime = performance.now()

  const startFrom = 2;
  const endAt = 10000002;
  let totalIterations = 0;

  for (let i = startFrom; i < endAt; i++) {
    totalIterations++;
    if (collatz(i) === 0) {
      break;
    }
  }
  
  let etime = performance.now()
  console.log(`Total iterations ${totalIterations}  Time elapsed: ${(etime - stime) / 1000}s`)

}

main();
