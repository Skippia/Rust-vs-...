# Makefile for collatz_timer in C++, Go, Rust (native) and Rust→WASM (via wasm-pack)

# Compilers / tools
CXX         := g++
GO          := go
CARGO       := cargo
WASM_PACK   := wasm-pack
NODE        := node

# Flags
CXXFLAGS    := -std=c++17 -O3
GOFLAGS     := -ldflags="-s -w"
CARGOFLAGS  := --release
WASMFLAGS   := --release --target nodejs

# Sources and targets
CPP_SRC     := collatz.cpp
CPP_OUT     := collatz_cpp

GO_SRC      := collatz.go
GO_OUT      := collatz_go

# Rust: we'll let Cargo build it into target/release/collatz
RS_BIN      := target/release/collatz

# Rust→WASM
WASM_DIR    := js-wasm
WASM_PKG    := $(WASM_DIR)/pkg
WASM_ENTRY  := $(WASM_DIR)/src/index.cjs

# Node.js sources
NODE_DIR      := js
NODE_ENTRY    := $(NODE_DIR)/src/index.cjs


# ANSI color codes
RED         := \033[0;31m
GREEN       := \033[0;32m
BLUE        := \033[0;34m
CYAN        := \033[0;36m
NC          := \033[0;37m
KT          := \033[0;29m

.PHONY: all build wasm build-wasm run clean

all: build

build: $(CPP_OUT) $(GO_OUT)
	@$(CARGO) build $(CARGOFLAGS)
	@$(MAKE) build-wasm

# Build the Rust→WASM package using wasm-pack
build-wasm:
	cd $(WASM_DIR) && $(WASM_PACK) build $(WASMFLAGS)

$(CPP_OUT): $(CPP_SRC)
	$(CXX) $(CXXFLAGS) -o $@ $<

$(GO_OUT): $(GO_SRC)
	$(GO) build $(GOFLAGS) -o $@ $<

run: build
	@echo
	@echo "$(RED)==> Running C++ implementation$(NC)"
	@for i in 1 2 3 4 5; do ./$(CPP_OUT); done
	@echo
	@echo "$(GREEN)==> Running Go implementation$(NC)"
	@for i in 1 2 3 4 5; do ./$(GO_OUT); done
	@echo
	@echo "$(BLUE)==> Running native Rust implementation$(NC)"
	@for i in 1 2 3 4 5; do $(RS_BIN); done
	@echo
	@echo "$(CYAN)==> Running Node.js WASM implementation$(NC)"
	@for i in 1 2 3 4 5; do $(NODE) $(WASM_ENTRY); done
	@echo
	@echo "$(KT)==> Running Node.js implementation$(NC)"
	@for i in 1 2 3 4 5; do $(NODE) $(NODE_ENTRY); done
	@$(MAKE) clean
clean:
	@rm -f $(CPP_OUT) $(GO_OUT)
	@$(CARGO) clean
	@cd $(WASM_DIR) && rm -rf pkg
