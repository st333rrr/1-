//��������
struct truck
{
	char name[15];
	int gruz; //����������������
	int capacity;
};

struct bus
{
	char name[15];
	int passenger; //������������������������
	int capacity;
};
//���������, ���������� ��� ����
struct avto
{
	//int power; //�������� ���������
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

