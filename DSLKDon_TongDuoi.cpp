#include <iostream>
using namespace std;

struct node
{
    int data;
    node *next;
};
node *head = NULL;
node *tail = NULL;
void InsertLast(int data)
{
    node *p = new node;
    p -> data = data;
    p -> next = NULL;
    if(head == NULL)
    {
        head = tail = p;
    }
    else
    {
        tail -> next = p;
        tail = p;
    }
}

void InsertFirst(int data)
{
    node *p = new node;
    p -> data = data;
    p -> next = head;
    head = p;
}
int sum(int k)
{
    int dem = 0;
    int tong = 0;
    for(node *i = head; i != NULL; i = i->next)
    {
        if(dem == k)
        {
            break;
        }
        else
        {
            if(i->data >= 0)
            {
                tong += i->data;
                dem++;
            }
        }
    }
    return tong;
}
void ShowList()
{
    node *runner = head;
    cout << "DS: ";
    while(runner != NULL)
    {
        cout << runner->data << " ";
        runner = runner->next;
    }
}

int main()
{
    int sopt;
    int k;
    cin >> sopt >> k;
    for(int i = 0; i < sopt; i++)
    {
        int data;
        
        cin >> data;
        InsertFirst(data);
    }
    cout << sum(k) << endl;
}
