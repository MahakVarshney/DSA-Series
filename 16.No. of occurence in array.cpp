#include <iostream>

using namespace std;
// to check that element exist or not in array
bool exist(int arr[],int size,int element){
    for(int i=0;i<size;i++){
        if (element==arr[i]){
            return true;
        }
    }
    return false;
}
// to count number of occurrences of element in array 
int occurence(int arr[],int size,int element){
    int count=0;
    for(int i=0;i<size;i++){
        if(arr[i]==element){
            count++;
        }
    }
    return count;
}

int main()
{
    int arr[13]={2,3,4,2,5,4,7,6,8,5,9,4,6};
    int element;
    cout<<"enter the element:";
    cin>>element;
    
    exist(arr,13,element);
  // if element is exist, then return the occurrences
    if(exist){
       cout<<"Number of occurences is:"<<occurence(arr,13,element);
    }
    
    return 0;
}
