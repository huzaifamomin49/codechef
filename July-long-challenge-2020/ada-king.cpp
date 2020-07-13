#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int i=0,n,row=7,k;
	    cin>>n;
	    k=n-1;
	    cout<<"O";
	    while(i<k){
	        cout<<".";
	        i+=1;
	        row-=1;
	        if(row==0){
	            row=8;
	            cout<<endl;
	        }
	    }
	    k=64-n;
	    i=0;
	    while(i<k){
	        cout<<"X";
	        i+=1;
	        row-=1;
	        if(row==0){
	            row=8;
	            cout<<endl;
	        }
	    }
	    
	}
	return 0;
}
