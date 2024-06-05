@ECHO OFF
cd classes
g++ -c *.cpp

cd ..

g++ main.cpp -Iinclude/SDL2 -Llib -lSDL2 -lSDL2main -msse3 -DSDL_MAIN_HANDLED  -o saida
