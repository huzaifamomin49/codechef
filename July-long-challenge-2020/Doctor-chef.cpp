#include <iostream>
#include<algorithm>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    long int n,day=0;
	    long int x;
	    cin>>n>>x;
	    long int a[n];
	    for(long int i=0;i<n;i++){
	        cin>>a[i];
	    }
	    sort(a,a+n);
	    long int i=0;
	    while(x>(a[i]*2)){
	       day++;
	       i++;
	   }
	        for(long int j=i;j<n;j++){
	            if(x==a[j]){
	                day++;
	                x=a[j]*2;
	            }
	            else if(x<a[j]){
	                day++;
	                while(x<a[j]){
	                    day++;
	                    x*=2;
	                }
	                x=2*a[j];
	            }
	            else{
	                day++;
	                x=a[j]*2;
	            }
	        }
	        cout<<day<<endl;
	  }
	return 0;
}
