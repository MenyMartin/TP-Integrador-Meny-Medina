#pragma once
#include "SFML\Graphics.hpp"
#include "Collisionable.h"
#include "ctime"
#include "stdlib.h"
class Asteriode : public sf::Drawable, public Collisionable
{
private:
	sf::Sprite _sprite;
	sf::Texture _texture;
	sf::Vector2f _movement;

public:
	Asteriode(int pos1, int pos2);
	void setMoveY();
	void setMoveX();
	void update();
	void draw(sf::RenderTarget& target, sf::RenderStates states) const override;
	sf::Sprite getSprite() const;
	sf::FloatRect getBounds() const override;

};

