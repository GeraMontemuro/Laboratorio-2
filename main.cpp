#include <SFML/Graphics.hpp>
#include <cmath>
#include "gameplay.h"
#include <iostream>
#include "trompo.h"
#include "trompo1.h"
#include "trompo2.h"

int texto(){return -1;}

int main()
{
    sf::RenderWindow window(sf::VideoMode(800, 600), "SFML works!");
    window.setFramerateLimit(60);

    TrompoP1 t1;
    TrompoP2 t2;

    gameplay G;

    sf::Font openn;
            openn.loadFromFile("C:\\Users\\Ususario\\OneDrive\\Documentos\\2023\\lab2\\trompeado\\Trompeando1.0\\stocky.ttf");

            sf::Text a;
            a.setFont(openn);
            a.setString("Perdiste campeon");
            a.setPosition(200,25);
            a.setFillColor(sf::Color::Magenta);
            a.setCharacterSize(30);


int b;

    sf::CircleShape c3(230);
    c3.setFillColor(sf::Color::White);
    c3.setOrigin(c3.getGlobalBounds().width/2, c3.getGlobalBounds().height/2);
    c3.setPosition(400, 340);

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        t1.cmd();
        t1.update();

        t2.cmd();
        t2.update();

        //Colisiones entre trompos
        if(G.Colisionando(t1, t2))
        {
            std:: cout << "Chocando!" << std::endl;

            t1.Rebotar(t2.getDireccion());
            t2.Rebotar(t1.getDireccion());


        }
        else
        {
            // std:: cout << "No chocando!" << std::endl;
        }

        //Colisiones con la Arena
        float distanciaA1, xA1, yA1;
        float distanciaA2, xA2, yA2;

        xA1 = std::abs(c3.getPosition().x - t1.getSprite().getPosition().x);
        yA1 = std::abs(c3.getPosition().y - t1.getSprite().getPosition().y);
        xA2 = std::abs(c3.getPosition().x - t2.getSprite().getPosition().x);
        yA2 = std::abs(c3.getPosition().y - t2.getSprite().getPosition().y);

        distanciaA1 = std::sqrt(xA1*xA1 + yA1*yA1);
        distanciaA2 = std::sqrt(xA2*xA2 + yA2*yA2);

        if(distanciaA1 > (c3.getGlobalBounds().width/2))
        {

            t1.setPosition(-100, -100);
           b= texto();



            //  system("pause");

        }
        if(distanciaA2 > (c3.getGlobalBounds().width/2))
        {
            t2.setPosition(-100, -100);
             b= texto();
        }



        window.clear();
        if(b==-1){window.draw(a);}

        window.draw(c3);
        t1.draw(window);
        t2.draw(window);
        window.display();
    }

    return 0;
}
