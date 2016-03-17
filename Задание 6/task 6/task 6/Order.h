#pragma once
#include <iostream>
#include <cmath>

template <typename T> //������ 
class Order
{
private:
	T N;
	T* order;
public:
	Order();
	Order(int value); // ������������� ������� � �������� �������
	~Order(); //����������
	void print(); //����� ������� ������ � ���� |a1|, |a1+a2|, |a1+a2+a3|,...,|a1+a2+...an|
	void set(int value); //������������� ������ �������, �������� value
};

template <typename T>
Order<T>::Order() //����������� �� ���������
{
	N = 0;
	order = 0;
}
template <typename T>
Order<T>::Order(int value) : N(value) 
{
	order = new T[N]; //�������� ������
	std::cout << "Order with size = " << N << std::endl;
	for (int i(0); i < N; i++)
	{
		std::cout << i + 1 << " element = ";
		std::cin >> order[i];
	}
	std::cout << std::endl;
}

template <typename T>
Order<T>::~Order() //���������� � ���������, ��� order �� ������
{
	if (order)
	{
		delete[] order;
	}
}

template <typename T>
void Order<T>::print()
{
	T count(0);
	std::cout << "Order = ";
	for (int i(0); i < N; i++)
	{
		std::cout << abs(order[i]) + count << " ";
		count += abs(order[i]);
	}
	std::cout << std::endl;
}

template <typename T>
void Order<T>::set(int value)
{
	delete[] order;
	N = value;
	order = new T[value];
	std::cout << "Order with size = " << N << std::endl;
	for (int i(0); i < N; i++)
	{
		std::cout << i + 1 << " element = ";
		std::cin >> order[i];
	}
	std::cout << std::endl;
}


