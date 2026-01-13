#include<bits/stdc++.h>

using namespace std;
#define ll long long
#define int ll

int T,n,k,C[50][50];
main(){
    C[0][0]=1;
    for(int i = 1;i <= 34; i++){
        C[i][0] = 1;
        for(int j=1;j<=i;j++) {
            C[i][j] = C[i-1][j] + C[i-1][j-1];
        }
    }
    cin>>T;
    while(T--){
        cin >> n >> k;
        int ans = 0,L = __builtin_ctzll(n);
        for(int len = 1; len <= L; len++)for(int c=1;c<=len;c++)if(c+len-1>k)ans+=C[len-1][c-1];
        cout << (ans+(L+1>k)) << '\n';
    }
    return 0;
}