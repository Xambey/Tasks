#include "X.h"
//������� 3

int main (int argc, char** argv)
{
	X* obj = new X; //��������� ������������ ������
	print(*obj); //����� ������������� �������
	run(*obj);
	print(*obj);

	obj->~X(); //����� ����������� (����������� �������)
	return 0;
}