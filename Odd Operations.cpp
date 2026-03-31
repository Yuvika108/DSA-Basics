#include <bits/stdc++.h>
#define ll long long int
using namespace std;

bool hasOdd(string n){
    for(char c: n){
        if((c-'0')%2 == 1) return true;
    }
    return false;
}

int main() {
	ll t;
	cin >> t;
	
	while(t--){
	    ll n;
	    cin >> n;
	    
	    string str_n = to_string(n);
	    
	    //Case 1 : already odd number
	    if(n%2 == 1) cout << "0 \n";
	    
	    else if(hasOdd(str_n)) cout << "1 \n";
	    
	    else{
	        int ans = (n>=10 ? 3 : -1);
	        str_n = to_string(n);
	        for(char c : str_n){
	            int d = c-'0';
	            if(hasOdd(to_string(n-d))){
	                ans=2;
	                break;
	            }
	        }
	        cout << ans << endl;
	    }
	}
    return 0;
}
