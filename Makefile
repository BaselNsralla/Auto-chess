CC=g++ --std="c++17"

all: main
	$(CC) game_loop.o scene.o chess_scene.o root_scene.o main.o -o sfml-app -lsfml-graphics -lsfml-window -lsfml-system

main: chess_scene game_loop 
	$(CC) -c main.cpp


# GAME
# game some beror av engine

# är beroende av scene egentligen
chess_scene:
	$(CC) -c chess_scene.cpp -o chess_scene.o

# ENGINE
game_loop: root_scene
	$(CC) -c engine/game_loop.cpp -o game_loop.o

root_scene: scene
	$(CC) -c engine/root_scene.cpp -o root_scene.o

scene: 
	$(CC) -c engine/scene.cpp -o scene.o

