#include "TrompoP2.h"

TrompoP2::TrompoP2()
{
    _shape.setPosition(300, 300);
}

//UPDATE: Se realiza la actualizacion de los estados en el objeto
void TrompoP2::update()
{
        //ARRIBA
        if(sf::Keyboard::isKeyPressed(sf::Keyboard::Up))
        {
            _shape.move(0,-_velocidad);
        }
        //ABAJO
        if(sf::Keyboard::isKeyPressed(sf::Keyboard::Down))
        {
            _shape.move(0,_velocidad);
        }
        //IZQUIERDA
        if(sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
        {
            _shape.move(-_velocidad,0);
        }
        //DERECHA
        if(sf::Keyboard::isKeyPressed(sf::Keyboard::Right))
        {
            _shape.move(_velocidad,0);
        }


        //rebotes en ventana
        if(_shape.getGlobalBounds().left < 0)
        {
            _shape.setPosition(0,_shape.getPosition().y);
        }

        if(_shape.getGlobalBounds().top < 0)
        {
            _shape.setPosition(_shape.getPosition().x,0);
        }

        if(_shape.getGlobalBounds().left + _shape.getGlobalBounds().width > 800)
        {
            _shape.setPosition(800 - _shape.getGlobalBounds().width, _shape.getPosition().y);
        }

        if(_shape.getGlobalBounds().top + _shape.getGlobalBounds().height > 600)
        {
            _shape.setPosition(_shape.getPosition().x,600 - _shape.getGlobalBounds().height);
        }


}
