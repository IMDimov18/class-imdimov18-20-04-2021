#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Point2D
{
public:
	// Parameterless constructor (ctor)
	Point2D()
	{
		cout << "Constructor1" << endl;
		xCoord = 0;
		yCoord = 0;
	}

	Point2D(float newX, float newY)
	{
		cout << "Constructor2: " << newX << ", " << newY << endl;
		this->xCoord = newX;
		yCoord = newY;
	}

	Point2D(const Point2D& p)
	{
		cout << "Copy constructor" << endl;
		xCoord = p.xCoord;
		yCoord = p.yCoord;
	}

	~Point2D()
	{
		cout << "Destructor: " << xCoord << ", " << yCoord << endl;
	}

	void toString()
	{
		cout << xCoord << ", " << yCoord << endl;
	}

	Point2D operator+(Point2D& otherPoint)
	{
		this->xCoord += otherPoint.xCoord;
		this->yCoord += otherPoint.yCoord;

		return *this;
	}

	_declspec(property(put = setX, get = getX)) float x;

	void setX(float newValue)
	{
		if (newValue < -200)
		{
			throw "Invalid da!";
		}

		xCoord = newValue;

	}

	float getX()
	{
		return xCoord;
	}

	void setY(float newValue)
	{
		yCoord = newValue;
	}

	float getY()
	{
		return yCoord;
	}

private:


	float xCoord;
	float yCoord;
	string s = "dame";
};

Point2D dump(Point2D p)
{
	p.toString();

	return p;
}

int main()
{
	Point2D pp1(3, 4);
	Point2D pp2(5, 6);
	Point2D pp3;
	Point2D* p2 = new Point2D();
	Point2D* p3 = new Point2D(4.6, 5.)

    Point2D arr[10];
	

	delete p2;
	delete p3;
	
}