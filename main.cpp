#include <iostream>
using namespace std;

struct commodity
{
	string itemname;
	string manufacturer;
	int quantity;
	double price; //always set to 2 digits
	bool instock; //true if in stock (quantity!=0), false if out of stock
	int sales;
	int serialno;
};


int main()
{
	commodity *item = new commodity[size];
	int count = 0;
	char command;
	cout << "What would you like to do today? Press A to insert, B to search, C to delete, D to update, E to show full inventory and F to sort by popularity." << endl;
	cin << command;
	switch (command)
	{
		case 'A':
		{
			string newname;
			cout << "Name of new product?" << endl;
			cin >> newname;
			insert(newname, &item);
			break;
		}
		case 'B':
		{
			string name;
			cout << "Name of product?" << endl;
			cin >> name;
			search(name, &item);
			break;
		}
		case 'C':
		{
			string name;
			cout << "Name of product to be deleted?" << endl;
			cin >> name;

			break;
		}
		case 'D':
		{

		}
		case 'E':
		{

		}
		case 'F':
		{

		}

	}


	//ask user for their choice - switch cases
	//delete all dynamic mem


}
