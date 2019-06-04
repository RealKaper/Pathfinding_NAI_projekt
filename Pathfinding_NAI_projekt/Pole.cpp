#include "Pole.h"

using namespace sf;
using namespace std;

Pole::Pole(float k_x, float k_y, int kolor)
{
	shape.setPosition(k_x, k_y);
	shape.setSize(Vector2f(this->poleSize, this->poleSize));
	this->waga = kolor;
	if (kolor == 0)
	{
		shape.setFillColor(Color::Red);
	}
	else
	{
		if (kolor == 1)
		{
			shape.setFillColor(Color::Green);
		}
		else
		{
			if (kolor == 2)
			{
				shape.setFillColor(Color::Yellow);
			}
			else
			{
				if (kolor == 3)
				{
					shape.setFillColor(Color::Red);
				}
				else
				{
					if (kolor == 4)
					{
						shape.setFillColor(Color::Black);
					}
					
				}
			}
		}
	}
}

void Pole::draw(RenderTarget& target, RenderStates state) const
{
	target.draw(this->shape, state);
}

int Pole::value()
{
	return waga;
}

float Pole::x()
{
	return this->shape.getPosition().x;
}

float Pole::y()
{
	return this->shape.getPosition().y;
}