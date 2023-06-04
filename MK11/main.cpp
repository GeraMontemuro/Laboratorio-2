#include <SFML/Graphics.hpp>
#include "Gameplay.h"
#include <cmath>

int main()
{
    sf::RenderWindow window(sf::VideoMode(800, 600), "SFML works!");
    window.setFramerateLimit(60);
    sf::CircleShape c3(30.f);
    c3.setFillColor(sf::Color::Magenta);
    c3.setPosition(200,100);

    Gameplay GP;
    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        GP.cmd();
        GP.update();



        window.clear();
        window.draw(c3);
        GP.draw(window);
        window.display();
    }

    return 0;
}
