#pragma once
#include <cstring>
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <ostream>
#include <locale>
class String
{
	char* value;
public:
	String(char*);
	String();
	~String();
	void print();
	void set(char*);
	String& operator=(String& s);
};

