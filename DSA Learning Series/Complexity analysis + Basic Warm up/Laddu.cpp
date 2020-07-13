#include <bits/stdc++.h>
using namespace std;

string country="INDIAN";
string top="TOP_CONTRIBUTOR";
string bug="BUG_FOUND";
string contest="CONTEST_HOSTED";
string won="CONTEST_WON";   
int main() {
	// your code goes here
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int t;
	cin>>t;
	while(t--){
	    int n;
	    string s1,s2;
	    int total=0,ans=0;
	    cin>>n;
	    cin>>s1;
	    if(s1.compare(country)==0)
	        total=200;
	    else
	        total=400;
	    while(n--){
	        cin>>s2;
	        if(s2.compare(won)==0){
	            int k;
	            cin>>k;
	            if(k<20){
	                ans+=300+(20-k);
	            }
	            else
	                ans+=300;
	        }
	        else if(s2.compare(top)==0){
	            ans+=300;
	        }
	        else if(s2.compare(bug)==0){
	            int k;
	            cin>>k;
	            ans+=k;
	        }
	        else if(s2.compare(contest)==0){
	            ans+=50;
	        }
	    }
	    int tot;
	    tot=ans/total;
	    cout<<tot<<endl;
	}
	return 0;
}
