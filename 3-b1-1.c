#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
const double pi = 3.14159;
int main()
{
	printf("������뾶�͸߶�\n");
	double radius;
	double height;
	scanf(" %lf %lf", &radius, &height);
	double  circumference = 2 * pi * radius;
	double circular_area = pi * radius * radius;
	double ball_area=4*pi* radius * radius;
	double ball_volume= 4 * pi * radius * radius*radius/3;
	double cylindrical_volume = pi * radius * radius * height;
	printf("Բ�ܳ�     : ");
	printf("%.2lf\n",circumference);
	printf("Բ���     : ");
	printf("%.2lf\n",circular_area);
	printf("Բ������ : ");
	printf("%.2lf\n",ball_area);
	printf("Բ�����   : ");
	printf("%.2lf\n",ball_volume);
	printf("Բ�����   : ");
	printf("%.2lf\n",circular_area);
	return 0;
}