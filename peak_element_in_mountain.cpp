#include<iostream>
using namespace std;

int peakElement(int arr[],int size){

    int start = 0, end = size - 1;

    int mid = start + (end - start) / 2;

    while(start < end){

        if(arr[mid] < arr[mid+1]){
            start = mid + 1;
        }
        else{
            end = mid;
        }
        mid = start + (end - start) / 2;
    }
    return start;
}
int main(){

    int arr[8] = {1,3,5,7,5,4,3,2};

    int peak = peakElement(arr,7);

    cout<<"The peak element is at index is : "<<peak<<endl;
    cout<<"The peak element is : "<<arr[peak]<<endl;

    return 0;
}
