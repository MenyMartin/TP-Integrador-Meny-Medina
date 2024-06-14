#include "Asteroide.h"
#include "SFML\Graphics.hpp"
#include "Collisionable.h"
#include "ctime"
#include "stdlib.h"


Asteriode::Asteriode(int pos1, int pos2)
{
    _movement = { 5,5 };
    _texture.loadFromFile("asteroide.png");
    _sprite.setTexture(_texture);
    _sprite.setOrigin(_sprite.getGlobalBounds().width / 2, _sprite.getGlobalBounds().height / 2);
    _sprite.setPosition(pos1, pos2);
}

void Asteriode::setMoveY()
{
    _movement.y = -_movement.y;
}

void Asteriode::setMoveX()
{
    _movement.x = -_movement.x;
}

void Asteriode::draw(sf::RenderTarget& target, sf::RenderStates states) const
{
    target.draw(_sprite, states);
}

sf::Sprite Asteriode::getSprite() const
{
    return _sprite;
}

sf::FloatRect Asteriode::getBounds() const
{
    return _sprite.getGlobalBounds();
}


void Asteriode::update()
{

    _sprite.move(_movement.x, _movement.y);


    if (_sprite.getGlobalBounds().left < 0) {
        _movement.x = -_movement.x;
        _sprite.setRotation(0.f);
    }
    if (_sprite.getGlobalBounds().top < 0) {
        _movement.y = -_movement.y;
        _sprite.setRotation(0.f);
    }
    if (_sprite.getGlobalBounds().left + _sprite.getGlobalBounds().width > 1800) {
        _movement.x = -_movement.x;
        _sprite.setRotation(0.f);
    }
    if (_sprite.getGlobalBounds().top + _sprite.getGlobalBounds().height > 1000) {
        _movement.y = -_movement.y;
        _sprite.setRotation(0.f);
    }
}




