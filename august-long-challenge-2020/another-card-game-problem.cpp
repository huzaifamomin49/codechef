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
	    long int a,b;
	    cin>>a>>b;
	    if(a<9 and b<9)
	    {
	        cout<<"1 1\n";
	        continue;
	    }
	        int x1=a%9;
	        int x2=b%9;
	        int div1,div2;
	        if(x1==0 and x2==0){
	            div1=a/9;
	            div2=b/9;
	        }
	        else if(x1==0 and x2!=0){
	            div1=a/9;
	            div2=b/9;
	            div2+=1;
	        }
	        else if(x2==0 and x1!=0){
	            div1=a/9;
	            div2=b/9;
	            div1+=1;
	        }
	        else{
	            div1=a/9;
	            div2=b/9;
	            div2+=1;
	            div1+=1;
	        }
	        
	        if(div1>=div2){
	            cout<<"1 "<<div2<<endl;
	        }
	        else{
	            cout<<"0 "<<div1<<endl;
	        }
	}
	return 0;
}
