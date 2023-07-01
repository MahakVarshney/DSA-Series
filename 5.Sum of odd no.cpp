#include <iostream>
using namespace std;

//  sum of odd numbers
//  1+3+5+7=16

int main (){
    
 /* This problem can be solved by three methods
 First is formula -> no*no
 Second is for loop 
 Third is while loop */
 
 int n;
 cout << "Enter the value :";
 cin >> n;
 int sum=0;
 for(int i=1;i<=n;i=i+2){
     sum=sum+i;
 }
cout<<"Sum is: "<<sum;
    
  return 0;
}
