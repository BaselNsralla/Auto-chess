#include "../engine_headers/root_scene.hpp"
// === EDITOR LIKES THIS
#include <memory>
#include <SFML/Graphics.hpp>
//#include "scene.hpp"

using namespace engine;
// RootScene ska till engine och ska bara kunna bära Scener
// RootScene* RootScene::scene = nullptr;

// RootScene* RootScene::get_instance()
// {
//     if (RootScene::scene) { return RootScene::scene; }
//     RootScene::scene = new AC::RootScene();
//     return RootScene::scene;
// }


RootScene::RootScene() 
{
    // TOOD: parametrize views
    //window = std::make_unique<sf::RenderWindow>(sf::VideoMode(width,height), "Root Scene");
}

void RootScene::set_child_scene(engine::Scene* scene) {
    delete this->child_scene;
    child_scene = scene; 
}

void RootScene::render(sf::RenderWindow& window) 
{
    window.clear();
    sf::CircleShape shape(25.f);
    shape.setFillColor(sf::Color::Green);
    
    
    child_scene->render(window);

    window.draw(shape);
    window.display();
}
