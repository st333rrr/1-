#include "struct.h"
#include <fstream> 
using namespace std;

void Out(truck &tr, ofstream &ofst);
void In(truck &tr, ifstream &ifst);
void In(bus &b, ifstream &ifst);
void Out(bus &b, ofstream &ofst);
void Init();
avto* In(ifstream &ifst);
void In(Node *c, ifstream &ifst);
void Out(avto &a, ofstream &ofst);
void Out(Node *c, ofstream &ofst);
void Out1(Node *c, ofstream &ofst);
void Clear(Node *c);