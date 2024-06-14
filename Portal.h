#pragma once
#include "SFML\Graphics.hpp"
#include "Collisionable.h"
class Portal : public sf::Drawable, public Collisionable
{
private:
	sf::Sprite _sprite;
	sf::Texture _texture;

public:
	Portal();
	void update();
	void draw(sf::RenderTarget& target, sf::RenderStates states) const override;
	sf::Sprite getSprite()const;
	sf::FloatRect getBounds() const override;
};