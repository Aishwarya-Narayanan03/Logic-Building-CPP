//Alpha-Ramp Pattern
#include<bits/stdc++.h>
using namespace std;
int main(){
	int i;
	int n;
	cin>>n;
	for(i=0;i<n;i++){
		char ch = 'A'+i;
          for(int j=0;j<=i;j++){
			cout<<ch<<" ";
		}
		cout<<endl;
	}
	return 0;
}
