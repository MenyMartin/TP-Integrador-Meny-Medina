#pragma once
#include "SFML\Graphics.hpp"
#include "Collisionable.h"
class Limite : public sf::Drawable, public Collisionable
{
private:
	sf::RectangleShape _limite;

public:
	Limite(int tam1, int tam2, int pos1, int pos2);
	void update();
	void draw(sf::RenderTarget& target, sf::RenderStates states) const override;
	sf::RectangleShape getLimite()const;
	sf::FloatRect getBounds() const override;
};

