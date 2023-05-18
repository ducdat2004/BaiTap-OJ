#include <iostream>
#include <string>
#include <string.h>
#include <stdlib.h>
using namespace std;

struct QuanLyHocPhan
{
    char *mahp = (char*) malloc(10);
    char *tenhp = (char*) malloc(10);
    int sotc;
};
typedef struct QuanLyHocPhan hp;
struct node
{
    hp data;
    node *next;
};
node *head = NULL;
node *taonode(char a[], char b[], int c)
{
    node *p = new node;
    p -> data.mahp = a;
    p -> data.tenhp = b;
    p -> data.sotc = c;
    p -> next = head;
    head = p;
    return p;
}
void in()
{
    while (head != NULL)
    {
    	cout << "Danh sach da nhap la: " << endl;
        cout << head -> data.mahp << endl;
        head = head->next;
    }   
}
int main()
{
    char a[10];
    char b[10];
    int c;
    while(true)
    {
        cout << "Nhap ma hoc phan, ten hoc phan: " << endl;
        gets(a);
        gets(b);
        if(strlen(a) == 0)
        {
            break;
        }
        cout << "Nhap so TC: " << endl;
        cin >> c;
        node *p = taonode(a, b, c);   
		head = p;  
    }
	 while (head != NULL)
    {
    	cout << "Danh sach da nhap la: " << endl;
        cout << head -> data.mahp << endl;
        head = head->next;
    } 
}
