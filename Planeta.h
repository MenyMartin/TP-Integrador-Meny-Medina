#pragma once
#include "SFML\Graphics.hpp"
#include "Collisionable.h"
class Planeta : public sf::Drawable, public Collisionable
{
private:
	sf::CircleShape _planeta;

public:
	Planeta(int tam, int posX, int posY);
	void update();
	void draw(sf::RenderTarget& target, sf::RenderStates states) const override;
	sf::CircleShape getPlaneta()const;
	sf::FloatRect getBounds() const override;
};

