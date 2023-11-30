#include<iostream>
/*Source objectArray.cpp
  compile: g++ objectArray.cpp
  Example showing arrays of objects
*/
using namespace std;
class Item {
  string ItemName;    //private by default
  public:
  void store(string item) {
    ItemName = item;
  }
  void display() {
    cout<<"The item is: "<<ItemName<<endl;
  }
};
int main() {
  const int size = 5; 
  Item itemObject[size]; // an array of Items
  string TheItem;
  int i;

  //store Items in array
  for(i = 0; i < size; i++) {
    cout<<"Enter name of item "<<i<<": ";
    cin>>TheItem;
    itemObject[i].store(TheItem);
  }
  // display Items in array
  for(i = 0; i < size; i++) {
    cout<<"Item"<<i<<endl;
    itemObject[i].display();
  }
  return 0;
}
