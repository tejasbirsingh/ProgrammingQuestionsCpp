#include<bits/stdc++.h>
using namespace std;

void sieveOfEratosthenes(vector<bool> &primeList,int n){
	
	for(int i=2;i*i<=n;i++){
		if(primeList[i]==true){

			for(int j=i*i;j<=n;j+=i){
				primeList[j]=false;
			}
		}
	}

}

int main(){
	int n=100;
	vector<bool> primeList(n+1,true);
	primeList[0]=primeList[1]=false;
	sieveOfEratosthenes(primeList,n);
	
	for(int i=0;i<n;i++){
		if(primeList[i]==true){
			cout<<i<<' ';
		}
		

	}
	return 0;
}