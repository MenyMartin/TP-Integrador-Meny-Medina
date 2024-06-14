#include "Limite.h"
#include "SFML\Graphics.hpp"
#include "Collisionable.h"



Limite::Limite(int tam1, int tam2, int pos1, int pos2)
{
    _limite.setSize(sf::Vector2f(tam1, tam2));
    _limite.setPosition(pos1, pos2);
    _limite.setFillColor(sf::Color::Red);
    _limite.setOrigin(_limite.getGlobalBounds().width / 2, _limite.getGlobalBounds().height / 2);
}

void Limite::update()
{
}

void Limite::draw(sf::RenderTarget& target, sf::RenderStates states) const
{
    target.draw(_limite, states);
}
sf::RectangleShape Limite::getLimite() const
{
    { return _limite; }
}

sf::FloatRect Limite::getBounds() const
{
    return _limite.getGlobalBounds();


}
