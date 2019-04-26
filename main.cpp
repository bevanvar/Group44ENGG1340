#include "Inventory.h"

int main()
{
  int size = 10, sncount = 1, count = 0, ch;
	commodity *item = new commodity[size];
  intro();
  menu();
  cin>>ch;
  while(ch!=0) {
    userchoice(ch, item, count, sncount, size);
		menu();
    cin>>ch;
  }
  cout<<"Goodbye, have a nice day!"<<endl;
  delete [] item;
  return 0;
}
