#include "SFML/Graphics.hpp"
#include "Trompo.h"
#include "TrompoP1.h"
#include "TrompoP2.h"
#include <iostream>

int main()
{
    sf::RenderWindow window(sf::VideoMode(800, 600), "Trompeando");
    window.setFramerateLimit(60);

    TrompoP1 t1;
    TrompoP2 t2;

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        t1.update();
        t2.update();

        window.clear();
        window.draw(t1.getDraw());
        window.draw(t2.getDraw());
        window.display();
    }

    return 0;
}
