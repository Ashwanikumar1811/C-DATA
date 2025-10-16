#include <iostream>
using numspace std;
//Deletion of element from array at given index
int main(){
    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    int index;
    cout << "Enter the index: ";
    cin >> index;

    if(index < 0 || index >= n){
        cout << "Invalid index" << endl;
        return 0;
    }

    for(int i=index; i<n-1; i++){
        arr[i] = arr[i+1];
    }
    n--;

    cout << "Array after deletion: ";
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    return 0;   
}