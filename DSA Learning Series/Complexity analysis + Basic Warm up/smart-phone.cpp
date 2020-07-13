#include <bits/stdc++.h>

#define ll long long int 
using namespace std;

int main() {
	// your code goes here
	int n;
	cin>>n;
	vector<ll>v1,v2;
	ll input;
    for(int i=0;i<n;i++){
        cin>>input;
        v1.push_back(input);
    }
    int len=v1.size();
    sort(v1.begin(),v1.end());
    for(int i=0;i<len;i++){
        int k=len-i;
        v2.push_back(v1[i]*k);
    }
    auto max=max_element(v2.begin(),v2.end());
    cout<<*max<<endl;
	return 0;
}
