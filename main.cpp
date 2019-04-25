#include <iostream>
using namespace std;

struct commodity
{
	string itemname;
	string manufacturer;
	int quantity;
	double price; //always set to 2 digits
	bool instock; //true if in stock (quantity!=0), false if out of stock
	int numsold;
	int serialno;
};

void insert(commodity *&item, int &count)
{
	cout<<"Enter item name, manufacturer, quantity and price:"<<endl;
	cin>>item[count].itemname>>item[count].manufacturer>>item[count].quantity>>item[count].price;
	if(item[count].quantity==0)
	item[count].instock = false;
	else
	item[count].instock = true;
	item[count].numsold = 0;
	item[count].serialno = count+1;
	count++;
	//ADD THE INCREASE SIZE OF INVENTORY FUNCTION!
}

void update(commodity *&item, int count)
{
	int sn, choice;
	cout<<"Enter serial number of item:"<<endl;
	cin>>sn;
	int flag = 0;
	for(int i=0;i<=count;i++) {
		if(item[i].serialno==sn) {
			flag = 1;
			sn = i;
		}
	}
	if(flag==0) {
		cout<<"Invalid serial number!"<<endl;
		return;
	}
	//serial number shouldn't be deleted - switch this to name and manufacturer?
	//check if within inventory size!
	cout<<"Press\n1 for procurement of items,\n2 for sale of items,\n or 3 to change the price:"<<endl;
	cin>>choice;
	switch(choice) {
		case 1:
			int n;
			cout<<"Enter number of units of \""<<item[sno].manufacturer<<" "<<item[sno].itemname<<"\" procured:"<<endl;
			cin>>n;
			item[sno].quantity+=n;
			break;

		case 2:
			int n;
			cout<<"Enter number of units of \""<<item[sno].manufacturer<<" "<<item[sno].itemname<<"\" sold:"<<endl;
			cin>>n;
			if(n>item[sno].quantity) {
				cout<<"Invalid entry!"<<endl;
				break;
			}
			item[sno].quantity-=n;
			if(item[sno].quantity==0) {
				item[sno].instock = false;
				cout<<"\""<<item[sno].manufacturer<<" "<<item[sno].itemname<<"\" is now out of stock!"<<endl;
			}
			break;

		case 3:
			cout<<"Enter the new price of \""<<item[sno].manufacturer<<" "<<item[sno].itemname<<"\" :"<<endl;
			cin>>item[sno].price;
			break;

		default:
			cout<<"Invalid entry!"<<endl;
}

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
			insert(name, &item);
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
