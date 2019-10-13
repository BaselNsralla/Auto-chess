#pragma once
#include<memory>
#include<SFML/Graphics.hpp>
#include "root_scene.hpp"

namespace engine 
{

class GameLoop
{
    public:
        GameLoop(std::unique_ptr<sf::RenderWindow> window, std::unique_ptr<RootScene> root_scene);
        std::unique_ptr<sf::RenderWindow> window;
        std::unique_ptr<RootScene> root_scene;
        void start();
};

}