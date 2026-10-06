#include <iostream>
using namespace std;
int firstOcc(int arr[],int n, int key){
    int s = 0, e = n-1;
    int mid = s + (e - s) / 2;
    int ans = -1;
    while(s <= e){
        if(arr[mid] == key){
            ans = mid;
            e = mid - 1;
        }else if(key > arr[mid]){
            s = mid + 1;
        }else{
            e = mid -1;
        }
        mid = s + (e - s) / 2;
    }return ans;
}
int lastOcc(int arr[],int n, int key){
    int s = 0, e = n-1;
    int mid = s + (e - s) / 2;
    int ans = -1;
    while(s <= e){
        if(arr[mid] == key){
            ans = mid;
            s = mid + 1;
        }else if(key > arr[mid]){
            s = mid + 1;
        }else{
            e = mid -1;
        }
        mid = s + (e - s) / 2;
    }return ans;
}
int main(){
    int even[11] = {1,2,3,3,3,3,3,3,3,3,8};
    int first = firstOcc(even,11,3);
    int last = lastOcc(even,11,3);
    cout<<"First occurance of 3 at index :"<<first<<endl;
    cout<<"Last occurance of 3 at index :"<<last<<endl;

    if(first == -1){
        cout<<"Total no. of occurance is : 0"<<endl;
    }else{
        int count = (last - first) + 1;
        cout<<"Total no. of occurance of 3 is :"<<count<<endl;
    }
    return 0;
}
