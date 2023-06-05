#ifndef TROMPO_H
#define TROMPO_H
#pragma once
#include <SFML/Graphics.hpp>

enum class TrompoEstado{

    Quieto,
    Movimiento

};

class Trompo
{
  protected:
  sf::Sprite _sprite;
  sf::Texture _texture;
  float _velocidad;
  sf::Vector2f _direccion;
  float _frame;
  float _velocidadGiro;
  TrompoEstado _estado =TrompoEstado::Quieto;

  public:
  void update();//SETEAR GIRO DEL TROMPO.
  void setPosition(float x, float y);
  void draw(sf::RenderWindow& window);
  sf::Sprite getSprite();
  void Rebotar(sf::Vector2f direccion);
  sf::Vector2f getDireccion();


};

#endif // TROMPO_H
