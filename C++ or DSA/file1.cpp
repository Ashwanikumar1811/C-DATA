#include<iostream>
#include<climits>
using namespace std;


// int main()
// {
//     int mark;
//     cout << "Enter your mark: ";
//     cin >> mark;
//     if (mark >= 90) {
//         cout << "Grade: A" << endl;
//     } else if (mark >= 80) {
//         cout << "Grade: B" << endl;
//     } else if (mark >= 70) {
//         cout << "Grade: C" << endl;
//     } else if (mark >= 60) {
//         cout << "Grade: D" << endl;
//     } else {
//         cout << "Grade: F" << endl;
//     }
// }

// int main()
// {
//     char ch;
//     cout << "Enter character "<< endl;
//     cin >> ch;

//     if( ch >= 'a' && ch <= 'z')
//     {
//         cout << "Lowercase character" << ch << endl;
//     }else
//     {
//         cout << "Not a lowercase character." << endl;
//     }
// }


// Prime number check
// int main()
// {
//     int num;
//     cout << "Enter a positive integer: ";
//     cin >> num;
//     bool isPrime = true;
//         for (int i = 2; i <= num / 2; ++i)      
//         {
//             if (num % i == 0) {
//                 isPrime = false;
//                 break;
//             }
//             else{
//                 if (num < 2) {
//                 isPrime = false;
//                 break;
//             }
//         }
//     }
//     if (isPrime) {
//         cout << num << " is a prime number." << endl;
//     } else {
//         cout << num << " is not a prime number." << endl;
//     }
// }

// Factorial calculation
// int main()
// {
//     int n;
//     unsigned long long factorial = 1; // Use unsigned long long for larger results
//     cout << "Enter a positive integer: ";
//     cin >> n;

//     if (n < 0) {
//         cout << "Factorial is not defined for negative numbers." << endl;
//     } else {
//         for (int i = 1; i <= n; ++i) {
//             factorial *= i;
//         }
//         cout << "Factorial of " << n << " = " << factorial << endl;
//     }
//     return 0;
// }

// int main() {
//     int arr[5];

//     for(int i=0; i<5; i++){
//         cin >> arr[i];
//     }

//     for(int i=0; i<5; i++){
//         cout << arr[i] << " ";
//     }
// }

// int main(){
//     int arr[] = {-1, -3, -2, 10, 3};
//     int INT_MAX;
//     int min_ele = INT_MAX;

//     for(int i=0; i<5; i++){
//         min_ele = min(min_ele,arr[i]);
//     }
//     cout<<"The Min element is: "<< min_ele;
// }

// int main(){
//     int arr[] = {1,3,5,4,1};

//     for (int i=0; i<5; i++){
//         if (i%2 == 0){
//             cout << arr[i] <<" " << endl;
//         }
//     }
//     return 0;
// }

// int main(){
//     int arr[] = {1,2,5,4,1};

//     for (int i=0; i<5; i++){
//         if (arr[i]%2 == 0){
//             cout << arr[i] <<" " << endl;
//         }
//     }
//     return 0;
// }

// int main(){
//     int arr[] = {1,3,5,4,1};

//     for (int i=4; i>=0; i--){
//             cout << arr[i] <<" ";
//     }
//     cout << endl;
//     for(int i=0; i<5; i++){
//         cout << arr[i] << " ";
//     }
//     return 0;
// }

// int main(){

//     int arr[4] = {3,4,5,3};
//     int arr1[4];
//     bool check = true;

//     int i=3;
//         for(int j=0; j<4; j++){
//         arr1[j] = arr[i];
//         i--;
//         }

//         for(int i=0; i<4; i++){

//          if(arr[i] != arr1[i]){
//             cout << "No,Not a Plindrome";
//             check = false;
//             break;
//          }
//     }
//     if (check == true){
//         cout << "YES, ITS a palindrome";
//     }
//     return 0;
// }

// PALINDROME
// int main(){
//     int arr[] = {1,2,2,1};
//     int left = 0, right = 3;
//     bool check = true;
//     while(left<=right){
//         if(arr[left] != arr[right]){
//             check = false;
//             cout << "No,Not a Plindrome";
//             break;
//         }
//         left++;
//         right--;
//     }
//     if(check){
//         cout<<"YES, its a palindrome";
//     }
// }

// int main(){
//     int a = 2334;
//     int s;
    
//     for(int i=0; i<=4; i++){
//         s = a%10;
//         a = a/10;
//         if(s>0 && s%2==0){
//             cout << s << " ";
//         }
//     }
// }

// int main(){
//     int arr[5];

//     for(int i=0; i<5; i++){
//         cin >> arr[i];
//     }

//     for(int i=0; i<5; i++){
//             cout << arr[i] << " ";
//     }
// }

//To Find Firse, Second and Third maximum element
// int main(){
//     int arr[] = {2,3,1,0,7};         // For FIRST MAXIMUM NUMBER
//     int max_element = arr[0];
//     for(int i=0; i<5; i++){
//         if(arr[i] > max_element){
//             max_element = arr[i];
//         }
//     }
//     cout<< "Maximum element is: " << max_element << endl;

//     int s=0;
//     for(int i=0; i<5; i++){
//         if(arr[i]<max_element && arr[i]>s){
//             s=arr[i];
//         }
//     }
//     cout<< "Second Maximum element is: " << s << endl;

//     int k=0;
//     for(int i=0; i<5; i++){
//         if(arr[i]<s && arr[i]>k){
//             k=arr[i];
//         }
//     }
//     cout << "3rd maximum element is: "<<k;
// }


//TO FIND SUM OF MAXIMUM AND MINIMUM ELEMENT OF ARRAY
// int main(){
//     int arr[5];      
//     int max_ele = INT_MIN;
//     int min_ele = INT_MAX;

//     for(int i=0;  i<5; i++){
//         cin >> arr[i];
//     }

//     for(int i=0; i<5; i++){
//         max_ele = max(arr[i],max_ele);
//         min_ele = min(arr[i],min_ele);
//     }
//     cout << max_ele + min_ele;
// }

// int main(){
//     int arr[5];

//     for(int i=0;  i<5; i++){
//         cin >> arr[i];
//     }

//     for(int i=0; i<5; i++){
//         if(arr[i]%2 == 0){
//             arr[i] =  0;
//         }
//         else{
//             arr[i] = 1;
//         }
//     }
//     for(int i=0; i<5; i++){
//         cout << arr[i] << " ";
//     }
// }


// COUNT THE NUMBER OF DUPLICATE NUMBER
// int main(){
//     int arr[] = {1,2,5,8,5,6,0};
//     int count = 0;
//     int n = sizeof(arr)/sizeof(arr[0]);

//     for(int i=0; i<n; i++){
//         for(int j=i+1; j<n; j++){
//             if(arr[i]  == arr[j]){
//                 count++;
//             }
//         }
//     }
//     cout<< count;
// }



// TO CHECK THE GIVEN ELEMENT IS PRESENT IN ARRAY OR NOT
// int main(){
//     int arr[] = {1,2,3,5,7};
//     int tar = 6;
//     bool check = false;

//     for(int i=0; i<5; i++){
//         if(arr[i] == tar){
//             check = true;
//             break; 
//         }
//         else{
//             check = false;
//         }
//     }
//     if(check){
//         cout << "YES";
//     }
//     else{
//         cout << "NO";
//     }

// }




// FINDING THE LAST INDEX OF SECOND SAME NUMBER OF TARGETED VALUE
// int main(){
//     int arr[] = {1,2,3,1,0,2,3};
//     int tar = 2;
//     int s=0;
//     for(int i=0; i<7; i++){
//         if(arr[i] == tar){
//             s = i;
//             break;
//         }
//     }

//     for(int j= s+1; j>s  && j<7; j++){
//         if(arr[j] == tar){
//             cout << j << " ";
//             break;
//         }
//     }
// }

