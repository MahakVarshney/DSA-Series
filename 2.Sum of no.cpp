#include <iostream>
using namespace std;

// in this we get sum upto n no.
// Output -> 1+2+3+4+5=15

int main (){

  /* We can solve this question by three methods. 
  First is formula -> for sum of n no. Formula is = (n*(n+1))/2
  second is for loop
  Third is while loop */
    
    int n;
    cout << "Enter the value of last no :";
    cin >> n;

    // First method is ->
    int sum=(n*(n+1))/2;
    cout<<"The sum is: "<<sum;
    
    // Second method is ->
    int sum=0;
    for(int i=1;i<=n;i++){
        sum=sum+i;
    }
    cout<<"The sum is: "<<sum;

    // Third method is ->
    int sum=0;
    int i=1;
    while(i<=n){
        sum=sum+i;
        i++;
    }
    cout<<"The sum is: "<<sum;

  return 0;
}