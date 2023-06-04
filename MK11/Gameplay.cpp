#include "Gameplay.h"

void Gameplay::cmd(){

  P1.cmd();
  P2.cmd();
}
void Gameplay::update(){

  P1.update();
  P2.update();
}
void Gameplay::draw(sf::RenderWindow& window){

  P1.draw(window);
  P2.draw(window);
}
