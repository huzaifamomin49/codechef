#include <iostream>
using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int t;
    cin>>t;
    
    while(t--){
        int n;
        string s;
        cin>>n;
        cin>>s;
        
        int a=0,b=0;
        int rema=n,remb=n;
        int flag=1;
        
        for(int i=0;i<2*n;i++){
            if(i%2==1){
                if(s[i]=='1')
                    b++;
                remb--;
            }
            if(i%2==0){
                if(s[i]=='1')
                    a++;
                rema--;
            }
            if(remb<(a-b) or rema<(b-a)){
                
                cout<<(i+1)<<endl;
                flag=0;
                break;
            }
            
        }
        if(flag)
            cout<<2*n<<endl;
    }
	return 0;
}
