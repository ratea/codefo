#include "bits/stdc++.h"
using namespace std;

int main(){
	int n;
	string s;
	cin>>n;
	cin>>s;
	int k=0;
	for(int i=0;i<n;i++){
		if(s[i]-'0'==1){
			k++;
		}else{
			cout<<k;
			k=0;
		}
	}
	cout<<k<<endl;
	return 0;
}