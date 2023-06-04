#include "Trompo2.h"
#include <cmath>

Trompo2::Trompo2(){

    _texture.loadFromFile("trompo2.png");
    _sprite.setTexture(_texture);
    _sprite.setOrigin(_sprite.getGlobalBounds().width/2, _sprite.getGlobalBounds().height/2);
    _sprite.setTextureRect({0,0,60,60});//ver video
    _sprite.setPosition(350,300);
    _velocidad= 2.f;
    _velocidadGiro= 0.25f;

}

void Trompo2::cmd(){

 _direccion={0,0};

 if(sf::Keyboard::isKeyPressed(sf::Keyboard::W)){

    _direccion.y= -_velocidad; // (x=0,y=-2)
    _estado=TrompoEstado::Movimiento;
 }
  if(sf::Keyboard::isKeyPressed(sf::Keyboard::S)){

    _direccion.y= _velocidad; // (x=0,y=+2)
    _estado=TrompoEstado::Movimiento;
 }
  if(sf::Keyboard::isKeyPressed(sf::Keyboard::D)){

    _direccion.x= _velocidad; // (x=2,y=0)
    _estado=TrompoEstado::Movimiento;
 }
  if(sf::Keyboard::isKeyPressed(sf::Keyboard::A)){

    _direccion.x= -_velocidad; // (x=-2,y=0)
    _estado=TrompoEstado::Movimiento;
 }

}
