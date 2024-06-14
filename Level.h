#pragma once
#include "SFML/Graphics.hpp"
class Level : public sf::Drawable
{
public:
	virtual void draw(sf::RenderTarget& target, sf::RenderStates states) const;
	virtual void update();
};


