// 1лаба.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include "func.h"
#include <time.h> 
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <iostream> 
#include <fstream>

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	setlocale(LC_ALL, "rus");
	ifstream ifst("_1.txt");
	ofstream ofst("_2.txt");

	cout << "Лабораторная №1. ПП." << endl;
	
	Node c;
	Init();
	
	In(&c, ifst);
	
	Out(&c, ofst);
	Out1(&c, ofst);
	Clear(&c);
	Out(&c, ofst);
	cout << "Запись выполнена!\a" << endl;
	
	_getch();
	return 0;
}

