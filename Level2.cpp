#include "Level2.h"
#include "Director.h"
#include "Personaje.h"
#include "Portal.h"

Level2::Level2()
{
	_texture.loadFromFile("fondo2.jpeg");
	_image.setTexture(_texture);
	
}

void Level2::draw(sf::RenderTarget& target, sf::RenderStates states) const
{
	target.draw(_image, states);
	target.draw(haleBopp.getSprite(), states);
	target.draw(portal.getSprite(), states);
	target.draw(limite1.getLimite(), states);
	target.draw(limite2.getLimite(), states);
	target.draw(limite3.getLimite(), states);
}

void Level2::update()
{
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::L)) {
		Director::getInstance().changeLevel(1);}
	
	if (haleBopp.isCollision(portal)) {
		director.changeLevel(1);
		haleBopp.respawn();
	}

	if (haleBopp.isCollision(limite1)) {
		haleBopp.respawn();
	}

	if (haleBopp.isCollision(limite2)) {
		haleBopp.respawn();
	}

	if (haleBopp.isCollision(limite3)) {
		haleBopp.respawn();
	}
	haleBopp.update();
	portal.update();
}
