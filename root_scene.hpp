#pragma once
#include <memory>
#include <SFML/Graphics.hpp>
#include <vector>
#include "chess_scene.hpp"

/* 
    En ROOT scene som driver hela spelet,
    Den tar hand om att drag ingång spelet på
    ett bra sätt,

    Den kan äga flera andra scener som kan rendreras 
    andra scener kan rendrera olika andra scener kallas för 
    subscene. För att rendrera en scene så navigerar du dit 
    med en requenst navigation.

    för att scnene ska rendreas så behöver den ett context, 
    en context är en sak som kan ge möjlighet till render på window.

    Persistent och unpersistent scenese finns också

    (1) -> Ska vi säga att en scene skapas med en reference till scnenen före som den kan kalla hard_draw på som
           i sin tur kallar hard_draw uppåt osv?.

    (2) -> ska vi dangla ner window referensen? det ger ju samma effekt som (1) med mindre funktioner på stacken.

    (3) -> ska vi skicka(dingla) in window refernsen i de olika draw funktionerna som parameter där?.

    (4) -> ska vi ha ett context till Scnener som de ärver ifrån som sköter den biten med upp o ner rendrering?. 

*/

namespace AC
{
    class RenderInterface {
        protected:
        virtual void render() = 0;
    };

    class RootScene: AC::RenderInterface {

        std::unique_ptr<sf::RenderWindow> window;
        private:
            RootScene(); 

        public:
            static RootScene* scene;
            static RootScene* get_instance();
            std::unique_ptr<ChessScene> chess_scene{std::make_unique<ChessScene>(200,200)};
            
            void render() override; 
            void begin();
    };
    
}