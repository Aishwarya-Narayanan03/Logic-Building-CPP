//Inverted Numbered Right Pyramid
#include<bits/stdc++.h>
using namespace std;
int main(){
	int i;
	int j;
	int n;
	cin>>n;
	for(i=1;i<=n;i++){
		for(j=1;j<=n-i+1;j++){
			cout<<j<<" ";
		}
		cout<<endl;
	}
	return 0;
}
