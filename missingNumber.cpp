#include <bits/stdc++.h>
using namespace std;


  
//     Using the XOR operator 
//     O(N) time and O(1) space
   
  int missingNumberXOR(int a[], int n) 
{ 
    
    int xor1 = a[0];
    int xor2 = 1; 
  
    for (int i = 1; i < n; i++) 
        xor1 = xor1 ^ a[i]; 
  
    for (int i = 2; i <= n + 1; i++) 
        xor2 = xor2 ^ i; 
  
    return (xor1 ^ xor2); 
} 

    int main(){
	 int a[] = { 1,5,3,6,7,2 }; 
	 // We can find the size of the array by dividing size of the whole array by size of one element
	 // In this case it will be 24/4 = 6   as there are 6 elements of int type it will be 6*4 =24
    int n = sizeof(a) / sizeof(a[0]);    
    int res = missingNumberXOR(a, n); 
    cout << res; 
    }