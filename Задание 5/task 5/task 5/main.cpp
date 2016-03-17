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
	obj->set(); //обращение к методу происходит относительно типа объека
	//на который указывает указатель
	//и не зависит от типа указателя
	obj->view();

	((Y*)obj)->run(); //неявное обращение к run, через приведение типа

	delete obj;

	system("pause");
	return 0;
}