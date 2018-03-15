//грузовик
struct truck
{
	char name[15];
	int gruz; //грузоподъемность
	int capacity;
};

struct bus
{
	char name[15];
	int passenger; //пассажировместительность
	int capacity;
};
//структура, обобщающая все авто
struct avto
{
	//int power; //мощность двигателя
	enum key { TRUCK, BUS };
	key k;
	union
	{
		truck t;
		bus b;
	};
};
struct Node
{
	avto* data;
	Node *next;
	Node *prev;
	int count;
};

