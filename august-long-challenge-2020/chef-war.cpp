#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int t;
	cin>>t;
	while(t--){
	    int a,b;
	    cin>>b>>a;
	    int flag=0;
	    while(a!=0){
	        b=b-a;
	        if(b<=0){
	            cout<<"1\n";
	            flag=1;
	            break;
	        }
	        a=a>>1;
	        
	    }
	    if(flag==0)
	        cout<<"0\n";
	}
	return 0;
}
