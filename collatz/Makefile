# Makefile for collatz_timer in C++, Go, and Rust (via Cargo)

# Compilers / tools
CXX       := g++
GO        := go
CARGO     := cargo
NODE     := node

# Flags
CXXFLAGS  := -std=c++17 -O3
GOFLAGS   := -ldflags="-s -w"
CARGOFLAGS:= --release

# Sources and targets
CPP_SRC   := collatz.cpp
CPP_OUT   := collatz_cpp

GO_SRC    := collatz.go
GO_OUT    := collatz_go

# Rust: we'll let Cargo build it into target/release/collatz
RS_BIN    := target/release/collatz

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

.PHONY: all build run clean

all: build

build: $(CPP_OUT) $(GO_OUT)
	@$(CARGO) build $(CARGOFLAGS)

$(CPP_OUT): $(CPP_SRC)
	$(CXX) $(CXXFLAGS) -o $@ $<

$(GO_OUT): $(GO_SRC)
	$(GO) build $(GOFLAGS) -o $@ $<

run: build
	@echo "$(RED)==> Running C++ implementation$(NC)"
	@./$(CPP_OUT)
	@./$(CPP_OUT)
	@./$(CPP_OUT)
	@./$(CPP_OUT)
	@./$(CPP_OUT)
	@echo
	@echo "$(GREEN)==> Running Go implementation$(NC)"
	@./$(GO_OUT)
	@./$(GO_OUT)
	@./$(GO_OUT)
	@./$(GO_OUT)
	@./$(GO_OUT)
	@echo
	@echo "$(BLUE)==> Running native Rust implementation$(NC)"
	@$(RS_BIN)
	@$(RS_BIN)
	@$(RS_BIN)
	@$(RS_BIN)
	@$(RS_BIN)
	@echo
	@echo "$(KT)==> Running Node.js implementation$(NC)"
	@for i in 1 2 3 4 5; do $(NODE) $(NODE_ENTRY); done
	@$(MAKE) clean
clean:
	@rm -f $(CPP_OUT) $(GO_OUT)
	@$(CARGO) clean

