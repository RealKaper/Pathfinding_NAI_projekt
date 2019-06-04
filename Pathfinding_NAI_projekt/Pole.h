#pragma once
#include<iostream>
#include<SFML/Graphics.hpp>

using namespace sf;

class Pole : public Drawable 
{
public:
	int waga;
	Pole(float k_x, float k_y, int kolor);
	Pole() = delete;
	~Pole() = default;

	int value();
	float x();
	float y();
private:
	RectangleShape shape;
	const float poleSize{ 10.f };
	void draw(RenderTarget& target, RenderStates state) const override;
};

