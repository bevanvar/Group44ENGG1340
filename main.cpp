#include "Inventory.h"
#include <fstream>

int main()
{
  int size = 10, sncount = 1, count = 0, pref, ch;
  string shopname;
	commodity *item = new commodity[size];
  intro();
  cout<<"Enter shop name:\n";
  cin.ignore();
  getline(cin, shopname);
  shopname+=".txt";
  cout<<"1. Set up new inventory\n2. Import inventory from file\nEnter your preference:\n"<<endl;
  cin>>pref;
  if(pref!=1 && pref!=2) {
    cout<<"Invalid choice, closing now."<<endl;
  }
  else {
    if(pref==2) {
      readinventoryfromfile(shopname, item, count);
    }
    menu();
    cin>>ch;
    while(ch!=0) {
       userchoice(ch, item, count, sncount, size);
       menu();
      cin>>ch;
    }
    writeinventorytofile(shopname, item, count);
  }
  delete [] item;
  return 0;
}
