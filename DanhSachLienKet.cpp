#include <iostream>
using namespace std;

struct Node
{
	int data;
	Node *next;	
};

typedef struct Node NODE;
struct list
{
	Node *dau;
	Node *duoi;
};
typedef struct list LIST;
void Tao(list &l)
{
	l.dau = NULL;
	l.duoi = NULL;
}
Node *TaoNode(int x, node *tail)
{
	Node *p = new Node();
	p -> data = x;
	p -> next = NULL;
	return p;
}

void InsertLast(list &l, Node *p)
{
	if(l.dau == NULL)
	{
		l.dau = p;
		l.duoi = p;
	}
	else
	{
		l.duoi -> next = p;
		l.duoi = p;	
	}
}

void inDS (list l)
{
	cout << "Danh sach da nhap la: \n";
	while(l.dau != NULL)
	{
		cout << l.dau -> data << endl;
		l.dau = l.dau -> next;
	}
}

main()
{
	list l;
	int n;
	cout << "Nhap so phan tu cua Danh sach: ";
	cin >> n;
	int x;
	for(int i = 0; i < n; i++)
	{
		cin >> x;
		Node *p = TaoNode(x);
		InsertLast(l, p); 
	}
	char c;
	int a;
	do
	{
		cin >> c >> a;
		if(c == 'i')
		{
			Node *p = TaoNode(a);
			InsertLast(l ,p);
		}
	}while(c == 48 && a == 0);
	inDS(l);
}

