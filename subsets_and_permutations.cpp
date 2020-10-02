#include <bits/stdc++.h>
typedef long long ll;
#define mod 1000000007
#define pb push_back
#define mp(a,b) make_pair(a,b)
#define pii pair<int,int>
#define pll pair<ll,ll>
#define vll vector <ll>
#define vii vector <int>
#define vpii vector <pii>
#define vpll vector <pll>
#define ff first
#define ss second
#define matrix vector <vll>
#define all(v) v.begin(),v.end()
#define PQ priority_queue
using namespace std;
vii v(40);
vii pick(40);
int n;
void generate(int idx){
	if(idx == n){
		for(int i = 0; i < n; i++){
			if(pick[i]) cout << v[i] << " ";
		}
		cout << endl;
	}
	else{
		pick[idx] = 1;
		generate(idx+1);
		pick[idx] = 0;
		generate(idx+1);
	}
}
vii perm;
void permute(){
	if(perm.size() == n){
		for(int i: perm){
			cout << i <<" ";
		}
		cout << endl;
	}
	else{
		for(int i = 0; i < n; i++){
			if(!pick[i]){
				pick[i] = 1;
				perm.pb(v[i]);
				permute();
				pick[i] = 0;
				perm.pop_back();
			}
		}
	}
}
int main()
{
	//ios::sync_with_stdio(0);
	//cin.tie(0);
	cin >> n;
	for(int i = 0; i < n;i++) cin >> v[i];
	permute();
	return 0;
}

