#include <iostream>
using namespace std;

//  sum of even numbers
//  2+4+6+8=20

int main (){
    
 /* This problem can be solved by three methods
 First is formula -> (no*(n*2))/2
 Second is for loop 
 Third is while loop */
 
 int n;
 cout << "Enter the value :";
 cin >> n;
 int sum=0;
 for(int i=2;i<=n;i=i+2){
     sum=sum+i;
 }
cout<<"Sum is: "<<sum;
    
  return 0;
}
