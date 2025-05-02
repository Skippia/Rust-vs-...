# rust_vs_go

A comparative study and implementation of similar functionalities in Rust, Go, C++, and Makefile. This repository demonstrates how common programming tasks can be solved using different languages, highlighting their syntax, performance, and ecosystem differences.

## Language Composition

- **Makefile**: 32%
- **C++**: 28.3%
- **Rust**: 20.1%
- **Go**: 19.6%

## Overview

This repo contains code samples and build scripts that showcase parallel solutions to the same problems in Rust, Go, and C++. The Makefile automates build and test processes across these languages. The goal is to provide a hands-on reference for developers interested in understanding cross-language design and performance trade-offs.

## Directory Structure

```
.
├── rust/       # Rust implementations
├── go/         # Go implementations
├── cpp/        # C++ implementations
├── Makefile    # Build automation for all languages
└── README.md   # Project overview and instructions
```

## Getting Started

### Prerequisites

- Rust (https://www.rust-lang.org/tools/install)
- Go (https://go.dev/doc/install)
- C++ compiler (e.g., g++, clang++)
- `make` utility

### Build and Run

To build and run all examples:

```sh
make all
```

To build or run code for a specific language:

```sh
make rust
make go
make cpp
```

## Goals

- Compare implementations of similar algorithms and tasks.
- Explore language-specific idioms and patterns.
- Benchmark performance and discuss trade-offs.
- Provide educational examples for language learners.

## Contributing

Contributions are welcome! Feel free to open issues or submit pull requests with improvements, bug fixes, or new comparative examples.

## License

This project is licensed under the MIT License. See [LICENSE](LICENSE) for more information.
