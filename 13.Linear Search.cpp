#include <iostream>
using namespace std;
//in linear search is basically to found a element that exist or not in array
//we search one by one value so it is linear search
bool search(int num[],int size,int key){
    for(int i=0;i<size;i++){
        if(num[i]==key){
            return true;
        }
    }
    return false;
}

int main() {
   int arr[1000];
   int size;
   cout<<"Enter the size of array:";
   cin>>size;
   
   cout<<"Enter the elements of array:"<<endl;
  for(int i=0;i<size;i++){
    cin>>arr[i];
}
    int key;
    cout<<"Enter the value of key:";
    cin>>key;
    
    bool exist=search(arr,size,key);
    
   if(exist){
       cout<<"This element is in array";
   }
  else{
      cout<<"This element is not in array";
  }
    return 0;
}
