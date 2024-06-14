#include "Portal.h"
#include "SFML\Graphics.hpp"
#include "Collisionable.h"



Portal::Portal()
{
    _texture.loadFromFile("portal.png");
    _sprite.setTexture(_texture);
    _sprite.setPosition(100, 900);
    _sprite.setOrigin(_sprite.getGlobalBounds().width / 2, _sprite.getGlobalBounds().height / 2);
}

void Portal::update()
{
}

void Portal::draw(sf::RenderTarget& target, sf::RenderStates states) const
{
        target.draw(_sprite, states);
}
sf::Sprite Portal::getSprite() const
{
    { return _sprite; }
}

sf::FloatRect Portal::getBounds() const
{
    return _sprite.getGlobalBounds();

 
}