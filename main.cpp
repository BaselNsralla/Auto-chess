#include <SFML/Graphics.hpp>
#include <memory>
#include "engine_headers/root_scene.hpp"
#include "engine_headers/game_loop.hpp"
#include "chess_scene.hpp"

#define WIDTH 300
#define HEIGHT 300

int main()
{
    //AC::RootScene* root = AC::RootScene::get_instance();
    auto root_scene_ptr  = std::make_unique<RootScene>();
    auto chess_scene_ptr = new AC::ChessScene(WIDTH, HEIGHT);
    // subklasser definerar behaviour
    root_scene_ptr.get()->set_child_scene(chess_scene_ptr);

    auto window_ptr = std::make_unique<sf::RenderWindow>(sf::VideoMode(WIDTH, HEIGHT), "Root Scene");

    engine::GameLoop* gameLoop = new GameLoop(std::move(window_ptr), std::move(root_scene_ptr));
    gameLoop->start();
    //engine::RootScene* root_scene = new engine::RootScene();

   
    return 0;
}