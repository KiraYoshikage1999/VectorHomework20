
#include <iostream>
#include <string.h>

using namespace std;


//ostream& operator+(ostream& os2, const Vector2& vectorXYZ2)
//{
//	os2 << vectorXYZ2.x;
//
//	return os2;
//}

class Vector2 {
	int x = 3;
	int y = 2;
public:

	Vector2() {
		x = 3;
		y = 2;
	}

	int getX() {
		return this->x;
	}

	int getY() {
		return this->y;
	}

	void PrintInfo() {
		cout << "Vector3: " << x << " " << y << " " << endl;
	}

};

class Vector {
	int x;
	int y;
	int z;
public:

	Vector() {
		x = 5;
		y = 9;
		z = 4;

	}

	int getXVec() {
		return this->x;
	}

	int getYVec() {
		return this->y;
	}

	int getZVec() {
		return this->y;
	}

	Vector(int x, int y, int z) {
		this->x = x;
		this->y = y;
		this->z = z;
	}



	Vector operator+(const Vector& other) {
		this->x += other.x;
		this->y += other.y;
		this->z += other.z;

		return *this;
	}

	Vector operator-(const Vector& other) {
		this->x -= other.x;
		this->y -= other.y;
		this->z -= other.z;

		return *this;
	}

	Vector operator++() {
		++this->x;
		++this->y;
		++this->z;

		return *this;
	}

	Vector operator--() {
		--this->x;
		--this->y;
		--this->z;

		return *this;
	}

	Vector operator++(int) {
		Vector temp = *this;
		++this->x;
		++this->y;
		++this->z;

		return temp;
	}

	Vector operator--(int) {
		Vector temp = *this;
		--this->x;
		--this->y;
		--this->z;

		return temp;
	}

	bool operator>>(const Vector& other) {
		if (this->x > other.x) {
			return true;
		}
		else {
			return false;

		}
	}

	bool operator>=(const Vector& other) {
		if (this->x >= other.x) {
			return true;
		}
		else {
			return false;

		}
	}

	bool operator<<(const Vector& other) {
		if (this->x < other.x) {
			return true;
		}
		else {
			return false;

		}
	}

	bool operator<=(const Vector& other) {
		if (this->x <= other.x) {
			return true;
		}
		else {
			return false;

		}
	}

	bool operator==(const Vector& other) {
		if (this->x == other.x) {
			return true;
		}
		else {
			return false;

		}
	}

	Vector operator=(const Vector& other) {
		this->x = other.x;
		this->y = other.y;
		this->z = other.z;

		return *this;

	}

	friend Vector operator+(Vector& current, Vector2& vectorXYZ);
	friend Vector operator-(Vector& current, Vector2& vectorXYZ);
	friend bool operator>>(Vector& current, Vector2& vectorXYZ);
	friend bool operator<<(Vector& current, Vector2& vectorXYZ);
	friend bool operator<=(Vector& current, Vector2& vectorXYZ);
	friend bool operator>=(Vector& current, Vector2& vectorXYZ);
	friend bool operator==(Vector& current, Vector2& vectorXYZ);


	void PrintInfo() {
		cout << "Vector3: " << x << " " << y << " " << z << " " << endl;
	}


};

Vector operator+(Vector& current, Vector2& vectorXYZ)
{
	return Vector(current.x + vectorXYZ.getX(), current.y + vectorXYZ.getY(), current.z);
}

Vector operator-(Vector& current, Vector2& vectorXYZ)
{
	return Vector(current.getXVec() - vectorXYZ.getX(), current.getYVec() - vectorXYZ.getY(), current.getZVec());
}

bool operator>>(Vector& current, Vector2& vectorXYZ)
{
	if (current.getXVec() > vectorXYZ.getX()) {

		return true;
	}
	else {
		return false;
	}

}

bool operator<<(Vector& current, Vector2& vectorXYZ)
{
	if (current.getXVec() < vectorXYZ.getX()) {
		return true;
	}
	else {
		return false;
	}

}

bool operator<=(Vector& current, Vector2& vectorXYZ)
{
	if (current.getXVec() <= vectorXYZ.getX()) {
		return true;
	}
	else {
		return false;
	}

}

bool operator>=(Vector& current, Vector2& vectorXYZ)
{
	if (current.getXVec() >= vectorXYZ.getX()) {
		return true;
	}
	else {
		return false;
	}

}

bool operator==(Vector& current, Vector2& vectorXYZ)
{
	if (current.getXVec() == vectorXYZ.getX()) {
		return true;
	}
	else {
		return false;
	}
}

int main()
{
	Vector2 obj4;
	Vector obj;
	Vector obj2 = Vector(4, 5, 9);

	Vector obj3 = obj + obj2;
	obj3.PrintInfo();

	obj3 = obj - obj2;
	obj3.PrintInfo();

	++obj;
	obj.PrintInfo();
	--obj;
	obj.PrintInfo();
	obj++;
	obj.PrintInfo();
	--obj;
	obj.PrintInfo();

	if (obj >> obj2) {
		cout << "obj >> obj2" << endl;
	}
	else {
		cout << "obj2 >> obj" << endl;
	}

	if (obj >= obj2) {
		cout << "obj >= obj2" << endl;
	}
	else {
		cout << "obj2 >= obj" << endl;
	}

	if (obj == obj2) {
		cout << "obj == obj2" << endl;
	}
	else {
		cout << "obj2 == obj" << endl;
	}

	if (obj <= obj2) {
		cout << "obj <= obj2" << endl;
	}
	else {
		cout << "obj2 <= obj" << endl;
	}

	if (obj << obj2) {
		cout << "obj << obj2" << endl;
	}
	else {
		cout << "obj2 << obj" << endl;
	}

	obj = obj2;

	obj = obj + obj4;
	obj - obj4;

	if (obj >> obj4) {
		cout << "obj >> obj4" << endl;

	}
	else {
		cout << "obj4 >> obj" << endl;
	}

	if (obj << obj4) {
		cout << "obj >> obj4" << endl;

	}
	else {
		cout << "obj4 >> obj" << endl;
	}

	if (obj >= obj4) {
		cout << "obj >> obj4" << endl;

	}
	else {
		cout << "obj4 >> obj" << endl;
	}
	if (obj <= obj4) {
		cout << "obj >> obj4" << endl;

	}
	else {
		cout << "obj4 >> obj" << endl;
	}
	if (obj == obj4) {
		cout << "obj >> obj4" << endl;

	}
	else {
		cout << "obj4 >> obj" << endl;
	}


	obj4.PrintInfo();
	obj.PrintInfo();
}


