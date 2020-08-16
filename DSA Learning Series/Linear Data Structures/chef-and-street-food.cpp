#include <bits/stdc++.h>
using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int profit=0;
        int max=0;
        for(int i=0;i<n;i++){
            int s,p,v;
            cin>>s>>p>>v;
            s+=1;
            profit=(p/s)*v;
            if(profit>max)
                max=profit;
        }
        cout<<max<<endl;
    }
	return 0;
}

