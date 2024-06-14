#pragma once
#include "Level.h"
#include "Personaje.h"
#include "Portal.h"
#include "Limite.h"
#include "Director.h"
#include "Director.h"
#include "SFML\Graphics.hpp"
class Level2 : public Level
{
private:
	sf::Sprite _image;
	sf::Texture _texture;
	Personaje haleBopp;
	Portal portal;
	Limite limite1 { 3200,20,0,200 },limite2{ 3200,10,1800,500 }, limite3{ 3200,10,0,800 };;
	Director& director = Director::getInstance();
public:
	Level2();
	 void draw(sf::RenderTarget& target, sf::RenderStates states) const;
	 void update();
};

