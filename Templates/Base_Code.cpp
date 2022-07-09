#pragma GCC optimize("O3,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")
#pragma GCC optimize("Ofast")
#pragma GCC optimization ("unroll-loops")
#pragma GCC target("fpmath=sse,sse2")

#include <bits/stdc++.h>
using namespace std;

using ll=long long;using ld=long double;
using vl=vector<ll>;using vvl=vector<vl>;
using pll=pair<ll,ll>;using vpll=vector<pll>;
using str=string;

const ll large=1e16,remi=1e9+7,inf=LLONG_MAX;
const ld Pi=acos(-1),er=1e-9;

#define pb          push_back
#define F           first
#define S           second
#define ins         insert
#define all(x)      x.begin(),x.end()
#define setp(x)     fixed<<setprecision(x)
#define C_B(v,p)    ((v>>p)&(1))
#define cg          cout<<"||"<<flush
#define lg          cout<<"---------"<<endl
#define el          "\n"
#define sp          " "
#define ell         cout<<endl
#define dbg(x)      cout<<#x<<": "<<x<<" "<<flush
#define db1(x)      cout<<#x<<": "<<x<<flush
#define db2(x)      cout<<#x<<":"<<endl<<x

template <typename A, typename B> ostream& operator<<(ostream &os, const pair<A, B> &p) {return os<<'('<<p.first<<", "<<p.second<<')';}
template <typename T_container, typename T = typename enable_if<!is_same<T_container, string>::value, typename T_container::value_type>::type> ostream& operator<<(ostream &os, const T_container &v) {os<<" ";string sep;for(const T &x:v) os<<sep<<x,sep=" ";return os<<endl;}
template <typename A> ostream& operator<< (ostream &cout, vector<A> const &v) {cout<<" ";for(int i=0;i<v.size();i++){if (i) cout<<" ";cout<<v[i];} return cout<<endl;}
template <typename A, typename B> istream& operator>> (istream& cin, pair<A, B> &p) {cin>>p.first; return cin>>p.second;}
template <typename A> istream& operator>> (istream& cin, vector<A> &x){for(int i=0;i<x.size()-1;i++) cin>>x[i];return cin>>x[x.size()-1];}


void whott(ll T){ll i,j,k;
    ll n;cin>>n;
    vl v(n);cin>>v;
    
}

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    int jodd=1;
    cin>>jodd;
    for(int i=1;i<=jodd;i++){
        whott(i);
    }
    return 0;
}
