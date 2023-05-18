#include <bits/stdc++.h>
#include <string>
using namespace std;

struct Node 
{
	string maHP, tenHP;
	int soTC;
	Node * next;	
};

int main()
{
	Node * F = NULL;
	string a, b;
	int c;
	Node * p;
	do
	{
		cout << "Ma HP: ";
		cin >> a;
		fflush(stdin);
		if(a != "NULL")
		{
			cout << endl << "Ten HP: ";
			cin >> b;
			cout << endl << "SoTC: ";
			cin >> c;
		}		
		p = new Node();
		p -> maHP = a;
		p -> tenHP = b;
		p -> soTC = c;
		p -> next = NULL;
		cout << endl << p -> maHP << endl;		
		cout << F -> tenHP << endl;
		cout << F -> soTC << endl;
	}while(a != "NULL");
	int i = 0;
//	while(p != NULL)
//	{
//		i++;
//		cout << "Hoc Phan " << i << endl;
//		cout << endl << p -> maHP << endl;		
//		cout << F -> tenHP << endl;
//		cout << F -> soTC << endl;
//		p = p -> next;
//	}
}
