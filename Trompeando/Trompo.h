#pragma once
#include "SFML/Graphics.hpp"

class Trompo
{
    protected:
        sf::CircleShape _shape;
        float _velocidad;

    public:
        Trompo();
        sf::CircleShape& getDraw();
};

