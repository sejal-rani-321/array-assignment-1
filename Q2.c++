
/* Fint the second largest element in arrray in one pass*/

#include<iostream>
#include<algorithm>
using namespace std;

int SecondLargestNo(int arr[],int size){

    sort(arr,arr+size);
    cout << endl << "second largest element in arrray " << arr[size -2]; 
}

int main(){
    int arr[] = {2,3,4,6,5};
    int size = sizeof(arr)/sizeof(arr[0]);

    for (int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }

    SecondLargestNo(arr,size);
    
}