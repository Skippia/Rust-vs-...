### Install dependencies
```sh
curl https://sh.rustup.rs -sSf | sh && \
cargo install wasm-pack
```

### Run build
```sh
cd js-wasm && \
wasm-pack build --release --target nodejs
```

### Run app
```sh
node ./src/index.cjs
```
