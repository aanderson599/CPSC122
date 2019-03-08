/*
Class: CPSC 122-01
Team Member 1: Zac Foteff
Team Member 2: None
Submitted by: Zac Foteff
GU Username: zfoteff
test file for a linked list with:
1) The capacity to copy a list with the copy constructor
2) The capacity to manipulate a node in any position
To Build: g++ proj8Tst.cpp proj.cpp
To Execute: ./a.out
*/

#include <iostream>
#include "proj8.h"
using namespace std;

int main(){
  List3* myList = new List3;
  int length = 5;

  for(int i = 0; i< length; i++){
    myList->PutItem(i, i);
  }
  myList->Print();


}