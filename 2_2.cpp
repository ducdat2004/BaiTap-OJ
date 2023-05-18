#include <bits/stdc++.h>
using namespace std;

typedef struct Node
{
    int key;
    int value;
    Node* next;
} Dic;

void AddLast(Dic*& D, int k, int v)
{
    Dic* newNode = new Dic;
    newNode->key = k;
    newNode->value = v;
    newNode->next = NULL;

    if (D == NULL)
    {
        D = newNode;
    }
    else
    {
        Dic* curr = D;
        while (curr->next != NULL)
        {
            curr = curr->next;
        }
        curr->next = newNode;
    }
}

void Update(Dic* D, int k, int v)
{
    Dic* curr = D;
    while (curr != NULL)
    {
        if (curr->key == k)
        {
            curr->value = v;
            return;
        }
        curr = curr->next;
    }
}

void PrintDictionary(Dic* D)
{
    cout << "{";
    Dic* curr = D;
    while (curr != NULL)
    {
        cout << curr->key << ":" << curr->value;
        if (curr->next != NULL)
        {
            cout << ",";
        }
        curr = curr->next;
    }
    cout << "}";
}

int Pop(Dic*& D)
{
    if (D == NULL)
    {

        return -1;
    }
    else if (D->next == NULL)
    {
        int ketqua = D->value;
        delete D;
        D = NULL;
        return ketqua;
    }
    else
    {
        Dic* curr = D;
        while (curr->next->next != NULL)
        {
            curr = curr->next;
        }
        int ketqua = curr->next->value;
        delete curr->next;
        curr->next = NULL;
        return ketqua;
    }
}

int main()
{
    Dic* dictionary = NULL;

    while (true)
    {
        int n;
        cin >> n;
        if (n == -1)
        {
            break;
        }
        else
        {
           
            bool found = false;
            Dic* curr = dictionary;
            while (curr != NULL)
            {
                if (curr->key == n)
                {
                    found = true;
                    break;
                }
                curr = curr->next;
            }

            if (found)
            {
                
                Update(dictionary, n, curr->value + 1);
            }
            else
            {
                AddLast(dictionary, n, 1);
            }
        }
    }
	cout << Pop(dictionary) << endl << endl;
    PrintDictionary(dictionary);
	cout << endl << endl << Pop(dictionary) << endl << endl;
	PrintDictionary(dictionary);
	cout << endl << endl << Pop(dictionary) << endl << endl;
	PrintDictionary(dictionary);
    return 0;
}

