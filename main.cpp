#include "Inventory.h"
//including the header file with all required functions

int main()
{
  //initialising inventory size, serialnumber and number of commodities
  int size = 50, sncount = 1, count = 0, pref, ch;
  string shopname;
  commodity *item = new commodity[size]; //dynamic array of commodities
  intro();
  cout<<"Enter shop name:\n";
  getline(cin, shopname);
  shopname = shopname+".txt";
  cout<<"1. Set up new inventory\n2. Import inventory from file\nEnter your preference:"<<endl;
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
      switch(ch)
      {
       case 1:
       insert(item, count, sncount, size);
       break;
       case 2:
       update(item, count);
       break;
       case 3:
       deletion(item, count);
       break;
       case 4:
       search(item, count);
       break;
       case 5:
       stockchecker(item, count);
       break;
       case 6:
       displayall(item, count);
       break;
       default:
       cout<<"Invalid choice, try again!"<<"\n";
       break;
      }
      menu();
      cin>>ch;
    }
    writeinventorytofile(shopname, item, count);
    cout<<"Goodbye, have a nice day!"<<endl;
  }
  delete [] item;
  return 0;
}
