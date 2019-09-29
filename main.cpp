#include <SFML/Graphics.hpp>
#include <memory>
#include "root_scene.hpp"


int main()
{
    AC::RootScene* root = AC::RootScene::get_instance();
    root->begin();
    return 0;
}