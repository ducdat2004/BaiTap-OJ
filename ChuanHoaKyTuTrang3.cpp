#include<bits/stdc++.h>
using namespace std;
int main(){
	string s;
	while (getline(cin,s)) {
		stringstream ss(s);
		string temp;
		while(ss >> temp)
		{
			cout << temp << " ";
		}	
		cout << endl;
	}
}
