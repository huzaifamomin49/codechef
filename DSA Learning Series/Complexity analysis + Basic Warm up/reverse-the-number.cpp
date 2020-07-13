#include <iostream>
using namespace std;

int rev(int n){
    int tmp=0;
    while(n!=0){
        tmp=tmp*10+(n%10);
        n/=10;
    }
    
    return tmp;
}

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    cout<<rev(n)<<endl;
	}
	return 0;
}
