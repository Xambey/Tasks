#include "X.h"
//������� 3

int main (int argc, char** argv)
{
	X* obj = new X; //��������� ������������ ������
	print(*obj); //����� ������������� �������
	run(*obj);
	print(*obj);

	delete obj;
	return 0;
}