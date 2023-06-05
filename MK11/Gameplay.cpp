#include "Gameplay.h"
#include <cmath>

bool Gameplay::colision(Trompo T1, Trompo T2){

  float distancia,x,y;

  x=std::abs(T1.getSprite().getPosition().x-T2.getSprite().getPosition().x);
  y=std::abs(T1.getSprite().getPosition().y-T2.getSprite().getPosition().y);

  distancia=std::sqrt(x*x+y*y);

  if(distancia<(T1.getSprite().getGlobalBounds().width/2 + T2.getSprite().getGlobalBounds().width/2)){
    return true;}

  return false;
}

void Gameplay::cmd(){

  P1.cmd();
  P2.cmd();
}
void Gameplay::update(){

  P1.update();
  P2.update();

  //colisionar trompos
  if (colision(P1,P2)){
  P1.Rebotar(P2.getDireccion());
  P2.Rebotar(P1.getDireccion());
  }



}
void Gameplay::draw(sf::RenderWindow& window){

  P1.draw(window);
  P2.draw(window);
}
