#include <iostream>
using namespace std;

// LINEAR SEARCH

// int main(){
//     int arr[] = {1,2,3,4,5,6,7,9};
//     int target = 6;
//     int l = 0, r = 7;
    
//     while(l <= r){
//         int m = (l+r)/2;

//         if(arr[m] == target){
//             cout << "Element found at index: "<< m <<endl;
//             break;
//         }
//         else if(arr[m] < target){
//             l = m+1;
//         }
//         else{
//             r = m-1;
//         }
//     }
// }


// int main(){
//     int arr[] = {9,8,7,6,5,4,3,2,1};
//     int target = 7;
//     int l = 0, r = 8;
    
//     while(l <= r){
//         int m = (l+r)/2;

//         if(arr[m] == target){
//             cout << "Element found at index: "<< m <<endl;
//             break;
//         }
//         else if(arr[m] < target){
//             r = m+1;
//         }
//         else{
//             l = m-1;
//         }
//     }
// }


// BUbble sort
// int main(){
//     int arr[] = {5,4,3,2,1};
//     int n = sizeof(arr)/sizeof(arr[0]);
    
//     for(int i=0; i<n; i++){
//         bool flag = false;
//         for(int j=0; j<n; j++){
//             if(arr[j] > arr[j+1]){
//                 swap(arr[j], arr[j+1]);
//                 flag = true;
//             }
//         }
//         if(flag == false){
//         break;
//     }

//     }

//     for(int i=0; i<n; i++){
//         cout<< arr[i] << " ";
//     }
// }


// Selection short
// int main(){
//     int arr[] = {1,2,3,4,5};
//     int n = sizeof(arr)/sizeof(arr[0]);

//     for(int i=0; i<n-1; i++){
//         int maxIndex = i;
//         for(int j=i+1; j<n; j++){
//             if(arr[j] > arr[maxIndex]){
//                 maxIndex = j;
//             }
//         }
//         swap(arr[i], arr[maxIndex]);
//     }

//     for(int i=0; i<n; i++){
//         cout<< arr[i] << " ";
//     }
// }