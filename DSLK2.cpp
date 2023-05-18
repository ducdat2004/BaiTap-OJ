#include <bits/stdc++.h>
using namespace std;

struct node 
{
	int data;
	node *next;
};
//node *head = NULL;

void insertLast(node *&head, node *&tail, int data)
{
	node *p = new node;
	p -> data = data;
	p -> next = NULL;
	node *list = p;
	if(head == NULL)
	{
		head = p;
		tail = p;
	}
	else
	{
		tail -> next = p;
		tail = p;
	}
}

void showList(node *head)
{
	cout << "Danh sach da nhap: " << endl;
	for(node *i = head; i != NULL; i = i -> next)
	{
		cout << i -> data << " ";
	}
}

void InsertBeforePosition(node *&head, int x, int pos)
{	
	
	if(head == NULL)
	{
		return;
	}
	else
	{
		if(pos == 1)
		{
			node *newNode = new node;
			newNode -> data = x;
			newNode -> next = head;
			head = newNode;
		}
		else
		{
			int SoPT = 0;
			for(node *i = head; i != NULL; i = i -> next)
			{
				SoPT++;
			}
			if(pos < 1 || pos > SoPT)
			{
				node *newNode = new node;
				newNode -> data = x;
				newNode -> next = NULL;
				node *i = head;
				while(i -> next != NULL)
				{
					i = i -> next;	
				}
				i -> next = newNode;	
			}	
			else
			{
				int p = 1;
				for(node * i = head; i != NULL; i = i -> next)
				{
					if(pos - 1 == p)
					{
						node *newNode = new node;
						newNode -> data = x;
						newNode -> next = i -> next;
						i -> next = newNode;
					}
					p++;
				}
			}
		} 
	}	
}

void Delete(node *&head, int pos)
{
	int SoPT = 0;
	for(node *i = head; i != NULL; i = i -> next)
	{
		SoPT++;
	}
	if(pos < 1 || pos > SoPT)
		return;
	else
	{
		if(pos == 1)
		{
			node *temp = head;
			head = head -> next;
			delete temp;
		}
		else
		{
			int p = 1;
			node *current = head;
			node *link = NULL;
			while(current != NULL)
			{
				if(pos - 1 == p)
				{
					link = current;
				}
				if(p == pos)
				{
					link -> next = current -> next;
					delete current;
					return;
				}
				p++;
				current = current -> next;
			}
		}
		
	}
}

float Average(node * head)
{
	int SoPT = 0;
	for(node *i = head; i != NULL; i = i -> next)
	{
		SoPT++;
	}
	float tbc, tong = 0;
	for(node *i = head; i != NULL; i = i -> next)
	{
		tong += i -> data;
	}
	tbc = tong / SoPT;
	return tbc;
}
int main()
{
	node *head = NULL;
	node *tail = NULL;
	int data;
	int sopt;
	cin >> sopt;
	for(int i = 0; i < sopt; i++)
	{
		cin >> data;
		insertLast(head, tail, data);
	}
	char choose;
	while(true)
	{
		int s;
		cin >> choose;
		switch(choose)
		{
			case 'i':
			{
				int x;
				cin >> x;
				int pos;
				cin >> pos;
				InsertBeforePosition(head, x, pos);
				break;
			}	
			case 'd':
				{
					int pos;
					cin >> pos;
					Delete(head, pos);
					break;
				}
			case 'a':
			{
				printf("%.4f\n", Average(head));
				break;
			}
			case '0':
				{
					cin >> s;
				}
		}
		if(s == 0)
			break;
	}
}

