/* WAP to find the smallest missing position elemnet in the sorted array that contain positive element*/

#include<iostream>
#include<algorithm>
using namespace std;

int smallestMissingNo(int arr[], int n){
    sort(arr,arr+n);
    int smallest = 1;
    for (int i = 0; i < n; i++){
        if(arr[i] == smallest){
        smallest++;
        }
    }
    return smallest;
}

int main(){

    int arr[] = {1,2,3,5,1};
    int n = sizeof(arr)/sizeof(arr[0]);

    for (int i = 0; i < n; i++){
        cout << arr[i] << " " ;
    }

    cout << endl << "smallest element: " << smallestMissingNo(arr,n);
    
}