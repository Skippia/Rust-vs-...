#include <iostream>
#include <chrono>
#include <cstdint>

std::uint64_t collatz(std::uint64_t n) {
    std::uint64_t value = n;
    std::uint64_t iterations = 0;
    while (value > 1) {
        if (value % 2 == 0) {
            value /= 2;
        } else {
            value = value * 3 + 1;
        }
        ++iterations;
    }
    return iterations;
}

int main() {
    // Start timer
    auto start = std::chrono::high_resolution_clock::now();

    std::uint64_t start_from = 2;
    std::uint64_t end_at    = 10000002;
    std::uint64_t total_iterations = 0;

    for (std::uint64_t i = start_from; i < end_at; ++i) {
        if (collatz(i) == 0) {
            break;
        }
        ++total_iterations;
    }

    // Stop timer
    auto end = std::chrono::high_resolution_clock::now();
    // Measure elapsed time as a floating-point number of seconds
    std::chrono::duration<double> elapsed = end - start;

    std::cout << "Total iterations: " << total_iterations << " ";
    std::cout << " Time elapsed: "
              << elapsed.count() << " s \n";
    return 0;
}

