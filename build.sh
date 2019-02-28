./../../emsdk/emscripten/1.38.28/emcc hello.cpp -s EXPORTED_FUNCTIONS="[_main,_test, _test2]" -s WASM=1 -o hello.js
./disassemble.sh