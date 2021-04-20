#include <iostream>
#include <string>

using namespace std;

class Point2D
{
public:
	// Parameterless constructor (ctor)
	Point2D()
	{
		cout << "Constructor1" << endl;
		x = 0;
		y = 0;
	}

	Point2D(float newX, float newY)
	{
		cout << "Constructor2: " << newX << ", " << newY << endl;
		this->x = newX;
		y = newY;
	}

	Point2D(const Point2D& p)
	{
		cout << "Copy constructor" << endl;
		x = p.x;
		y = p.y;
	}

	~Point2D()
	{
		cout << "Destructor: " << x << ", " << y << endl;
	}

	void toString()
	{
		cout << x << ", " << y << endl;
	}

	Point2D operator+(Point2D& otherPoint)
	{
		this->x += otherPoint.x;
		this->y += otherPoint.y;

		return *this;
	}

private:
	float x;
	float y;
};

Point2D dump(Point2D p)
{
	p.toString();

	return p;
}

int main()
{
	Point2D pp1;
	Point2D pp2;
	Point2D* p2 = new Point2D();
	Point2D* p3 = new Point2D(4.6, 5.);
	dump(pp1);

	pp1 + pp2;
	pp1.toString();
	p2->toString();
	p3->toString();

	delete p2;
	delete p3;
}