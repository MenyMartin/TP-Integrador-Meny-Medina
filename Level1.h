#pragma once
#include "Level.h"
#include "Personaje.h"
#include "Portal.h"
#include "Limite.h"
#include "Asteroide.h"
#include "Planeta.h"
#include "Director.h"
#include "SFML\Graphics.hpp"
#include "SFML/Audio.hpp"

class Level1 : public Level
{
private:
	sf::Sprite _image;
	sf::Texture _texture;
	Personaje haleBopp;
	Portal portal;
	Limite limite1{ 3200,10,0,200 }, limite2{ 3200,10,1800,500 }, limite3{3200,10,0,800};
	Asteriode asteroide1{ 1500,100 }, asteroide2{ 300,400 }, asteroide3{ 800,700 }, asteroide4{1400,900};
	Planeta planeta1{ 65,1600,200 }, planeta2{ 65, 200, 500 }, planeta3{65, 1600, 800};

	Director& director = Director::getInstance();
public:
	Level1();
	 void draw(sf::RenderTarget& target, sf::RenderStates states) const;
	 void update();
};


