#include <iostream>
using namespace std;

struct commodity;
void details(commodity x);
void increasesize(commodity *&item, int &size);
void insert(commodity *&item, int &count, int &sncount, int &size);
void update(commodity *&item, int count);
void delete(commodity *&item, int &count);
void search(commodity *&item, int count);
void display();
void sortbypopularity();
void sortbyserialnumber();

int main()
{
  int size = 10, sncount = 1, count = 0, ch;
	commodity *item = new commodity[size];
  cout<<"*********************************************************"<<endl;
  cout<<"*************** Welcome To Your Inventory! **************"<<endl;
  cout<<"*********************************************************"<<endl;
  cout<<"*********************************************************"<<endl;
  cout<<"*Bevan Varghese**************************Katyayani Singh*"<<endl;
  cout<<"*GROUP 44***************************************ENGG1340*"<<endl;
  cout<<"*********************************************************"<<endl;
  cout<<"1. Insert a commodity\n2. Update a commodity\n3. Delete a commodity\n";
  cout<<"4. Search for a commodity (filtered)\n 5. Display all commodities (filtered)\n 0. Exit";
  cout<<"Enter your choice:"<<endl;
  cin>>ch;
  while(ch!=0) {
    switch(ch)
    {
      case 1:
      insert(commodity *&item, int &count, int &sncount, int &size);
      break;
      case 2:
      update(commodity *&item, int count);
      break;
      case 3:
      delete(commodity *&item, int &count);
      break;
      case 4:
      search(commodity *&item, int count);
      break;
      case 5:
      //write the display function
      break;
      default:
      cout<<"Invalid choice, try again!"<<endl;
      break;
    }
    cout<<"Enter your choice:"<<endl;
    cin>>ch;
  }
  cout<<"Goodbye, have a nice day!"<<endl;
  delete [] item;
  return 0;
}
