#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    /* the resistance should be such that as many smaller enemies are vanished,
    so that resistance is minimum,
    thus the vector of enemies is sorted
    */
    
    ll n,h;
    cin>>n>>h;
    vector<ll>arr(n);
    for(ll i=0;i<n;i++) cin>>arr[i];
    sort(arr.begin(),arr.end());
    int i=n-1;
    int now=h;
    while(i>=0){
        if(arr[i]<h){
            h-=arr[i];
        }
        else{
            break;
        }
        i--;
    }
    if(i<0){
        cout<<0<<endl;
    }
    else{
        cout<<arr[i]<<endl;
    }
    return;
}

int main() {
	int t;
	cin>>t;
	while(t--){
	    solve();
	}
	return 0;
}
