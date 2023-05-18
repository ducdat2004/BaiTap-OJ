#include <iostream>
#include <string>
using namespace std;

struct node {
    string masv;
    float dtb;
    node *next;
};

node *head = NULL;

void InsertHead(node *&head, string masv, float dtb) {
    node *p = new node;
    p -> masv = masv;
    p -> dtb = dtb;
    p -> next = head;
    head = p;
}

void Delete(node *&head, string masv) {
    if(head == NULL)
        return;
    if(head -> masv == masv)
    {
        node *temp = head;
        head = head -> next;
        delete temp;
        return;
    }
    node * i = head;
    while (i != NULL)
    {
        if(i -> next -> masv == masv)
        {
            node *temp = i -> next;
            i -> next = i -> next -> next;
            delete temp;
            return;
        }
        i = i -> next;
    }
}

int Count(node *head, float dtb) {
    int dem = 0;
    node *i = head;
    while (i != NULL)        
    {
        if(i -> dtb >= dtb)
        {
            dem++; 
        }    
        i = i->next;
    }
    return dem;
}

int main() {
    while (true)
    {
        string choose;
        cin >> choose;
        if(choose == "Add")
        {
            string masv;
            float dtb;
            cin >> masv;
            cin >> dtb;
            InsertHead(head, masv, dtb);
        }
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
        else
            if(choose == "Fin")
                break;
    }
}