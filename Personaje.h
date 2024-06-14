#pragma once
#include "SFML\Graphics.hpp"
#include "Collisionable.h"
#include "ctime"
#include "stdlib.h"
class Personaje : public sf::Drawable, public Collisionable
{
private:
	sf::Sprite _sprite;
	sf::Texture _texture;
	sf::Vector2f _movement;

public:
	Personaje();
	void update();
	void draw(sf::RenderTarget& target, sf::RenderStates states) const override;
	void respawn();
	sf::Sprite getSprite() const;
	sf::FloatRect getBounds() const override;

};


