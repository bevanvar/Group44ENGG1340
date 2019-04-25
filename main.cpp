#include <iostream>
using namespace std;

const int n = 10;

struct item
{
	string itemname;
	string manufacturer;
	int quantity;
	double price; //always set to 2 digits
	bool instock; //true if in stock (quantity!=0), false if out of stock
	int numsold;
};
void grow_phonebook(item * &inventory, int &invetory_size, int n)
{

}


void search(string productname, item * inventory)
{

  for(int count=0;count<n;count++)
  {
    if([*(inventory + count)].itemname ==name)
		{
			cout <<  [*(inventory + count)];
		}
  }
}

void insert(string newname, item * inventory)
{

}

void delete(string name, )

int main()
{
	item * inventory = new item [n];
	char command;
	cout << "What would you like to do today? Press A to search, B to insert, C to delete, D to update, E to show full inventory and F to sort by popularity." << endl;
	cin << command;
	switch (command)
	{
		case 'A':
		{
			string name;
			cout << "Name of product?" << endl;
			cin >> name;
			search(name, &item);
			break;
		}
		case 'B':
		{
			string newname;
			cout << "Name of new product?" << endl;
			cin >> newname;
			insert(newname, &item);
			break;
		}
		case 'C':
		{
			string name;
			cout << "Name of product to be deleted?" << endl;
			cin >> name;
			insert(name, &item);
			break;
		}

	}


	//ask user for their choice - switch cases
	//delete all dynamic mem


}
