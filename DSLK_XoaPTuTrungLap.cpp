#include <bits/stdc++.h>
using namespace std;

struct node 
{
	unsigned int data;
	node *next;
};

void insertFist(node *&head, unsigned int data)
{
	node *p = new node;
	p -> data = data;
	p -> next = head;
	head = p; 
}

void insertLast(node *&head, unsigned int data, node *&tail)
{
	node *p = new node;
	p -> data = data;
	p -> next = NULL;
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
	for(node *i = head; i != NULL; i = i -> next)
	{
		cout << i -> data << " ";		
	}
}

void xoaPtuTrungLap(node *&head)
{
	for(node *i = head; i != NULL; i = i -> next)
	{
		int dem = 0;
		for(node *j = i -> next; j  != NULL;)
		{
			if(i -> data == j -> data)
			{
				dem++;
				node *temp = j;
				j = j -> next;
				i -> next = j -> next;
				
				delete temp;
				
			}
			else
			{
				j = j -> next;
			}
		}
	}
}

// void xoaPtuTrungLap(node *&head)
// {
// 	if(head == NULL)
// 	{
// 		return;
// 	}
//     node *current = head;
//     while (current != NULL)
//     {
//         node *prev = current;
//         node *runner = current->next;
//         while (runner != NULL)
//         {
//             if (current->data == runner->data)
//             {
//                 node *duplicate = runner;
//                 runner = runner->next;
//                 prev->next = runner;
//                 delete duplicate;
//             }
//             else
//             {
//                 prev = runner;
//                 runner = runner->next;
//             }
//         }
//         current = current->next;
//     }
// }

void sapxep(node *&head)
{
	for(node *i = head; i != NULL; i = i -> next)
	{
		for(node *j = head ; j != NULL; j = j -> next)
		{
			if(i -> data < j -> data)
			{
				int temp = i -> data;
				i -> data = j -> data;
				j -> data = temp;
			}
		}
	}
}
int main()
{
	int sopt;
	cin >> sopt;
	node *head = NULL;
	node *tail = NULL;
	for(int i = 0; i < sopt; i++)
	{
		unsigned int data;
		cin >> data;
		insertFist(head, data);
	}
	if(head == NULL)
	{
		return 0;
	}
	xoaPtuTrungLap(head);
	sapxep(head);
	showList(head);
	return 0;
}