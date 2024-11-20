#pragma GCC optimize("Ofast")
#include "bits/stdc++.h"
 
 
using namespace std;
 
#define FIO ios_base::sync_with_stdio(0), cin.tie(NULL), cout.tie(NULL);
typedef long long int ll;
 
const double EPS = 1e-9;
const ll OO = 0X3F3F3F3F3F3F3F3F;
const int N = 1e6 + 5, INF = INT_MAX, mod = 1e9 + 7, p = 31, LOG = 20;
 
bool isPrime[N];
void sieve(){
    memset(isPrime,true,sizeof isPrime);
    isPrime[0] = isPrime[1]  = false;
    for(int i = 2; i * i < N; ++i){
        if(isPrime[i]){
            for(int j = i * i; j < N; j+=i){
                isPrime[j] = false;
            }
        }
    }
}
 
void printPrimes(int n, int m){
    for(int i = n + 1; i < m; ++i){
        if(isPrime[i]) cout << i << ' ';
    }
}
 
void run() {
    int n,m;
    cin >> n >> m;
    sieve();
    printPrimes(n,m);
}
 
signed main() {
    FIO
    int TestC = 1;
    //cin >> TestC;
    while(TestC--){
        run();
    }
    return 0;
}
