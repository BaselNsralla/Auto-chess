#pragma once
#include <SFML/Graphics.hpp>

namespace engine {

class RenderInterface {
    protected:
    virtual void render(sf::RenderWindow& window) = 0;
};

}