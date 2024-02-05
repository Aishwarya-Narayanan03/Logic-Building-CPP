//Alpha-Hill Pattern
#include<bits/stdc++.h>
using namespace std;
int main(){
	int i;
	int j;
	int n;
	cin>>n;
	for(i=0;i<n;i++){
		for(j=0;j<n-i-1;j++){
			cout<<" ";
		}
		char ch = 'A';
		int point = (2*i+1)/2;
		for(j=0;j<2*i+1;j++){
			cout<<ch;
			if(j<=point) ch++;
			else ch--;
		}
		for(j=0;j<n-i-1;j++){
			cout<<" ";}
			cout<<endl;
	}
	return 0;
}
