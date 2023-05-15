
#include <iostream>

using namespace std;

class Rectangle {
	int wigth;
	int height;
public:
	Rectangle(int wigth, int height) {
		this->wigth = wigth;
		this->height = height;
	}
	int getArea() {
		return wigth * height;
	}
	int getPerimetr() {
		return 2 * (wigth + height);
	}


};



int main()
{
	setlocale(LC_ALL, "ru");
	Rectangle one = Rectangle(2, 2);
	cout << "Площадь: " << one.getArea() << endl;
	cout << "периметр: " << one.getPerimetr() << endl;

	return 0;
}
 


/*
class Point {
	float x;
	float y;
public:
	Point(float x, float y) {
		this->x = x;
		this->y = y;
		cout << "Вызван конструктор" << endl;
	}

	void show() {
		cout << x << "  " << y << endl;
	}
	float getX() {
		return x;
	}

	float getY() {
		return y;
	}
	void setY(float y) {
		this->y = y;
	}
	void setX(float x) {
		this->x = x;

	}

};
*/