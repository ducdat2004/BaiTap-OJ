#include <bits/stdc++.h>
using namespace std;

struct node
{
    string maSach;
    string tenSach;
    int soLuong;
    int donGia;
    node *next;
};

void insertLast(node *&head, string maSach, string tenSach,  int soLuong, int donGia)
{
    node *p = new node;
    p -> maSach = maSach;
    p -> soLuong = soLuong;
    p -> donGia = donGia;
    p -> tenSach = tenSach;
    p -> next = NULL;
    if(head == NULL)
    {
        head = p;
    }
    else
    {
        node *check = head;
        while (check != NULL)
        {
            if(check -> maSach == maSach)
                return;
            check = check -> next;
        }
        node *cur = head;
        while(cur -> next != NULL)
        {
            cur = cur->next;   
        }
        cur -> next = p;
        cur = p;
    }
}

void showList(node *head)
{
    for(node *cur = head; cur != NULL; cur = cur -> next)
    {
        cout << cur -> maSach;
    }
}

void deleteLast(node *&head)
{
    int dem = 0;
    for(node *cur = head; cur != NULL; cur = cur->next)
    {
        dem++;
    }
    if(head == NULL)
        return;
    else
    {
        if(dem == 1)
        {
            node *temp = head;
            head = NULL;
            delete temp;
        }
        else
        {
            node *cur = head;
            while (cur -> next -> next != NULL)
            {
                cur = cur -> next;
            }
            node *tmp = cur -> next;
            cur -> next = NULL;
            delete tmp;
            return;
        }
    }
}

void count(node *&head, int donGia)
{
    node *cur = head;
    int count = 0;
    while (cur != NULL)
    {
        if(cur -> donGia <= donGia)
        {
            count++;
        }
        cur = cur -> next;
    }
    cout << count << endl;
}

void totalValue(node *head, string maSach)
{
    if(head == NULL)
    {
        cout << -1 << endl;
        return;
    }
    else
    {
        node *cur = head;
        int check = 0;
        while (cur != NULL)
        {
            if(cur -> maSach == maSach)
            {
                check++;
            }
            cur = cur -> next;
        }
        if(check == 0)
        {
            cout << -1 << endl;
            return;
        }
        else
        {
            node *cur = head;
            int totalvalue;
            while (cur != NULL)
            {
                if(cur -> maSach == maSach)
                {
                    totalvalue = cur -> soLuong * cur -> donGia;
                }
                cur = cur -> next;
            }
            cout << totalvalue << endl;
            return;
        }
    }
}

int main()
{
    node *head = NULL;
    while (true)
    {
        string ch;
        cin >> ch;
        if(ch == "insert")
        {
            string maSach;
            string tenSach;
            int soLuong;
            int donGia;
            cin >> maSach >> tenSach >> soLuong >> donGia;
            insertLast(head, maSach, tenSach, soLuong, donGia);
        }
        else
            if(ch == "delete")
            {
                deleteLast(head);
            }
        else
            if(ch == "finish")
            {
                break;
            }
        else    
            if(ch == "count")
            {
                int donGia;
                cin >> donGia;
                count(head, donGia);
            }
        else
            if(ch == "totalvalue")
            {   
                string maSach;
                cin >> maSach;
                totalValue(head, maSach);
            }
    }
}