#include <iostream>
using namespace std;

int main()
{
	int a = 0;
	cout << "enter you choice (red=1, yellow=2, green=3): \t";
	cin >> a;
	
	if (a==1)
	{
		cout << endl << "stop!"<< endl << endl;
	}
	else if (a == 2)
	{
		cout << endl << "wait!" << endl << endl;
	}
	else if (a == 3)
	{
		cout << endl << "GO!" << endl << endl;
	}
	
	else cout << endl << "wrong choice!" << endl << endl;
	system("pause");
}