CC=g++ --std="c++17"

all: main
	$(CC) scene.o chess_scene.o root_scene.o main.o -o sfml-app -lsfml-graphics -lsfml-window -lsfml-system

main: root_scene
	$(CC) -c main.cpp

root_scene: chess_scene
	$(CC) -c root_scene.cpp -o root_scene.o

chess_scene: scene
	$(CC) -c chess_scene.cpp -o chess_scene.o

scene:
	$(CC) -c engine/scene.cpp -o scene.o