#include <iostream>
#include<stdio.h>
using namespace std;
int main() {
  int number;
  do{
    cin>>number;
    if(number==42)
    {
      break;
    }
    cout<<number<<endl;
  }while(number!=42);
  return 0;
}
