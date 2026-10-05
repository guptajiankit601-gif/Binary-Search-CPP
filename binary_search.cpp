#include<iostream>
using namespace std;
int binarySearch(int arr[],int size,int key){
    int start = 0;
    int end = size - 1;
    int mid = start + (end-start)/2;
    while(start <= end){
        if(arr[mid] == key){
            return mid;
        }
        else if(key > arr[mid]){
            start = mid + 1;
        }else{
            end = mid - 1;
        }
        mid = start + (end-start)/2;
    }return -1;
}
int main(){
    
    int even[8] = {12,23,34,54,56,76,87};
    int odd[5] = {12,34,54,76,87};

    int evenIndex = binarySearch(even, 8, 54);

    cout<<"Index of 54 is :"<<evenIndex<<endl;

    int oddIndex = binarySearch(odd, 5, 34);

    cout<<"Index of 34 is :"<<oddIndex<<endl;
    
    return 0;
}
