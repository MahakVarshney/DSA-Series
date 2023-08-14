#include <iostream>
#include <climits>
using namespace std;

int getMax(int num[],int size){
    int max=INT_MIN;
    for(int i=0;i<size;i++){
    if(num[i]>max){
        max=num[i];
    }
}
   return max; 
}

int getMin(int num[],int size){
    int min=INT_MAX;
    for(int i=0;i<size;i++){
    if(num[i]<min){
        min=num[i];
    }
}
   return min; 
}

int main() {
   int arr[100];
   int size;
   cout<<"Enter the size of array:";
   cin>>size;
   
   cout<<"Enter the elements of array:";
  for(int i=0;i<size;i++){
    cin>>arr[i];
}

   int maxEle=getMax(arr,size);
  cout<<"Maximum element is:"<<maxEle<<endl;
  
  int minEle=getMin(arr,size);
  cout<<"Minimum element is:"<<minEle<<endl;
  
    return 0;
}
