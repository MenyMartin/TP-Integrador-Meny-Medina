#include "Menu.h"
#include "Director.h"
#include "Personaje.h"

Menu::Menu()
{
    font.loadFromFile("Roboto-Black.ttf");

    const char* options[Opciones_Menu] = { "Jugar", "Opciones", "Salir" };

    for (int i = 0; i < Opciones_Menu; ++i) {
        menuTexts[i].setFont(font);
        menuTexts[i].setFillColor(i == Seleccionador ? sf::Color::Red : sf::Color::White);
        menuTexts[i].setString(options[i]);
        menuTexts[i].setPosition(sf::Vector2f(1800 / 2.0f, 1000 / (Opciones_Menu + 1) * (i + 1)));
    }
}

void Menu::draw(sf::RenderTarget& target, sf::RenderStates states) const
{
    for (int i = 0; i < Opciones_Menu; ++i) {
        target.draw(menuTexts[i], states);
    }
}

void Menu::MoverArriba()
{
    if (Seleccionador - 1 >= 0) {
        menuTexts[Seleccionador].setFillColor(sf::Color::White);
        Seleccionador--;
        menuTexts[Seleccionador].setFillColor(sf::Color::Red);
    }
}

void Menu::MoverAbajo()
{
    if (Seleccionador + 1 < Opciones_Menu) {
        menuTexts[Seleccionador].setFillColor(sf::Color::White);
        Seleccionador++;
        menuTexts[Seleccionador].setFillColor(sf::Color::Red);
    }
}

int Menu::OpcionSeleccionada() const
{
    return Seleccionador;
}

void Menu::update()
{
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up)) {
            MoverArriba();
            }
    else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down)) {
        MoverAbajo();
    }
        else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Enter)) {
        int selectedIndex = OpcionSeleccionada();
             if (selectedIndex == 0) {
                 Director::getInstance().changeLevel(1);
              }
             else if (selectedIndex == 1) {
           
                 }
                else if (selectedIndex == 2) {
                ///
                 }

        }
}
