#ifndef Inventory_h
#define Inventory_h
#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
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

class Inventory
{
  public:
					void intro();
					void menu();
          void swap(commodity, commodity);
          void sortbypopularity(commodity, int);
          void sortbyserialnumber(commodity, int);
          void details(commodity);
          void warn(commodity);
          void increasesize(commodity, int);
          void insert(commodity, int, int, int);
          void update(commodity, int);
          void deletion(commodity, int);
          void search(commodity, int);
          void displayall(commodity, int);
					void stockchecker(commodity, int);
					void readinventoryfromfile(string, commodity, int);
					void writeinventorytofile(string, commodity, int);
};


#endif
