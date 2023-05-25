#include <iostream>
using namespace std;

struct node
{
    int data;
    node *next;
};

void InsertLast(node *&head, int data)
{
    node *newNode = new node;
    newNode->data = data;
    newNode->next = NULL;
    if(head == NULL)
    {
        head = newNode;
    }
    else
    {
        node *current = head;
        while(current -> next != NULL)
        {
            current = current -> next;
        }
        current -> next = newNode;
    }
}

node *DinhLonNhat(node *head)
{
    node *max = head;
    node *current;
    for(current = head; current != NULL; current = current -> next)
    {
        if(max -> data < current -> data)
        {
            max -> data = current ->data;
        }
    }
    if(max -> data == current -> data)
    {
        max -> data = -1;
    }
    return max;
}
int main()
{
    int sopt;
    cin >> sopt;
    node *head = NULL;
    for(int i = 0; i < sopt; i++)
    {
        int data;
        cin >> data;
        InsertLast(head, data);
    }
    cout << DinhLonNhat(head) -> data;
}