#define ll long long int
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#include<bits/stdc++.h>
using namespace std;
 
int main()
{   fast
    ll t, n, a, b, c, res;
    cin>>t;
    while(t--){
        cin>>n;
        res=-1;
        for(ll i=0; i<n; i++){
            cin>>a>>b>>c;
            res=max(res, ((ll)(floor((double)b/(a+1)))*c));
        }
        cout<<res<<"\n";
    }
	return 0;
}
