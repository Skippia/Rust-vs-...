const { main } = require('../pkg/collatz_wasm.js');

let stime = performance.now()
const total_iterations = main()
let etime = performance.now()

console.log(`Total iterations ${total_iterations}  Time elapsed: ${(etime - stime) / 1000}s`) 
