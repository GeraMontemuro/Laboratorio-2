#ifndef GAMEPLAY_H
#define GAMEPLAY_H
#include "Trompo1.h"
#include "Trompo2.h"


class Gameplay
{
  Trompo1 P1;
  Trompo2 P2;

  private:
  bool colision(Trompo t1, Trompo t2);

  public:
    void cmd();
    void update();
    void draw(sf::RenderWindow& window);

};

#endif // GAMEPLAY_H
