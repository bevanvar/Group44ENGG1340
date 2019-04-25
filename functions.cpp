#include <iostream>
using namespace std;

struct commodity
{
	string itemname;
	string manufacturer;
	int quantity;
	double price;
	bool instock;
	int sales;
	int serialno;
};

void displayall();
void sortbypopularity();
void sortbyquantity();
void sortbyserialnumber();
void sortbyprice()

void details(commodity x)
{
  cout<<"|"<<right<<setw(6)<<x.serialno<<".|"<<setw(19)<<x.itemname<<"|"<<setw(19)<<x.manufacturer
  <<"|"<<setw(8)<<x.quantity<<"|"<<setw(7)<<x.sales<<"|"<<setw(8)<<x.price<<"|";
  if(x.stock==0)
  cout<<"NO   |"<<endl;
  else
  cout<<"YES  |"<<endl;
  return;
}

void warn(commodity x)
{
  if(x.quantity==0)
  cout<<"\""<<x.manufacturer<<" "<<x.itemname<<"\" is out of stock! Replace immediately."
  else if(x.quantity<=5)
  cout<<"\""<<x.manufacturer<<" "<<x.itemname<<"\" is almost out of stock! Replace soon."
  return;
}

void increasesize(commodity *&item, int &size)
{
  commodity *temp = new commodity[size+size];
  for(int i=0;i<size;i++) {
    temp[i] = item[i];
  }
  delete [] item;
  item = temp;
  size+=size;
  return;
}

void insert(commodity *&item, int &count, int &sncount, int &size)
{
	if(count==size)
	increasesize(item, size);
  cout<<"Enter item name:"<<endl;
  cin>>item[count].itemname;
  cout<<"Enter manufacturer name:"<<endl;
  cin>>item[count].manufacturer;
  cout<<"Enter quantity:"<<endl;
  cin>>item[count].quantity;
  cout<<"Enter price:"<<endl;
  cin>>item[count].price;
  if(item[count].quantity==0)
	item[count].instock = 0;
	else
	item[count].instock = 1;
	item[count].sales = 0;
	item[count].serialno = sncount;
	count++;
  sncount++;
}

void update(commodity *&item, int count)
{
	int sn, choice, n;
	cout<<"Enter serial number of item:"<<endl;
	cin>>sn;
	int flag = 0;
	for(int i=0;i<=count;i++) {
		if(item[i].serialno==sn) {
			flag = 1;
			sn = i;
		}
	}
	if(flag==0)
	{
		cout<<"Invalid serial number!"<<endl;
		return;
	}
	cout<<"Press\n1 for procurement of items,\n2 for sale of items,\n or 3 to change the price:"<<endl;
	cin>>choice;
	switch(choice)
	{
		case 1:
		{
			cout<<"Enter number of units of \""<<item[sn].manufacturer<<" "<<item[sn].itemname<<"\" procured:"<<endl;
			cin>>n;
			item[sn].quantity+=n;
			break;
		}
		case 2:
		{
			cout<<"Enter number of units of \""<<item[sn].manufacturer<<" "<<item[sn].itemname<<"\" sold:"<<endl;
			cin>>n;
			if(n>item[sn].quantity) {
				cout<<"Invalid entry!"<<endl;
				break;
			}
			item[sn].quantity-=n;
			item[sn].sales+=n;
			if(item[sn].quantity==0) {
				item[sn].instock = false;
				cout<<"\""<<item[sn].manufacturer<<" "<<item[sn].itemname<<"\" is now out of stock!"<<endl;
			}
			break;
		}
		case 3:
		{
			cout<<"Enter the new price of \""<<item[sn].manufacturer<<" "<<item[sn].itemname<<"\" :"<<endl;
			cin>>item[sn].price;
			break;
		}
		default:
		{
			cout<<"Invalid entry!"<<endl;
		}
	}
}

void delete(commodity *&item, int &count)
{
	int sn;
	cout<<"Enter serial number of commodity:"<<endl;
	cin>>sn;
	int flag = 0;
	for(int i=0;i<count;i++) {
		if(item[i].serialno==sn) {
			flag = 1;
			sn = i;
			break;
		}
	}
	if(flag==0) {
		cout<<"Invalid serial number!"<<endl;
		return;
	}
	for(int i=sn;i+1<count;i++) {
		item[i] = item[i+1];
	}
	count--;
	cout<<"Successfully deleted!"<<endl;
}

void search(commodity *&item, int count) {
	int ch, flag = 0;
	cout<<"Choose your search filter:\n1: Serial Number\n2: Item Name\n3: Manufacturer\n4: Stock Status"<<endl;
	cin>>ch;
	switch(ch) {
		case 1:
		{
			int sn;
			cout<<"Enter serial number:"<<endl;
			cin>>sn;
			for(int i=0;i<count;i++) {
				if(item[i].serialno==sn)
				flag = 1;
			}
			if(flag==0)
			cout<<"Item not found!"<<endl;
			else {
				cout<<"|Sl.No.|   Item Name   |    Manufacturer   |Quantity| Sales |Price($)|Stock|"<<endl;
				for(int i=0;i<count;i++) {
					if(item[i].serialno==sn)
					details(item[i]);
				}
			}
			break;
		}
		case 2:
		{
			string name;
			cout<<"Enter item name:"<<endl;
			getline(cin,name);
			for(int i=0;i<count;i++) {
				if(item[i].itemname==name)
				flag = 1;
			}
			if(flag==0)
			cout<<"Item not found!"<<endl;
			else {
				cout<<"|Sl.No.|   Item Name   |    Manufacturer   |Quantity| Sales |Price($)|Stock|"<<endl;
				for(int i=0;i<count;i++) {
					if(item[i].itemname==name)
					details(item[i]);
				}
			}
			break;
		}
		case 3:
		{
			string name;
			cout<<"Enter manufacturer name:"<<endl;
			getline(cin,name);
			for(int i=0;i<count;i++) {
				if(item[i].manufacturer==name)
				flag = 1;
			}
			if(flag==0)
			cout<<"Manufacturer not found!"<<endl;
			else {
				cout<<"|Sl.No.|   Item Name   |    Manufacturer   |Quantity| Sales |Price($)|Stock|"<<endl;
				for(int i=0;i<count;i++) {
					if(item[i].manufacturer==name) {
						details(item[i]);
					}
				}
			}
			break;
		}
		case 4:
		{
			int stockch;
			cout<<"Enter 0 for out-of-stock, 1 for in-stock:"<<endl;
			cin>>stockch;
			for(int i=0;i<count;i++) {
				if(item[i].instock==stockch)
				flag = 1;
			}
			if(flag==0)
			cout<<"No items found!"<<endl;
			else {
				cout<<"|Sl.No.|   Item Name   |    Manufacturer   |Quantity| Sales |Price($)|Stock|"<<endl;
				for(int i=0;i<count;i++) {
					if(item[i].instock==stockch) {
						details(item[i]);
					}
				}
			}
			break;
		}
		default:
		{
			cout<<"Invalid choice!"<<endl;
		}
	}
}
