#include <stdio.h>
#include <locale.h> 
#include <math.h>
void task1();
void task2();
void task2_6();
void task4();

void main()
{

	setlocale(LC_CTYPE, "RUS");
	task4();

}


void task1()
{

	char c = '!';

	int i = 2;

	float f = 3.14f;

	double d = 5e-12;


	puts("������� ������� char=");
	scanf("%c", &c);
	printf("char=%c, %d, %x\n", c, c, c);
	puts("������� ������� int=");
	scanf("%i", &i);
	printf("int=%d, %x\n", i, i);
	puts("������� ������� float=");
	scanf("%f", &f);
	int b = f;
	printf("%f ����� ����� %d � ������� %f\n", f, b, f - b);
	puts("������� ������� double=");
	scanf("%le", &d);
	printf("%le\n", d);
	printf("&f", 1. / i);
	printf("%d, %c, %f, %le", i, c, f, d);



}

void task2()
{

	int a = 11, b = 3, x;
	float y;
	double z;

	x = (int)a / (int)b;
	y = (float)a / (float)b;
	z = (double)a / (double)b;
	printf("x=%i y=%g z=%le", x, y, z);
}

void task2_6()
{

	int a = 11, b = 3;

	printf("x=%i y=%g z=%le", (int)a / b, (float)a / b, (double)a / b);
}

void task4() // ������� 17
{
	int Vc, H, Vp;
	double S;
	printf("������� �������� H=\n");
	scanf("%d", &H);
	printf("������� �������� Vc=\n");
	scanf("%d", &Vc);
	printf("������� �������� Vp=\n");
	scanf("%d", &Vp);
	printf("S =%f", S=H+(Vp-Vc)) //S = H + V��������� * t ����   (V���������=Vp-Vc) ????


}