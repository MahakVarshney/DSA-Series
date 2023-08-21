#include <iostream>
using namespace std;
int binarysearch(int arr[],int size,int key){
    int start=0;
    int end=size-1;
    while(start<=end){
        int mid = (start+end)/2;
        if(arr[mid]==key){
            return mid;
        }
        if(key>arr[mid]){
            start=mid+1;
        }
        if(key<arr[mid]){
            end=mid-1;
        }
        mid=(start+end)/2;
    }
    return -1;
}
int main() {
    int arr[]={2,3,5,7,9,13,17,24};
    cout<<binarysearch(arr,8,15);

    return 0;
}
