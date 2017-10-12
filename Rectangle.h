#pragma once
class Rectangle
{
private:
	int length, height;
public:
	Rectangle();
	void set_length(int);
	int get_length();
	void set_height(int);
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
	bool get_condition();
	void set_condition(bool);
};
class Fish : public Rectangle
{
private:
	int hunger, x, y, speed;
public:
	Fish();
	~Fish();
	void set_x(int);
	void set_y(int);
	int get_x();
	int get_y();
	void getting_hungrier();
	void random_moving();
	void set_speed(int)
};
class NemoFish : public Fish
{
private:
	
};