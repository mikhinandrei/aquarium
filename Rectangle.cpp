#include "stdafx.h"
#include "Rectangle.h"
#include <iostream>
#include <dos.h>

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

int Rectangle:: get_length()
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

 void Water:: set_condition(bool con)
{
	 condition = con;
}

bool Water:: get_condition()
{
	return condition;
}

void Water:: clear_water()
{
	condition = 1;
}
Fish::~Fish()
{

}
Fish::Fish()
{
	hunger = 100;
	x = rand() % 900 ;
	y = rand() % 900;
	speed = 20;
}
void Fish:: set_speed(int sp)
{
	speed = sp;
}

void Fish::getting_hungrier()
{
	while (hunger != 0)
	{
		hunger -= 1;
		sleep(10);
	}
}

	void Fish::random_moving()
{
	x = x + rand() % speed;
	y = y + rand() % speed;
}

int main()
{
	int h=900;
	return 0;
}
