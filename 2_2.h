#pragma once
#include <stdio.h>

void ele_for()				//����� electric_force
{
	double Q, q, r, result;

	printf("Q: ");
	scanf_s("%lf", &Q);
	printf("q: ");
	scanf_s("%lf", &q);
	printf("r: ");
	scanf_s("%lf", &r);

	result = Q * q / (r * r);

	printf("F= %f", result);
	counting();
}

void ele_field()		//������ electric_field
{
	double F, q, result;

	printf("F: ");
	scanf_s("%lf", &F);
	printf("q: ");
	scanf_s("%lf", &q);

	result = F / q;

	printf("E= %f", result);
	counting();
}

void far_law()				//���������� Faraday's_Law
{
	double N, ��, t, result;

	printf("N: ");
	scanf_s("%lf", &N);
	printf("��: ");
	scanf_s("%lf", &��);
	printf("t: ");
	scanf_s("%lf", &t);

	result = Nx(�� / t);

	printf("V= %f", result);
	counting();
}

void in_mag_field()			//�ڱ����� ���� intensity of magnetic field
{
	double ��, s, result;

	printf("��: ");
	scanf_s("%lf", &��);
	printf("s: ");
	scanf_s("%lf", &s);

	result = �� / s;

	printf("B= %f", result);
	counting();
}

void en_photon()			//������ ������
{
	double c, ��, result;

	printf("c: ");
	scanf_s("%lf", &c);
	printf("��: ");
	scanf_s("%lf", &��);

	result = hx(c / ��);

	printf("E= %f", result);
	counting();
}

void en_at_spectrum()		//���ڽ���Ʈ���� ������
{
	double Em, En, a, result;
	result = 0;

	printf("Em: ");
	scanf_s("%lf", &Em);
	printf("En: ");
	scanf_s("%lf", &En);

	a = Em - En;

	if (a > 0)
		result = a;
	else if (a < 0)
		result = -a;

	printf("E= %f", result);
	counting();
}