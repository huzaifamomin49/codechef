#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
    ll t, k;
    cin>>t;
    while (t--) {
        cin>>k;
        ll d0, d1;
        cin>>d0>>d1;
        ll i=3;
        ll temp=(d0+d1)%10, sum;
        sum=d0+d1+temp;

        while(temp!=4 && temp!=9 && i<=k) {
            if(temp == 5 || temp == 0) break;
            temp+=temp;
            temp=temp%10;
            sum+=temp;
            i++;
        }
        if(temp == 5 || temp == 0) {
            cout<<"NO\n";
            continue;
        }
        temp=k-i;
        sum += 20*(temp/4);
        if(temp%4 == 1) sum+=8;
        if(temp%4 == 2) sum+=14;
        if(temp%4 == 3) sum+=16;

        if(sum%3 == 0) cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}
