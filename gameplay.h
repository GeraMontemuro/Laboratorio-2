#ifndef GAMEPLAY_H
#define GAMEPLAY_H
#pragma once
#include "Trompo.h"
#include <SFML/Graphics.hpp>


 //controla la colicion entre trompos.
class gameplay
{
    public:///deberia de ser privado
        bool Colisionando(Trompo t1, Trompo t2);
        bool cambiodevelocidad (Trompo t1, Trompo t2);

};

#endif // GAMEPLAY_H
