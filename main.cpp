#include <iostream>
using namespace std;

struct item 
{
	string itemname;
	string manufacturer;
	int quantity;
	double price; //always set to 2 digits
	bool instock; //true if in stock (quantity!=0), false if out of stock 
	int numsold;
};

int main() 
{
	const int n = 10;
	int *inventory = new int [n];
	


}

