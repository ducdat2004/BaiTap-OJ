#include <string>
#include <iostream>
using namespace std;

struct node
{
    string name;
    int marks;
    node *next;
};

void InsertFist(node *&head, string vname, int vmarks)
{
    node *p = new node();
    p -> name = vname;
    p -> marks = vmarks;
    p -> next = head;
    head = p;
}

void DeleteFist(node *&head)
{
    if(head == NULL)
        return;
    else
    {
        node *temp = head;
        head = head->next;
        delete temp;
        return;
    }
}

int Count(node *head, int vmarks)
{
    int count = 0;
    while(head != NULL)
    {
        if(head -> marks != vmarks)
        {
            count++;
        }
        head = head->next;
    }
    return count;
}

int main()
{
    node *head = NULL;
    while (true)
    {
        string choose;
        cin >> choose;
        if(choose == "ins")
        {
            string vname;
            cin >> vname;
            int vmarks;
            cin >> vmarks;
            InsertFist(head, vname, vmarks);
        }
        else
            if(choose == "del")
            {
                DeleteFist(head);
            }
        else
            if(choose == "count")
            {
                int vmarks;
                cin >> vmarks;
                cout << Count(head, vmarks) << endl;
            }
        else
            if(choose == "fin")
                break;
    }
    
}
