#include <bits/stdc++.h>

using namespace std;

struct node
{
    string masv;
    float dtb;
    node *next;
};

void InsertHead(node *&head, string masv, float dtb) //, node *&tail
{
    for(node *i = head; i != NULL; i = i->next)
    {
        if(i->masv == masv)
            return;
    }
    node *p = new node();
    p -> masv = masv;
    p -> dtb = dtb;
    p -> next = head;
    head = p;
    // if(head == NULL)
    // {
    //     head = tail = p;
        
    // }
    // else
    // {
    //     tail -> next = p;
    //     tail = p;
    // }
}

void Delete(node *&head, string masv)
{
    if(head == NULL)
    {
        return;
    }
    else
    {
        if(head -> masv == masv)
        {
            node *temp = head;
            head = head->next;
            delete temp;
            return;
        }
        else
        {
            node *c = head -> next;
            for(node *i = c; i != NULL; i = i->next)
            {
                node *j = i->next;
                if(j -> masv == masv)
                {
                    i -> next = j->next;
                    delete j;
                    return;
                }
            }
        }
    }
    
    
}

int Count(node *head, float dtb)
{
    if(head == NULL)
    {
        return 0;
    }
    else
    {
        int count = 0;
        for(node *i = head; i  != NULL; i = i->next)
        {
            if(i -> dtb >= dtb)
            {
                count++;
            }
        }
        return count;
    }
    
}

int main()
{
    node *head = NULL;
    node *tail = NULL;
    string choose;
    while (true)
    {
        cin >> choose;
        if(choose == "Add")
        {
            string masv;
            float dtb;
            cin >> masv >> dtb;
            InsertHead(head, masv, dtb);
        }
        else
            if(choose == "Fin")
                break;
        else
            if(choose == "Del")
            {
                string masv;
                cin >> masv;
                Delete(head, masv);
            }
        else
            if(choose == "Count")
            {
                float dtb;
                cin >> dtb;
                cout << Count(head, dtb) << endl;
            }
    }
    return 0;
}