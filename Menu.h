#pragma once
#include "Level.h"
#include "Director.h"
#include "Personaje.h"
#include "SFML\Graphics.hpp"

const int Opciones_Menu = 3;

class Menu :public sf::Drawable, public Level
{
public:
    Menu();
    void draw(sf::RenderTarget& target, sf::RenderStates states) const override;
    void MoverArriba();
    void MoverAbajo();
    int OpcionSeleccionada() const;
    void update();

private:
    sf::Text menuTexts[Opciones_Menu];
    sf::Font font;
    int Seleccionador = 0;
};

