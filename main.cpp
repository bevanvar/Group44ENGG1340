#include "Inventory.h"

int main()
{
  int size = 10, sncount = 1, count = 0, ch;
	commodity *item = new commodity[size];
  cout<<"*********************************************************"<<"\n";
  cout<<"*************** Welcome To Your Inventory! **************"<<"\n";
  cout<<"*********************************************************"<<"\n";
  cout<<"*********************************************************"<<"\n";
  cout<<"*Bevan Varghese**************************Katyayani Singh*"<<"\n";
  cout<<"*GROUP 44***************************************ENGG1340*"<<"\n";
  cout<<"*********************************************************"<<"\n";
  cout<<"1. Insert a commodity\n2. Update a commodity\n3. Delete a commodity\n";
  cout<<"4. Search for a commodity (filtered)\n5. Display all commodities (filtered)\n0. Exit\n";
  cout<<"Enter your choice:"<<"\n";
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
      displayall(item, count);
      break;
      default:
      cout<<"Invalid choice, try again!"<<"\n";
      break;
    }
		cout<<"\n1. Insert a commodity\n2. Update a commodity\n3. Delete a commodity\n";
	  cout<<"4. Search for a commodity (filtered)\n5. Display all commodities (filtered)\n0. Exit\n";
	  cout<<"Enter your choice:"<<"\n";
    cin>>ch;
  }
  cout<<"Goodbye, have a nice day!"<<endl;
  delete [] item;
  return 0;
}
