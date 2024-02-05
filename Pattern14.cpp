//Increasing Letter Triangle Pattern
#include<bits/stdc++.h>
using namespace std;
int main(){
	int i;
	int j;
	int n;
	cin>>n;
	for(i=0;i<=n;i++){
	   for(char ch = 'A'; ch<='A'+i;ch++){
	    cout<<ch<<" ";
			
		}
		cout<<endl;
	}
	return 0;
}
