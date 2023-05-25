#include <iostream>
using namespace std;

struct node
{
    string hoten;
    long long ddong;
    double hsl;
    node *next;
};

void InsertFist(node *&head, string hoten, long long ddong, double hsl)
{
    node *p = new node();
    p -> hoten = hoten;
    p -> ddong = ddong;
    p -> hsl = hsl;
    p -> next = head;
    head = p;
}

void InsertLast(node *&head, string hoten, long long ddong, double hsl)
{
     node *p = new node();
    p -> hoten = hoten;
    p -> ddong = ddong;
    p -> hsl = hsl;
    p -> next = NULL;
    if(head == NULL)
    {
        head = p;
    }
    else
    {
        node *current = head;
        while(current -> next != NULL)
        {
            current = current -> next;
        }
       
        current -> next = p;
        current = p;
    }
    
}

void ShowList(node *head)
{
    cout << "DS: ";
    for(node *i = head; i != NULL; i = i -> next)
    {
        cout << i ->hoten << " " << i -> ddong << " ";
    }
}

double sum(node *head)
{
    double sum = 0;
    for(node *i = head; i != NULL; i = i -> next)
    {
        double tongsoluong = i -> hsl * 1390000;
        sum += tongsoluong;
    }
    return sum;
}

void ListPerson(node *head, double hsl)
{
    for(node *i = head; i != NULL; i = i -> next)
    {
        if(i -> hsl == hsl)
        {
            cout << i -> hoten << " ";
        }
    }
}
main()
{
    node *head = NULL;
    while (true)
    {
        string choose;
        cin >> choose;
        if(choose == "insF")
        {
            string hoten;
            long long didong;
            double hsl;
            cin >> hoten;
            cin >> didong;
            cin >> hsl;
            InsertFist(head, hoten, didong, hsl);
        }
        else
            if(choose == "insL")
            {
                string hoten;
                long long didong;
                double hsl;
                cin >> hoten;
                cin >> didong;
                cin >> hsl;
                InsertLast(head, hoten, didong, hsl);
            }
        else
            if(choose == "fin") break;
        else
            if(choose == "sum")
            {
                printf("%.3lf\n", sum(head));
            }
        else
            if(choose == "list")
            {
                double hsl;
                cin >> hsl;
                ListPerson(head, hsl);
            }
    }
}