#include "Trompo.h"


// funcion rebotar despues de la colicion.
void Trompo::Rebotar(sf::Vector2f direccion)
{
    direccion *= 10.f;
    _sprite.move(direccion);

}
// Dibuja el trompo en la ventana del programa
void Trompo::draw(sf::RenderWindow& window)
{
    window.draw(_sprite);
}
//setea la posicion del trompo
void Trompo::setPosition(float x, float y)
{
    _sprite.setPosition(x, y);
}
//devuelve la imagen en tipo de datos Sprite
sf::Sprite Trompo::getSprite()
{
    return _sprite;
}

//devuelve la velocidad con la gira
float Trompo::getVelocidadGiro()
{
    return _velocidadGiro;
}
//devuelve la direccion del trompo
sf::Vector2f Trompo:: getDireccion()
{
    return _direccion;
}

//actuliza el comportamiento (sprite) del trompo.
void Trompo::update()
{
    _frame += _velocidadGiro; //0.2   2

    if(_frame>=8)
    {
        _frame=0;
    }

    _sprite.setTextureRect({0 + int(_frame)*60, 0, 60, 60});

    switch(_estado)
    {
    case TrompoEstado::Quieto:
        break;
    case TrompoEstado::Movimiento:
        _sprite.move(_direccion); //(-2, 2)
        break;
    }
}
