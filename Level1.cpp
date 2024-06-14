#include "Level1.h"
#include "Director.h"
#include "Personaje.h"
#include "Portal.h"
#include "Limite.h"


Level1::Level1()
{
	_texture.loadFromFile("fondo1.jpeg");
	_image.setTexture(_texture);
}

void Level1::draw(sf::RenderTarget& target, sf::RenderStates states) const
{
	target.draw(_image, states);
	target.draw(haleBopp.getSprite(), states);
	target.draw(portal.getSprite(), states);
	target.draw(limite1.getLimite(), states);
	target.draw(limite2.getLimite(), states);
	target.draw(limite3.getLimite(), states);
	target.draw(asteroide1.getSprite(), states);
	target.draw(asteroide2.getSprite(), states);
	target.draw(asteroide3.getSprite(), states);
	target.draw(asteroide4.getSprite(), states);
	target.draw(planeta1.getPlaneta(), states);
	target.draw(planeta2.getPlaneta(), states);
	target.draw(planeta3.getPlaneta(), states);
}


void Level1::update()
{
	///cambio de nivel manual
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::L)) {
		Director::getInstance().changeLevel(2);
	}

	///colision portal
	if (haleBopp.isCollision(portal)) {
		director.changeLevel(2);
		haleBopp.respawn();
	}

	///colisiones Hale Bopp - limites
	if (haleBopp.isCollision(limite1)) {
		haleBopp.respawn();
	}

	if (haleBopp.isCollision(limite2)) {
		haleBopp.respawn();
	}

	if (haleBopp.isCollision(limite3)) {
		haleBopp.respawn();
	}

	///colision Hale Bopp-asteroide
	if (haleBopp.isCollision(asteroide1) || haleBopp.isCollision(asteroide2) || haleBopp.isCollision(asteroide3) || haleBopp.isCollision(asteroide4)) {
		haleBopp.respawn();
	}

	///colision Hale Bopp - planetas
	if (haleBopp.isCollision(planeta1)|| haleBopp.isCollision(planeta2) || haleBopp.isCollision(planeta3)) {
		haleBopp.respawn();
	}

	///colisiones de asteroides
	///asteroide 1
	if (asteroide1.isCollision(limite1)) {
		asteroide1.setMoveY();
	}

	if (asteroide1.isCollision(limite2)) {
		asteroide1.setMoveY();
	}

	if (asteroide1.isCollision(limite3)) {
		asteroide1.setMoveY();
	}

	if (asteroide1.isCollision(planeta1) || asteroide1.isCollision(planeta2) || asteroide1.isCollision(planeta3) || asteroide1.isCollision(asteroide2) 
		|| asteroide1.isCollision(asteroide3) || asteroide1.isCollision(asteroide4)) {
		asteroide1.setMoveX();
		asteroide1.setMoveY();
	}

	///asteroide 2
	if (asteroide2.isCollision(limite1)) {
		asteroide2.setMoveY();
	}

	if (asteroide2.isCollision(limite2)) {
		asteroide2.setMoveY();
	}

	if (asteroide2.isCollision(limite3)) {
		asteroide2.setMoveY();
	}
	if (asteroide2.isCollision(planeta1) || asteroide2.isCollision(planeta2) || asteroide2.isCollision(planeta3) || asteroide2.isCollision(asteroide1) 
		|| asteroide2.isCollision(asteroide3) || asteroide2.isCollision(asteroide4)) {
		asteroide2.setMoveX();
		asteroide2.setMoveY();
	}
	///asteroide 3
	if (asteroide3.isCollision(limite1)) {
		asteroide3.setMoveY();
	}

	if (asteroide3.isCollision(limite2)) {
		asteroide3.setMoveY();
	}

	if (asteroide3.isCollision(limite3)) {
		asteroide3.setMoveY();
	}

	if (asteroide3.isCollision(planeta1)|| asteroide3.isCollision(planeta3) || asteroide3.isCollision(planeta2) || asteroide3.isCollision(asteroide2) 
		|| asteroide3.isCollision(asteroide1) || asteroide3.isCollision(asteroide4)) {
		asteroide3.setMoveX();
		asteroide3.setMoveY();
	}
	///asteroide 4
	if (asteroide4.isCollision(limite1)) {
		asteroide4.setMoveY();
	}

	if (asteroide4.isCollision(limite2)) {
		asteroide4.setMoveY();
	}

	if (asteroide4.isCollision(limite3)) {
		asteroide4.setMoveY();
	}

	if (asteroide4.isCollision(planeta1) || asteroide4.isCollision(planeta2) || asteroide4.isCollision(planeta3) || asteroide4.isCollision(asteroide2) || asteroide4.isCollision(asteroide3)) {
		asteroide4.setMoveX();
		asteroide4.setMoveY();
	}

	haleBopp.update();
	portal.update();
	asteroide1.update();
	asteroide2.update();
	asteroide3.update();
	asteroide4.update();
	planeta1.update();
	planeta2.update();
	planeta3.update();

}


