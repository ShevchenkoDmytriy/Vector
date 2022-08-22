#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <vector>
#include <conio.h>
using namespace std;
int main(){
	int n;
	cout << "Enter vector size : ";
	cin >> n;
	vector<int>v(n);
	vector<float>v1(n);
	char ch;
	do
	{
		cout << "Menu.\n";
		cout << "1 - Int.\n";
		cout << "2 - Float .\n";
		cout << "Esc - Vihod.\n";
		cout << "Vash vibor: ";
		ch = _getch();
		switch (ch)
		{
		case '1':
			system("cls");
			
			for (int b : v)
			{
				cin >> b;
			}
			break;
		case '2':
			system("cls");
			for (int b : v1)
			{
				cin >> b;
			}
			break;
		}
	} while (ch != 27);
}