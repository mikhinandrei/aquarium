#pragma once
class Rectangle
{
private:
	int length, height;
public:
	Rectangle();
	void set_length();
	int get_length();
	void set_height();
	int get_heigth();
	~Rectangle();
};
class Water : public Rectangle																																																																																														``																````````````````````````````````````````````````																																					```````````																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																					````````````````````````````````````````````````````````````````````							```																																																																																																																																																													`````````````````````````																																																																																																																																																																																																																																																																									```````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````																																																																																																																																																																																																																																																																																																																																														````````````````````````````																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																															``````````````																																																																																											
{	
private :
	bool condition;
public:
	Water();
	~Water();
	void clear_water();
	void get_condition();
	void set_condition();
};
class Fish : public Rectangle
{
private:
	int hunger, x, y;
public:
	Fish();
	~Fish();
	void set_x();
	void set_y();
	int get_x();
	int get_y();
	void getting_hungrier();
	void random_moving();
};
class NemoFish : public Fish
{
private:
	
};