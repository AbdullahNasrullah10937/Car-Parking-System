

#include <iostream>

using namespace std;
int main()
{
	int c = 0;
	int r = 0;
	int b = 0;
	int u_input;
	int amount=0;
	int count=0;


	//menu
	while (true)
	{

	

	cout << "Press 1 for Rickshaw" << endl;
	cout << "Press 2 for Car " << endl;
	cout << "Press 3 for bus  " << endl;
	cout << "Press 4 to show the record" << endl;
	cout << "Press 5 to delete the record" << endl;
	cin >> u_input;

	if (u_input == 1)
	{

		if(count<=50)
		{ 
			r = r + 1;
		amount = amount + 100;
		count = count + 1;
		}
		else
		{
			cout << "No more space, Parking is full" << endl;
		}

	}


	else if (u_input == 2)
	{
		if(count<=50)
		{
			c = c + 1;
		amount = amount + 200;
		count = count + 1;
		}
		else
		{
			cout << "Parking is full" << endl;
		}
	}
	else if (u_input == 3)
	{
		if (count <= 50)
		{

			b = b + 1;
		amount = amount +300;
		count = count + 1;
		}
		else
		{
			cout << "Parking is full" << endl;
		}

	}
	else if (u_input == 4)
	{
		cout << "\t\t\t*********************************************" << endl;
		cout << "\t\t\tThe total amount is =" << amount << endl;
		cout << "\t\t\tThe total number of vehicle in parking is =" << count << endl;
		cout << "\t\t\tTotal number of rickshaw parked=" << r << endl;
		cout << "\t\t\tTotal number of car parked=" << c << endl;
		cout << "\t\t\tTotal number of buses parked=" << b << endl;
		cout << "\t\t\t*********************************************" << endl<<endl;
	}
	else if (u_input == 5)
	{

		amount = 0;
		count = 0;
		cout << "\t\t\t*********************************************" << endl;
		cout << "\t\t\tRECORD DELETED" << endl;
		cout << "\t\t\t*********************************************" << endl<<endl;

	}
	else
	{
		cout << "Invalid number" << endl;
	}

}
	return 0;

}

/*
#include <iostream>
using namespace std;

int main()
{
	int n, i, j, space = 1;
	cout << "Enter the number of rows: ";
	cin >> n;
	n = n / 2;
	space = n -1;
	for (j = 1; j <= n; j++)
	{
		for (i = 1; i <= space; i++)
			cout << " ";
		space--;
		for (i = 1; i <= 2 * j - 1; i++)
		{
			if (i == 1 || i == 2 * j - 1)
				cout << "A";
			else
				cout << " ";
		}
		cout << endl;
	}
	space = 1;
	for (j = 1; j <= n - 1; j++)
	{
		for (i = 1; i <= space; i++)
			cout << " ";
		space++;
		for (i = 1; i <= 2 * (n - j) - 1; i++)
		{
			if (i == 1 || i == 2 * (n - j) - 1)
				cout << "A";
			
			else
				cout << " ";
		}
		cout << endl;
	}
}
*/
