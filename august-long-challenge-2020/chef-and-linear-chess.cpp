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
	    int n;
	    cin>>n;
	    long long int k;
	    cin>>k;
	    long long int arr;
	    int max=-1;
	    for(int i=0;i<n;i++){
	        cin>>arr;
	        if(k%arr==0){
	            if(arr>max)
	                max=arr;
	        }
	    }
	    cout<<max<<endl;
	}
	return 0;
}
