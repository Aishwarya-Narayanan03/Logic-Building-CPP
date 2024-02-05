//Alpha-Triangle Pattern
#include<bits/stdc++.h>
using namespace std;
int main(){
	int i;
	int j;
	int n;
	cin>>n;
	for(i=0;i<n;i++){
		for(char ch ='E'-i;ch<='E';ch++){
			cout<<ch<<" ";
		}
		cout<<endl;
	}
	return 0;
}
