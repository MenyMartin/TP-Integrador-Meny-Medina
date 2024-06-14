#include "Planeta.h"

Planeta::Planeta(int tam, int posX, int posY)
{
    _planeta.setRadius(tam);
    _planeta.setPosition(posX, posY);
    _planeta.setFillColor(sf::Color::Green);
    _planeta.setOrigin(_planeta.getGlobalBounds().width / 2, _planeta.getGlobalBounds().height / 2);
}

void Planeta::update()
{
}

void Planeta::draw(sf::RenderTarget& target, sf::RenderStates states) const
{
    target.draw(_planeta, states);
}

sf::CircleShape Planeta::getPlaneta() const
{
    return _planeta;
}

sf::FloatRect Planeta::getBounds() const
{
    return _planeta.getGlobalBounds();
}
