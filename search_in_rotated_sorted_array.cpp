#include<iostream>
using namespace std;
int findPivot(int arr[],int size){
    int start = 0, end = size - 1;
    int mid = start + (end - start) / 2;
    while(start < end){
        if(arr[mid] >= arr[0]){
            start = mid + 1;
        }else{
            end = mid;
        }
        mid = start + (end - start) / 2;
    }
    return start;
}
int binarySearch(int arr[],int start,int end,int key){
    int mid = start + (end - start) / 2;
    while(start <= end){
        if(arr[mid] == key){
            return mid;
        }else if(key > arr[mid]){
            start = mid + 1;
        }else{
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return -1;
}
int search(int arr[], int n, int key){
    int pivot = findPivot(arr,n);

    if(key >= arr[pivot] && key <= arr[n-1]){
        return binarySearch(arr,pivot,n-1,key);
    }else{
        return binarySearch(arr,0,pivot-1,key);
    }
}
int main(){
    int arr[7] = {4,5,6,7,0,1,2};
    int target = 0;

    cout<<"Index is :"<<search(arr,7,target)<<endl;
}
