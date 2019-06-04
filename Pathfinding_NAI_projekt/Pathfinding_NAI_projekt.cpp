// Pathfinding_NAI_projekt.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
#include <cstdlib>
#include <ctime>
#include<SFML/Graphics.hpp>
#include<SFML/Window.hpp>
#include "Pole.h"
#include "Menu.h"

using namespace sf;
using namespace std;

int main()
{
	RenderWindow window{ VideoMode{800, 1010}, "PathFinding" };
	window.setFramerateLimit(60);
	Menu menu();
	Event event;

	unsigned mapSze{ 80 }, mapDlu{ 80 };
	int kolor;
	vector<Pole> pola;
	srand(time(NULL));
	for (int i=0; i<mapSze; i++)
	{
		for (int j=0; j < mapDlu; j++)
		{
			kolor = rand() % 5;
			pola.emplace_back((i)*10, (j)*10, kolor);
		}
	}

	while (true)
	{
		window.clear(Color::Black);
		window.pollEvent(event);

		if (event.type == Event::Closed)
		{
			window.close();
			break;
		}
		for (auto& pole : pola)
		{
			window.draw(pole);
		}
		menu.draw(window);
		window.display();
	}



	return 0;
}