#include<iostream>
#include<iomanip>
using namespace std;
const double pi = 3.14159;
int main()
{
	double radius;
	double height;
	cout << "������뾶�͸߶�" << endl;
	cin >> radius >> height;
	double  circumference = 2 * pi * radius;
	double circular_area = pi * radius * radius;
	double ball_area = 4 * pi * radius * radius;
	double ball_volume = 4 * pi * radius * radius * radius / 3;
	double cylindrical_volume = pi * radius * radius * height;
	cout << "Բ�ܳ�     " << ":" << " " << fixed << setprecision(2) << circumference << endl;
	cout << "Բ���     " << ":" << " " << fixed << setprecision(2) << circular_area << endl;
	cout << "Բ������ " << ":" << " " << fixed << setprecision(2) << ball_area << endl;
	cout << "Բ�����   " << ":" << " " << fixed << setprecision(2) << ball_volume << endl;
	cout << "Բ�����   " << ":" << " " << fixed << setprecision(2) << cylindrical_volume << endl;
	return 0;
}