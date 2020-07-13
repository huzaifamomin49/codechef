#include <iostream>
#include<string>
#include<map>
using namespace std;
bool lapindrome(string str){
    int len=str.size();
    int j;
    if(len%2==1)
        j=len/2+1;
    else
        j=len/2;
    map<char,int> val;
    for(int i=0;i<len/2;i++){
        val[str[i]]++;
    }
    for(int i=j;i<len;i++){
        val[str[i]]--;
        if(val[str[i]]==0)
            val.erase(str[i]);
    }
    auto a=val.begin();
    if(val.empty())
        return true;
    return false;
}
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    string str;
	    cin>>str;
	    if(lapindrome(str)){
	        cout<<"YES\n";
	    }
	    else{
	        cout<<"NO\n";
	    }
	}
	return 0;
}
