/* find duplicate  element in array*/

#include<iostream>
using namespace std;

int duplicateElement(int arr[], int size){
    int ans = arr[0];
    for (int i = arr[1]; i <= size; i++){
        int ans = ans ^ i;
    }
    for (int k = 0; k < size; k++){
       ans = ans ^ arr[k];
    }
    
   return ans ;
}

int main(){
    
    int arr[] = {2,3,4,4,5};
    int size = sizeof(arr)/sizeof(arr[0]);

    for (int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
    cout << endl << "dupe: " << duplicateElement(arr,size); 
}