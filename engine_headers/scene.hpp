#pragma once
#include <vector>
#include <SFML/Graphics.hpp>
namespace engine
{
    class Scene: public sf::RectangleShape {
        private:
            // Drawable data receivers istället
            std::vector<sf::Drawable> drawables;
            sf::RectangleShape container;
            Scene() = delete;
        public:
            Scene(float widht, float height);

    };


} // namespace Engine
