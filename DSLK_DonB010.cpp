#include <iostream>
#include <string>
using namespace std;
struct node 
{
    char data;
    node *next;
};

void InsertHead(node *&head, char data)
{
    node *p = new node;
    p -> data = data;
    p -> next = head;
    head = p;
}

void ShowList(node *head)
{
    for(node *i = head; i != NULL; i = i->next)
    {
        cout << i->data << " ";
    }
    cout << endl;
}

void swap(node *head)
{
	for(node *i = head; i != NULL; i = i -> next)
	{
		for(node *j = i -> next; j != NULL; j = j -> next)
		{
			char temp = i -> data;
			i -> data = j -> data;
			j -> data = temp;
		}
	}
}

void Delete(node *&head, char x)
{
	
	while(head != NULL && head -> data == x)
	{
		node *temp = head;
		head = head -> next;
		delete temp;
	}
		//return;
	node *i = head;
	while (i != NULL)
	{
		if(i -> next != NULL)
		{
			if(i -> next -> data == x)
			{
				node *temp = i -> next;
				i -> next = i -> next -> next;
				delete temp;
				
			}
			else
			{
				i = i -> next;
			}
			
		}
		else
		{
			break;
		}
	}
}	
	
void sapxeptangdan(node *&head)
{
	for(node *i = head; i != NULL; i = i -> next)
	{
		for(node *j = i -> next; j != NULL; j = j -> next)
		{
			if(i ->data > j -> data)
			{
				char temp = i -> data;
				i -> data = j -> data;
				j -> data = temp;
			}
		}
	}
}

void InsertData(node *&head, char data)
{
    node *newNode = new node;
    newNode->data = data;
    newNode->next = NULL;

    if (head == NULL || data < head->data)
    {
        newNode->next = head;
        head = newNode;
    }
    else
    {
        node *current = head;
        while (current->next != NULL && current->next->data < data)
        {
            current = current->next;
        }
        newNode->next = current->next;
        current->next = newNode;
    }
}

void RemoveDuplicateNod(node *&head)
{
	node *current = head;
	while (current != NULL)
	{
		node *runner = current;
		while(runner -> next != NULL)
		{
			if(current -> data == runner -> next -> data)
			{
				node *temp = runner -> next;
				runner -> next = runner -> next -> next;
				delete temp;
			}
			else
				runner = runner -> next;
		}
		// if(current -> data == current -> next -> data)
		// {
		// 	node *temp = current -> next;
		// 	current -> next = current -> next -> next;
		// 	delete temp;
		// }
		current = current -> next;
	}
}

int SizeList(node *head)
{
	int dem = 0;
	for(node *i = head; i != NULL; i = i->next)
	{
		dem++;
	}
	return dem;
}
main()
{
    node *head = NULL;
    string data; 
    getline(std::cin, data);
    InsertHead(head, data[0]);
	int arr[100];

    for(int i = 0; i < data.size(); i++)
    {
    	
        if(data[i] == ' ' && data[i + 1] != ' ')
        {
			
			InsertHead(head, data[i + 1]);
            
        }    
    }
    while(true)
    {
        string choose;
		cin >> choose;
        if(choose == "dir")
        {
            ShowList(head);
        }
        else
        	if(choose == "end") break;
		else
			if(choose == "rvs")
			{
				swap(head);
			}
		else
			if(choose == "del")
			{
				char x;
				cin >> x;
				Delete(head, x);
			}
		else
			if(choose == "ord")
			{
				sapxeptangdan(head);
			}
		else	
			if(choose == "ins")
			{
				char x;
				cin >> x;
				InsertData(head, x);
			}
		else
			if(choose == "dup")
			{
				RemoveDuplicateNod(head);
			}
		else
			if(choose == "cnt")
			{
				cout << SizeList(head) << endl;
			}
    }
}

