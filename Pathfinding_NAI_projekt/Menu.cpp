#include "Menu.h"

using namespace sf;

Menu::Menu()
{
	if (!font.loadFromFile("arial.ttf"))
	{
		// handle error
	}

	menu[0].setFont(font);
	menu[0].setColor(Color::Red);
	menu[0].setString("Play");
	menu[0].setPosition(Vector2f(0, 810));

	menu[1].setFont(font);
	menu[1].setColor(Color::White);
	menu[1].setString("Options");
	menu[1].setPosition(Vector2f(0, 910));

	menu[2].setFont(font);
	menu[2].setColor(Color::White);
	menu[2].setString("Exit");
	menu[2].setPosition(Vector2f(400, 810));

	menu[3].setFont(font);
	menu[3].setColor(Color::White);
	menu[3].setString("Exit2");
	menu[3].setPosition(Vector2f(400, 910));

	selectedItemIndex = 0;
}


Menu::~Menu()
{
}

void Menu::draw(RenderWindow& window)
{
	for (int i = 0; i < 4; i++)
	{

		window.draw(menu[i]);
	}
}

void Menu::MoveUp()
{
	if (selectedItemIndex - 1 >= 0)
	{
		menu[selectedItemIndex].setColor(Color::White);
		selectedItemIndex--;
		menu[selectedItemIndex].setColor(Color::Red);
	}
}

void Menu::MoveDown()
{
	if (selectedItemIndex + 1 < 4)
	{
		menu[selectedItemIndex].setColor(Color::White);
		selectedItemIndex++;
		menu[selectedItemIndex].setColor(Color::Red);
	}
}
