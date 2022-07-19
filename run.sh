#/bash/bin

emcmake cmake -DEMSCRIPTEN_FORCE_COMPILERS=OFF -DCMAKE_BUILD_TYPE=Release -S . -B build
cd build

emmake make
