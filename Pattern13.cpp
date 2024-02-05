//Increasing Number Triangle Pattern
#include<bits/stdc++.h>
using namespace std;
int main(){
	int i;
	int j;
	int n;
	int num = 1;
	cin>>n;
	for(i=1;i<=n;i++){
		for(j=1;j<=i;j++){
			cout<<num<<" ";
			num = num+1;
			
		}
		cout<<endl;
	}
	return 0;
}
