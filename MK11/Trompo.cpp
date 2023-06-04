#include "Trompo.h"

//ver el estado del trompo (Giro del Trompo en su mismo eje)
 void Trompo::update(){

   switch(_estado){

    case TrompoEstado::Quieto:
    break;

    case TrompoEstado::Movimiento:
      _sprite.move(_direccion);
    break;
    }


  }

 void Trompo::setPosition(float x, float y){

    _sprite.setPosition(x,y);

  }
 void Trompo::draw(sf::RenderWindow& window){

    window.draw(_sprite);
  }
