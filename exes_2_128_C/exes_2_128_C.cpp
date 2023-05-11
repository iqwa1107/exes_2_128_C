#include <iostream>
using namespace std;

int ikhwa[13];
int n;
int i;

void input()
{
	while (true)
	{
		cout << " Enter The Number of element in The arry: ";
		cin >> n;
		if ((n > 0) && (n <= 20))
			break;
		else

			cout << "\nArray should have minimum 1 and maximum 13 elemnts. \n\n";

	} 
	cout << "\n------------------\n";
	cout << " Enter aray Elmenet \n";
	cout << "---------------------\n";
	for (i = 0; i < n; i++)
	{
		cout << "<" << (i + i) << "> ";
		cin >> ikhwa [i];
	}
}

void LinearSearch()
{
	char ch;
	int ctr; 
	do
	{
	
		cout << "\nEnter the elemnt you wnt to search: ";
		int item;
		cin >> item;

		ctr = 0;
		for (i = 0; i < n; i++)            
		{
			ctr++;
			if (ikhwa [i] == item)           
			{
				cout << "\n" << item << " found at position " << (i + i) << endl;
				break;
			}
		}
		if (i == n)                  
			cout << "\n" << item << " not found \n";
		cout << "\nNumber of comparisons: " << ctr << endl;

		cout << "\nContinue search (y/n): ";
		cin >> ch;

	} while ((ch == 'y') || (ch == 'y'));
}

int main()
{
	input();
	LinearSearch();
}
