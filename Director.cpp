#include "Director.h"
#include "Level1.h"
#include "Level2.h"

Director* Director::_pDirector = nullptr;


Director::Director()
{
	_pCurrentLevel = nullptr;
}

void Director::draw(sf::RenderTarget& target, sf::RenderStates states) const
{
	target.draw(*_pCurrentLevel, states);
}

void Director::update()
{
	_pCurrentLevel->update();
}

Director& Director::getInstance()
{
	if (Director::_pDirector == nullptr) {
		Director::_pDirector = new Director();
	}
	return *Director::_pDirector;
}

void Director::changeLevel(int number)
{
	if (_pCurrentLevel != nullptr) {
		delete _pCurrentLevel;
	}


	switch (number)
	{
	case 0:
		_pCurrentLevel = new Menu;
		break;
	case 1:
		_pCurrentLevel = new Level1;
		break;
		case 2:
		_pCurrentLevel = new Level2;	
	default:
		break;
	}
}
 


