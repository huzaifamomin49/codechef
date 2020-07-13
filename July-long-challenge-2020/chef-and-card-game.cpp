#include <iostream>
using namespace std;
long int sep(long int a){
    long int tmp=0;
    while(a!=0){
	            tmp+=a%10;
	            a=a/10;
	        }
	        return tmp;
}

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    long int win0=0,win1=0;
	    long int tmp1,tmp2;
	    long int a,b;
	   for(int i=0;i<n;i++){
	        cin>>a>>b;
	   
        	tmp1=sep(a);
        	tmp2=sep(b);
	        
        	if(tmp1>tmp2)
        	   win0++;
        	else if(tmp2>tmp1)
        	   win1++;
        	else{
        	   win1++;
        	   win0++;
        	   }
	    }
	    if(win0>win1)
	        cout<<"0 "<<win0<<endl;
	    else if(win1>win0)
	        cout<<"1 "<<win1<<endl;
	    else
	        cout<<"2 "<<win1<<endl;
	}
	return 0;
}
