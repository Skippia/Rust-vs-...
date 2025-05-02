package main

import (
    "time"
    "fmt"
)

func collatz(n uint64) uint64 {
    collatzNumber := n
    var iterations uint64 = 0

    for collatzNumber > 1 {
        if collatzNumber % 2 == 0 {
            collatzNumber /= 2
        } else {
            collatzNumber = collatzNumber * 3 + 1
        }
        iterations++;
    }
    return uint64(iterations)
}

func main() {
    now := time.Now()
    var startFrom uint64 = 2
    var endAt uint64 = 10000002
    var total_iterations uint64 = 0;
    for i := startFrom; i < endAt; i++ {
        total_iterations++
        if collatz(i) == 0 {
            break
        }
    }
    fmt.Printf("Total iterations: %v ", total_iterations)
    fmt.Printf(" Time elapsed: %v \n", time.Since(now))
}
