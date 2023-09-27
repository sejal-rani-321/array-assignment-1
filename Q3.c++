
/* find the minimum value out of all element in array */

#include<iostream> 
#include<climits>
using namespace std;

/*int minimumNo(int arr[],int size){

    sort(arr,arr+size);
    cout << endl << "minimum element in arrray " << arr[0]; 
}*/
int minimumNo(int arr[],int size){
    int mini = INT_MAX;
    for (int i = 0; i < size; i++){
        mini = min(mini,arr[i]);
    }
    return mini;
}

int main(){
    int arr[] = {2,3,4,6,5};
    int size = sizeof(arr)/sizeof(arr[0]);

    for (int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }

    cout << "minmum: " << minimumNo(arr,size);
    
}