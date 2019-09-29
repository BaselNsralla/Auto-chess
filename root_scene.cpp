#include "root_scene.hpp"
// === COMPILER LIKES THIS
#include <memory>
#include <SFML/Graphics.hpp>

using namespace AC;

RootScene* RootScene::scene = nullptr;

RootScene* RootScene::get_instance()
{
    if (RootScene::scene) { return RootScene::scene; }
    RootScene::scene = new AC::RootScene();
    return RootScene::scene;
}


RootScene::RootScene() 
{
    window = std::make_unique<sf::RenderWindow>(sf::VideoMode(200,200), "Root Scene");
}

void RootScene::render() 
{
    window->clear();

    sf::CircleShape shape(100.f);
    shape.setFillColor(sf::Color::Green);

    window->draw(shape);
    window->display();
}

void RootScene::begin()
{
    while (window->isOpen())
    {
        sf::Event event;
        while (window->pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window->close();
        }
        render();
    }
}