#include "stdafx.h"
#include "Rectangle.h"
#include <iostream>

using namespace std;



Rectangle::Rectangle()
{
	length = 0;
	height = 0;
}


Rectangle::~Rectangle()
{

}

void Rectangle::set_height(int h)
{
	height = h;
}

void Rectangle::set_length(int l)
{
	length = l;
}

int Rectangle::get_length()
{
	return length;
}

int Rectangle::get_heigth()
{
	return length;
}

Water::Water()
{
	condition = 1;
}

Water::~Water()
{

}

void Water::set_condition(bool con)
{
	condition = con;
}

bool Water::get_condition()
{
	return condition;
}

void Water::clear_water()
{
	condition = 1;
}
Fish::~Fish()
{
	cout << "Fish died" << endl;
}
Fish::Fish()
{
	hunger = 100;
	x = rand() % 900;
	y = rand() % 900;
	speed = 20;
	this->getting_hungrier();
}
void Fish::set_speed(int sp)
{
	speed = sp;
}

void Fish::getting_hungrier()
{
	while (hunger != 0)
	{
		hunger -= 1;
		random_moving();
		_sleep(10);

	}
	this->~Fish();

}
void Fish::feed()
{
	hunger = 100;
}

void Fish::random_moving()
{
	int xrand, yrand;
	xrand = -1 + rand() % 3;
	yrand = -1 + rand() % 3;
	x = x + xrand*(rand() % speed);
	y = y + yrand*(rand() % speed);
	while (x < 0)
		x = x - 2 * xrand*(rand() % speed);
	while (y < 0)
		y = y - 2 * xrand*(rand() % speed);
	while (abs(x) > length)
		x = x - 2 * xrand*(rand() % speed);
	while (abs(y) > height)
		y = y - 2 * yrand*(rand() % speed);
}
