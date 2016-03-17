#include "X.h"
#include "Y.h"

int main(int argc, char** argv)
{
	X *obj = new X(4, 5); 

	obj->view(); 
	obj->set(); 
	obj->view(); 

	delete 	obj;

	obj = new Y(20, 15, 2); 
	obj->view();
	obj->set(); //��������� � ������ ���������� ������������ ���� ������
	//�� ������� ��������� ���������
	//� �� ������� �� ���� ���������
	obj->view();

	((Y*)obj)->run(); //������� ��������� � run, ����� ���������� ����

	delete obj;

	system("pause");
	return 0;
}