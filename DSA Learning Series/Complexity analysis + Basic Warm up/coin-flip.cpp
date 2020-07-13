#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int g;
	    cin>>g;
	    for(int j=0;j<g;j++){
    	    int i,q;
    	    long int n;
    	    cin>>i>>n>>q;
    	    int cnt=0;
	        if(i==1){
	            if(q==2){
	                for(int k=0;k<n;k+=2)
	                    cnt++;
	            }
	            else{
	                for(int k=1;k<n;k+=2)
	                    cnt++;
	            }
	        }
	        else{
	            if(q==1){
	                for(int k=0;k<n;k+=2)
	                    cnt++;
	            }
	            else{
	                for(int k=1;k<n;k+=2)
	                    cnt++;
	            }
	        }
	        
	        cout<<cnt<<endl;
	    }
	}
	return 0;
}
