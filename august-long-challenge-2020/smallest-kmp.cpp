#include<bits/stdc++.h>
using namespace std;
string multi(char c,int l){
    string ans="";
    for(;l>0;l--)
        ans+=c;
    return ans;
}
int main() {
	// your code goes here
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n;
	cin>>n;
	while(n--){
	    string s;
	    string p;
	    cin>>s;
	    cin>>p;
	    //sort(s.begin(),s.end());
	    //cout<<s<<endl;
	    //int arr[26];
	    map<char,int>m1,m2;
	    for(char c:s){
	        m1[c]++;
	    }
	    for(char c:p){
	        m2[c]++;
	        m1[c]--;
	    }
	    
	    string ans="";
	    int flag=1;
	    for(int i=1;i<p.length();i++){
	        if(p[i]<p[i-1])
	            break;
	       else if(p[i]>p[i-1]){
	           flag=0;
	           break;
	       }
	    }
	    for(auto i:m1){
	        if(i.first==p[0]){
	            if(flag==1){
	                ans+=p;
	            }
	            ans+=multi(i.first,i.second);
	            if(flag==0){
	                ans+=p;
	            }
	        }
	        else
	            ans+=multi(i.first,i.second);
	            
	    }
	   cout<<ans<<endl;
	}
	return 0;
}
