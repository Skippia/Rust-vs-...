# Collatz Benchmark: C++, Go, and Rust Implementations

This document records the runtime performance of the Collatz algorithm implemented in C++, Go, and Rust, as executed on my laptop for 10,000,000 iterations. Each implementation was run five times to illustrate consistency and performance differences across languages.

---

## C++ Implementation

```
Total iterations: 10000000  Time elapsed: 1.58517 s
Total iterations: 10000000  Time elapsed: 1.5673 s
Total iterations: 10000000  Time elapsed: 1.54527 s
Total iterations: 10000000  Time elapsed: 1.5372 s
Total iterations: 10000000  Time elapsed: 1.5436 s
```

## Go Implementation

```
Total iterations: 10000000  Time elapsed: 1.795077208s
Total iterations: 10000000  Time elapsed: 1.805734834s
Total iterations: 10000000  Time elapsed: 1.783851958s
Total iterations: 10000000  Time elapsed: 1.767579958s
Total iterations: 10000000  Time elapsed: 1.769288334s
```

## Rust Implementation

```
Total iterations 10000000  Time elapsed: 1.539871042s
Total iterations 10000000  Time elapsed: 1.551522542s
Total iterations 10000000  Time elapsed: 1.553179209s
Total iterations 10000000  Time elapsed: 1.565794792s
Total iterations 10000000  Time elapsed: 1.541927875s
```

---

## Summary

- **C++**: Fastest overall, with all runs under 1.59 seconds.
- **Rust**: Nearly matches C++ performance, with most runs clustered around 1.54–1.56 seconds.
- **Go**: Slightly slower, with times around 1.77–1.81 seconds.

These results highlight the efficiency of systems programming languages, with C++ and Rust leading in raw performance for the Collatz algorithm on this hardware.
