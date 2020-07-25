 
 #include<bits/stdc++.h>
using namespace std;

 void moveZeroes(int a[] ,int n) {
        
        int left=0;
        
        for (int i =0 ;i<n;i++){
            
            if (a[i]!=0){
                a[left++] = a[i];
            }
        }
        
        for (int i=left;i<n;i++){
            a[i] = 0;
        }
        
    }

 int main(){
 int a[] = {1,0,0,2,5,0,2,1,3,0,5,0,9};
 int n= sizeof(a)/sizeof(a[0]);
 moveZeroes(a,n);
 for(int i=0;i<n;i++){
 cout<<a[i]<<" ";

 }
  return 0;
 }