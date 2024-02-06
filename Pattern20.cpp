//Symmetric-Butterfly Pattern
#include<bits/stdc++.h>
using namespace std;
int main(){
	int i;
	int j;
	int n;
	cin>>n;
	int spaces = 2*n-2;
	for(i=1;i<=2*n-1;i++){
		int stars = i;
		if(i>n) stars = 2*n-i;
		for(j=1;j<=stars;j++){
			cout<<"*";
		}
		for(j=1;j<=spaces;j++){
			cout<<" ";
		}
		for(j=1;j<=stars;j++){
			cout<<"*";
		}
		cout<<endl;
		if(i<n) spaces -=2;
		else spaces += 2;
	}
	return 0;
}
