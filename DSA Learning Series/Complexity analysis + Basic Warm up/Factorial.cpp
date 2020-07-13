#include <iostream>
#define ll long long int
using namespace std;


ll Z(ll n){
    ll count=0;
    for(ll i=5; n/i>=1 ; i*=5){
        count+=n/i;
    }
    return count;
}

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    ll n;
	    cin>>n;
	    cout<<Z(n)<<endl;
	}
	return 0;
}
