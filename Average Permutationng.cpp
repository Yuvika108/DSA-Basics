#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	
	while(t--){
	    int n;
	    cin >> n;
	    // P = {P1, P2, ...., PN} = {1,2,....,N}
	    vector<int> v;
	    v.push_back(n-1);
	    v.push_back(n-2);
	    
	    for(int i=1; i<n-3; i++){
	        v.push_back(i);
	    }
	    if(n>3){
	        v.push_back(n-3);
	    }
	    v.push_back(n);
	    for(auto i:v){
	        cout << i << " ";
	    }
	    cout << endl;
	}
	
    return 0;
}
