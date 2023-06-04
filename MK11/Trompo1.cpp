#include "Trompo1.h"
#include <cmath>

//constructor
Trompo1::Trompo1(){

    _texture.loadFromFile("trompo1.png");
    _sprite.setTexture(_texture);
    _sprite.setOrigin(_sprite.getGlobalBounds().width/2, _sprite.getGlobalBounds().height/2);
    _sprite.setTextureRect({0,0,60,60});//ver video
    _sprite.setPosition(450,300);
    _velocidad= 2.f;
    _velocidadGiro= 0.10f;
  }
void Trompo1::cmd(){

    _direccion={0,0};

 if(sf::Keyboard::isKeyPressed(sf::Keyboard::Up)){

    _direccion.y= -_velocidad; // (x=0,y=-2)
    _estado=TrompoEstado::Movimiento;
 }
  if(sf::Keyboard::isKeyPressed(sf::Keyboard::Down)){

    _direccion.y= _velocidad; // (x=0,y=+2)
    _estado=TrompoEstado::Movimiento;
 }
  if(sf::Keyboard::isKeyPressed(sf::Keyboard::Right)){

    _direccion.x= _velocidad; // (x=2,y=0)
    _estado=TrompoEstado::Movimiento;
 }
  if(sf::Keyboard::isKeyPressed(sf::Keyboard::Left)){

    _direccion.x= -_velocidad; // (x=-2,y=0)
    _estado=TrompoEstado::Movimiento;
 }

}

