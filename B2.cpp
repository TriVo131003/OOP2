#include<iostream>
#include<cmath>

using namespace std;

class Point
{
private:
	int x, y;
public:
	Point() {
		x = 0;
		y = 0;
	}
	void Nhap()
	{
		cout << "Nhap gia tri x:"; 
		cin >> x;
		cout << "Nhap gia tri y:"; 
		cin >> y;
	}
	void Xuat()
	{
		cout << "Toa do diem (x,y)= (" << x << "," << y << ")";
	}
	float Khoangcach(Point b)
	{
		return (float)sqrt(pow(x - b.x, 2) + pow(y - b.y, 2));
	}
	int getx() {
		return x;
	}
	int gety() {
		return y;
	}
};

int main() {
	Point A;
	cout << "Nhap diem A:\n";
	A.Nhap();
	Point B;
	cout << "Nhap diem B:\n";
	B.Nhap();
	cout << "Khoang cach giua hai diem la: " <<  A.Khoangcach(B);
}