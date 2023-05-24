#include "trompo2.h"

//contructor con parametros definidos
TrompoP2::TrompoP2()
{
    _texture.loadFromFile("trompo2.png");
    _sprite.setTexture(_texture);
    _sprite.setTextureRect({0,0,60,60});
    _sprite.setOrigin(_sprite.getGlobalBounds().width/2, _sprite.getGlobalBounds().height/2);
    _sprite.setPosition(350, 300);
    _velocidad = 2.f;
    _velocidadGiro = 0.25f;
}

//UPDATE:comandos de teclado  para jugador 2
void TrompoP2:: cmd()
{
    _direccion = {0,0};
    _estado = TrompoEstado::Quieto;

    if(sf::Keyboard::isKeyPressed(sf::Keyboard::W))
    {
        _direccion.y = -_velocidad;
        _estado = TrompoEstado::Movimiento;
    }
    if(sf::Keyboard::isKeyPressed(sf::Keyboard::S))
    {
        _direccion.y = _velocidad;
        _estado = TrompoEstado::Movimiento;
    }
    if(sf::Keyboard::isKeyPressed(sf::Keyboard::D))
    {
        _direccion.x = _velocidad;
        _estado = TrompoEstado::Movimiento;
    }
    if(sf::Keyboard::isKeyPressed(sf::Keyboard::A))
    {
        _direccion.x = -_velocidad;
        _estado = TrompoEstado::Movimiento;
    }
}


