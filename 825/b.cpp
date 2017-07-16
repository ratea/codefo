#include "bits/stdc++.h"
using namespace std;

int main(){
	vector<string> s(19);
	for(int i=0;i<10;i++){
		cin>>s[i];
	}
	
	bool ans=true;
	
	for(int i=0;i<10;i++){
		for(int j=0;j<10;j++){
			if(s[i][j]=='X'){
				bool dot=true;
				for(int k=1;k<5;k++){
					if(i+4>10){
						ans=false;
						break;
					}
					if(s[i+k][j]=='O'){
						ans=false;
						break;
					}
					if(s[i+k][j]=='.'){
						if(dot==true){
							dot=false;
						}else{
							ans=false;
							break;
						}
					}
				}
				if(ans){
					cout<<"YES"<<endl;
					return 0;
				}
				ans=true;
				dot=true;
				
				for(int k=1;k<5;k++){
					if(i+4>10){
						ans=false;
						break;
					}
					if(j+4>10){
						ans=false;
						break;
					}
					if(s[i+k][j+k]=='O'){
						ans=false;
						break;
					}
					if(s[i+k][j+k]=='.'){
						if(dot==true){
							dot=false;
						}else{
							ans=false;
							break;
						}
					}
				}
				if(ans){
					cout<<"YES"<<endl;
					return 0;
				}
				ans=true;
				dot=true;
				
				for(int k=1;k<5;k++){
					if(j+4>10){
						ans=false;
						break;
					}
					if(s[i][j+k]=='O'){
						ans=false;
						break;
					}
					if(s[i][j+k]=='.'){
						if(dot==true){
							dot=false;
						}else{
							ans=false;
							break;
						}
					}
				}
				if(ans){
					cout<<"YES"<<endl;
					return 0;
				}
				ans=true;
				dot=true;
			}
		}
	}
	cout<<"NO"<<endl;
	return 0;
}