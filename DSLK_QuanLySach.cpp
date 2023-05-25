#include <bits/stdc++.h>
using namespace std;

struct sach
{
	string maSach;
	string tenSach;
	string tenTacGia;
	int soLuong;
	sach *next;
};

void insertFist(sach *&head, string maSach, string tenSach, string tenTacGia, int soLuong)
{
	for(sach *cur = head; cur != NULL; cur = cur -> next)
	{
		if(cur -> maSach == maSach)
			return;
	}
	sach *p = new sach;
	p -> maSach = maSach;
	p -> tenSach = tenSach;
	p -> tenTacGia = tenTacGia;
	p -> soLuong = soLuong;
	p -> next = head;
	head = p;
}

void showList(sach *head)
{
	for(sach *cur = head; cur != NULL; cur = cur -> next)
	{
		cout << cur -> tenSach << ", " << cur -> tenTacGia << ", " << cur -> soLuong << endl;
	}
}

void lietKeMax(sach *head)
{
	int max = head -> soLuong;
	for(sach *cur = head; cur != NULL; cur = cur -> next)
	{
		if(max < cur -> soLuong)
		{
			max = cur -> soLuong;
		}
	}
	int dem = 0;
	for(sach *cur = head; cur != NULL; cur = cur -> next)
	{
		if(max == cur -> soLuong)
		{
			dem++;
			cout << cur -> tenSach << ", " << cur -> tenTacGia << ", " << cur -> soLuong << endl;
		}
	}
	cout << dem << endl;
}

int xoaSachSoLuongLonHon5(sach *&head)
{
	int dem = 0;
	if(head -> soLuong < 5)
	{
		while(head -> soLuong < 5)
		{
			sach *temp = head;
			head = head -> next;
			delete temp;
			dem++;	
		}
	}
	else
	{
		for(sach *cur = head; cur != NULL; cur = cur -> next)
		{
			if(cur -> next -> soLuong < 5)
			{
				dem++;
				sach *temp = cur -> next;
				cur -> next = cur -> next -> next;
				delete temp;
			}
		}
	}	
	return dem;
}
int main()
{
	sach *head = NULL;
	int sopt;
	cout << "So sach can quan ly: ";
	cin >> sopt;
	for(int i = 0; i < sopt; i++)
	{
		string maSach;
		string tenSach;
		string tenTacGia;
		int soLuong;
		cin >> maSach;
		cin >> tenSach;
		cin >> tenTacGia;
		cin >> soLuong;
		insertFist(head, maSach, tenSach, tenTacGia, soLuong);
	}
	lietKeMax(head);
	cout << "So danh sach da xoa: " << xoaSachSoLuongLonHon5(head);
}
