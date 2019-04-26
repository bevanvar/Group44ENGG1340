#include "Inventory.h"

int main()
{
  int size = 10, sncount = 1, count = 0, ch;
	commodity *item = new commodity[size];
  intro();
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
      displayall(item, count);
      break;
      default:
      cout<<"Invalid choice, try again!"<<"\n";
      break;
    }
		menu();
    cin>>ch;
  }
  cout<<"Goodbye, have a nice day!"<<endl;
  delete [] item;
  return 0;
}

#include "Inventory.h"

int main()
{
  int size = 10, sncount = 1, count = 0, ch;
	commodity *item = new commodity[size];
  intro();
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
      displayall(item, count);
      break;
      default:
      cout<<"Invalid choice, try again!"<<"\n";
      break;
    }
		menu();
    cin>>ch;
  }
  cout<<"Goodbye, have a nice day!"<<endl;
  delete [] item;
  return 0;
}
