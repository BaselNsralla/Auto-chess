#include "../engine_headers/scene.hpp"

using namespace engine;


Scene::Scene(float widht, float height): sf::RectangleShape::RectangleShape(sf::Vector2f(widht, height)) {
    sf::RectangleShape::setFillColor(sf::Color::Cyan);
}
