#include "bits/stdc++.h"
using namespace std;

int main(){
	long long int n,k;
	cin>>n>>k;
	
	long long int cans=k;
	vector<long long int> a(n);
	int ans=0;
	
	for(long long int i=0;i<n;i++){
		cin>>a[i];
	}
	sort(a.begin(),a.end());
	
	for(long long int i=0;i<n;i++){
		if(cans*2<a[i]){
			ans++;
		}
		cans=max(cans,a[i]);
	}
	cout<<ans<<endl;
	return 0;
}