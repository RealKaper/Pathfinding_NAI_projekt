#pragma once
#include<SFML/Graphics.hpp>

using namespace sf;

class Menu
{
	Menu();
	Menu() = delete;
	~Menu() = default;

	void draw(RenderWindow& window);
	void MoveUp();
	void MoveDown();
	int GetPressedItem() { return selectedItemIndex; }

private:
	int selectedItemIndex;
	Font font;
	Text menu[4];
};

