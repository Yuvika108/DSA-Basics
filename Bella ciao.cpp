#include <bits/stdc++.h>
#define ll long long int 
using namespace std;

int main() {
	ll t, D, d, P, Q;
	cin >> t;
	
	while(t--){
	    cin >> D >> d >> P >> Q;
	    //D = no. of days
	    //P = initial rate for per day
	    //d = interval
	    //Q = final rate for per day
	    
	    ll full = D/d;
	    ll rem = D%d;
	    
	    ll sum_block = full*(2*P+(full-1)*Q)/2;
	    
	    ll total = d*sum_block;
	    total += rem*(P+full*Q);
	    
	    cout << total << endl;
	}
	
    return 0;
}
