#include "stdafx.h"
#include "struct.h"
#include <fstream> 
using namespace std;

Node *first;
Node *last;
//вывод данных грузовика
void Out(truck &tr, ofstream &ofst)
{
	ofst << "Грузовик: " << tr.name << "; Грузоподъемность: " << tr.gruz << "; Мощность: " << tr.capacity << endl;
}
//ввод данных грузовика
void In(truck &tr, ifstream &ifst)
{
	ifst >> tr.name >> tr.gruz >> tr.capacity;
}
void In(bus &b, ifstream &ifst)
{
	ifst >> b.name >> b.passenger >> b.capacity;
}
//вывод данных автобуса
void Out(bus &b, ofstream &ofst)
{
	ofst << "Автобус: " << b.name << "; Количество мест: " << b.passenger << "; Мощность: " << b.capacity << endl;
}
void Init()
{
	first = 0;
	last = 0;
}
avto* In(ifstream &ifst)
{
	avto *a;
	int k;
	ifst >> k;
	switch (k)
	{
	case 1:
		a = new avto;
		a->k = avto::key::TRUCK;
		In(a->t, ifst);
		return a;
	case 2:
		a = new avto;
		a->k = avto::key::BUS;
		In(a->b, ifst);
		return a;
	}
}

 void In(Node *c, ifstream &ifst)
{
	while (!ifst.eof())
	{
		c = new Node;
		c->data = In(ifst);
		c->next = 0;
		c->prev = 0;

		if (first == 0)
		{
			first = c;
			last = c;
			c->next = first;
			c->prev = last;
		}
		else
		{
			last->next = c;
			c->prev = last;
			last = c;

			c->next = first;
			first->prev = c;
		}
	}
}
void Out(avto &a, ofstream &ofst)
{
	if (avto::key::TRUCK == a.k)
		Out(a.t, ofst);
	if (a.k == avto::key::BUS)
		Out(a.b, ofst);
}
void Out(Node *c, ofstream &ofst)
{
	Node* cur = first;
	while (cur < last)
	{
		Out(*(cur->data), ofst);
		cur = cur->next;
	}
	//cur = last;
	//Out(*(cur->data), ofst);
}

void Out1(Node *c, ofstream &ofst)
{
	Node* cur = last;
	Out(*(cur->data), ofst);
}

void Clear(Node *c)
{
	Node* cur = first;
	while (cur != last)
	{
		if (cur == first)//удаляет первый, следующий становится первым, затем он удалит аналогично его
		{
			last->next = first->next;
			first = first->next;
			first->prev = last;

		}
		cur = cur->next;
	}
}