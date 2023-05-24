#include "gameplay.h"
#include<cmath>
#include <SFML/Graphics.hpp>

//colicion de los trompos
 bool gameplay::Colisionando(Trompo t1, Trompo t2)
        {
            float distancia, x, y;

            x = std::abs(t1.getSprite().getPosition().x - t2.getSprite().getPosition().x);
            y = std::abs(t1.getSprite().getPosition().y - t2.getSprite().getPosition().y);


            distancia = std::sqrt(x*x + y*y);

           if(distancia < (t1.getSprite().getGlobalBounds().width/2 + t2.getSprite().getGlobalBounds().width/2))
            {
                return true;
            }

            return false;
        }

/*bool gameplay::cambiodevelocidad (Trompo t1, trompo t2)
{

}*/
