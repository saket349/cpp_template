```
{
	// Place your cpp workspace snippets here. Each snippet is defined under a snippet name and has a scope, prefix, body and 
	// description. Add comma separated ids of the languages where the snippet is applicable in the scope field. If scope 
	// is left empty or omitted, the snippet gets applied to all languages. The prefix is what is 
	// used to trigger the snippet and the body will be expanded and inserted. Possible variables are: 
	// $1, $2 for tab stops, $0 for the final cursor position, and ${1:label}, ${2:another} for placeholders. 
	// Placeholders with the same ids are connected.
	// Example:
	"code": {
		"prefix": "code",
		"body": [
			"//****Jai Shree Krishna**************",
			"//******Jai Hanuman******************",
			"//******Saket Kumar******************",
			"#pragma GCC optimize(\"Ofast\")",
			"#pragma GCC target(\"sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma\")",
			"#pragma GCC optimize(\"unroll-loops\")",
			"#include <bits/stdc++.h> ",
			"",
			"using namespace std;",
			"",
			"#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)",
			"#define ll long long",
			"#define ull unsigned long long",
			"#define ld long double",
			"#define pi pair<int,int>",
			"#define pl pair<long long, long long>",
			"#define umap unordered_map",
			"#define mp make_pair",
			"#define f first",
			"#define s second",
			"#define pb push_back",
			"#define fo(i,n)      for(ll i=0;i<n;i++)",
			"#define fof(i,k,n)   for(int i=k;i<n;i++)",
			"#define fob(i,k,n)   for(int i=n-1;i>=k;i--)",
			"#define modpro(a,b)  ((a%mod)*(b%mod))%mod",
			"#define modsum(a,b)  ((a%mod)+(b%mod))%mod",
			"#define moddif(a,b)  ((a%mod)-(b%mod)+mod)%mod",
			"#define no           cout<<\"NO\"<<endl;",
			"#define yes          cout<<\"YES\"<<endl;",
			"#define vi           vector<int>",
			"#define vl           vector<ll>",
			"// memset(vis, false, sizeof(vis));",
			"// max_element(a, a + n);",
			"//==================================================================================",
			"const int mod = 1000000007;",
			"const ll zero = 0;",
			"ll powmod(ll x, ll n) {ll res=1; while(n>0){ if(n%2){res=modpro(res, x);} x=modpro(x,x); n=n/2;} return res;}",
			"//==================================================================================",
			"",
			"",
			"void solve(){",
			"  ",    
			"}",
			"",
			"int main()",
			"{",
			"   fast_cin();",
			"   ll t = 1;",
			"   cin >> t;",
			"   while(t--){",
			"      solve();",
			"   }",
			"   return 0;",
"}",
		],
		"description": "Log output to console"
	}
}
```
