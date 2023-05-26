#include <SFML/Audio.hpp>
#include <SFML/Graphics.hpp>
int main()
{
    sf::RenderWindow window(sf::VideoMode(800, 600), "SFML works!");
    window.setFramerateLimit(60);

    sf::CircleShape shape(40);
    shape.setFillColor(sf::Color::Green);
    shape.setPosition(100, 100);

    sf::CircleShape shapeSegundo(40);
    shapeSegundo.setFillColor(sf::Color::Magenta);
    shapeSegundo.setPosition(500, 500);

    sf::SoundBuffer buffer;
    buffer.loadFromFile("cancioncita.wav");

    sf::Sound sound;
    sound.setBuffer(buffer);
    sound.play();

    while (window.isOpen())
    {

        //shape move del trompo 1
        if(sf::Keyboard::isKeyPressed(sf::Keyboard::D))
        {
            shape.move(1,0);
        }

        if(sf::Keyboard::isKeyPressed(sf::Keyboard::A))
        {
            shape.move(-1,0);
        }

        if(sf::Keyboard::isKeyPressed(sf::Keyboard::W))
        {
            shape.move(0,-1);
        }

        if(sf::Keyboard::isKeyPressed(sf::Keyboard::S))
        {
            shape.move(0,1);
        }

        //shape move del trompo 2
        if(sf::Keyboard::isKeyPressed(sf::Keyboard::Right))
        {
            shapeSegundo.move(1,0);
        }

        if(sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
        {
            shapeSegundo.move(-1,0);
        }

        if(sf::Keyboard::isKeyPressed(sf::Keyboard::Up))
        {
            shapeSegundo.move(0,-1);
        }

        if(sf::Keyboard::isKeyPressed(sf::Keyboard::Down))
        {
            shapeSegundo.move(0,1);
        }

        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        //window.clear();
        window.draw(shape);
        window.draw(shapeSegundo);
        window.display();
    }

    return 0;
}
