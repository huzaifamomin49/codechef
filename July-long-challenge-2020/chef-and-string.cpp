#include <iostream>
#include<cmath>

using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	for(int i=t;i>0;i--){
	    long int total=0;
	    int n;
	    cin>>n;
    
    	int arr[n];
    	for(int i=0;i<n;i++){
    	    cin>>arr[i];
    	}
    	for(int i=0;i<n-1;i++){
    	   total+=abs(arr[i]-arr[i+1])-1;
    	}
    	cout<<total<<"\n";
	}
	return 0;
}
