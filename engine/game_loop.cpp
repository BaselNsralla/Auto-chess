#include "../engine_headers/game_loop.hpp"

using namespace engine;

GameLoop::GameLoop(std::unique_ptr<sf::RenderWindow> _window, std::unique_ptr<RootScene> _root_scene)
: window{std::move(_window)}, root_scene{std::move(_root_scene)} 
{}

void GameLoop::start() 
{

    while (window->isOpen())
    {
        sf::Event event;
        while (window->pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window->close();
        }
        //render();

        root_scene.get()->render(*window);
    }

}