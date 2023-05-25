#include <iostream>
#include <string>
#include <sstream>

int main()
{
	string s = "2.1";
	stringstream ss(s);
	float n;
	ss >> n;
	cout << n;
}
