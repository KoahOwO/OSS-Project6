#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <math.h>

int sel=0;

void P1_1formula(int);
void avrspeed();
void avrvelocity();
void avracceleration();
void momentum();
void impulse();
void joule();
void power();
void kineticenergy();
void potentialenergy();

void P1_2sel()
{
	system("cls");
	printf("1 : �����\n");
	printf("2 : ������\n");
	printf("3 : �ڱ����� ����\n");
	printf("4 : �з����� ��Ģ\n");
	printf("5 : ������ ������\n");
	printf("6 : ���� ����Ʈ���� ������\n");
	printf("0 : \n");
	printf("> ");
	scanf_s("%d", &sel);

	P1_2formula(sel);
}

void P1_2formula(int n)
{
	switch (n)
	{
	case 1:
		system("cls");
		printf("�����\n");
		printf("\"F=kx(Qq)/r^2\" Q,q[C], r[m], k[0. 8.9876x10^9xNxm^2xC^-2, ����]\n");
		ele_for();
		break;

	case 2:
		system("cls");
		printf("������");
		printf("\"E=F/q\" [N/C]");
		ele_field();
		break;

	case 3:
		system("cls");
		printf("�ڱ����� ����");
		printf("\"B=��/s\" [T, 1T=1wb/m^2]\n");
		in_mag_field();
		break;

	case 4:
		system("cls");
		printf("����������");
		printf("\"V=-Nx�ĥ�/��t\" [N: ���� ������ Ƚ��]");
		far_law();
		break;

	case 5:
		system("cls");
		printf("������ ������");
		printf("\"E=hxc/��\" [f=c/��, h: �ö�ũ���, c: ���� �ӷ�, ��: ���� ����]");
		en_photon();
		break;

	case 6:
		system("cls");
		printf("����Ʈ���� ������");
		printf("\"E=|Em-En|\" [m,n: ���ڼ�, ���ڰ� �� �˵� ���̸� �̵��� �� ���� �Ǵ� ����ϴ� ���� ������] ");
		en_at_spectrum();
		break;

	case 0:
		printf("���α׷��� �����մϴ�.");
		Sleep(1000);
		exit(0);
	}
}

void counting()
{
	for (int i = 5; i > 0; i--)
	{
		printf("%d�� �� �������� �̵��մϴ�\n", i);
		Sleep(1000);
	}
	system("cls");
}


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

	result = N*(�� / t);

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

	result =(c / ��);

	printf("E= %fh", result);
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