#include "Order.h"

int main(int argc, char** argv)
{
	Order<int> obj(5); //������� ������ � ������ ��� ��������
	obj.set(3); //����� ������
	obj.print(); //�����
	system("pause");
}