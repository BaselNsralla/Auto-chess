all: main
	g++ --std="c++17" root_scene.o main.o -o sfml-app -lsfml-graphics -lsfml-window -lsfml-system

main: root_scene
	g++ --std="c++17" -c main.cpp

root_scene:
	g++ --std="c++17" -c root_scene.cpp -o root_scene.o
