#include "stdafx.h"
#include "Rectangle.h"
#include <iostream>
#include <stdio.h>
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

Rectangle::void set_height(int h)
{
	height = h;
}

Rectangle::void set_length(int l)
{
	length = l;
}

Rectangle::int get_length()
{
	return length;
}

Rectangle::int get_height()
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

Water:: void set_condition(bool con)
{
	condition = con;
}

Water:: bool get_condition()
{
	return condition;
}

Water:: void clear_water()
{
	condition = 1;
}

Fish::Fish()
{
	hunger = 100;
	x = rand() % 900 ;
	y = rand() % 900;
	speed = 20;
}
Fish::void set_speed(int sp)
{
	speed = sp;
}

Fish:: void getting_hungrier();
{
	while (hunger != 0) {
		hunger -= 1;
		sleep(10);
}

Fish:: void random_moving();
{
	x = x + rand() % speed;
	y = y + rand() % speed;
}