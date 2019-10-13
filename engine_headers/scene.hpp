#pragma once
#include <vector>
#include <SFML/Graphics.hpp>
#include "render_interface.hpp"

namespace engine
{
    class Scene: public sf::RectangleShape, public RenderInterface {
        private:
            // Drawable data receivers istället
            std::vector<sf::Drawable> drawables;
            sf::RectangleShape container;
            Scene() = delete;
        public:
            Scene(float widht, float height);
            void render(sf::RenderWindow& window) override;
            // add child scenes?
            // add drawables
    };


} // namespace Engine
