#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {
	ll t;
	cin >> t;
	
	while(t--){
	    ll n;
	    cin >> n;
	    
	    vector<ll> A(n);
	    for(int i=0; i<n; i++) cin >> A[i];
	    
	    vector<ll> B(n);
	    for(int i=0; i<n; i++) cin >> B[i];
	    
	    //reverse(B.begin(), B.end());
	    
	    /*
	    int count = 0;
	    for(int i=0; i<n; i++){
	        if(A[i]==B[i]) count=1;
	        else count=0;
	    }
	    
	    if(count==0) cout << "Yes \n";
	    else cout << "No \n";
	    */
	    
	    bool found = true;
	    
	    for(int i=0; i<n-1; i++){
    	    int c1 = (A[i]<A[i+1]) ? -1:1;
    	    int c2 = (B[i]<B[i+1]) ? -1:1;
    	    if(c1!=c2){
    	        found=false;
    	        break;
    	    }
	    }
	    
	    if(found){ 
	        cout << "Yes" << endl;
	    }else{
	        cout << "No" << endl;
	    }
	    
	}
	
    return 0;
}
