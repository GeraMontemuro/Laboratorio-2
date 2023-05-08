#include "Trompo.h"

Trompo::Trompo()
{
    _shape.setFillColor(sf::Color::Magenta);
    _shape.setRadius(30);
    _velocidad = 3;
}

sf::CircleShape& Trompo::getDraw()
{
    return _shape;
}
