#pragma once
#include <iostream>
#include <cmath>

class X //������� �����
{
protected:
	int *x1, *x2; //���������� ������
public:
	X(int a, int b); //����������� � ��������������
	~X();
	virtual void view(); //����������� ������
	virtual void set();
	//����������� �����, ��������, ��� ��� ����������� ���� ��������������
	//� ����������� ������
};

