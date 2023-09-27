
/* calculate the product of all element in the given array*/

#include<iostream>
using namespace std;

int productOfElement(int arr[],int size){
    int ans = 1; 
    for (int i = 0; i < size; i++){
         ans = ans * arr[i];
    }
    return ans;
    
}

int main(){
    int arr[] = {1,2,3,4,5,6};
    int size = sizeof(arr)/sizeof(arr[0]);

     for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout << " product of all element: " << productOfElement(arr,size);
}
































