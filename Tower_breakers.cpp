#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,m,t;
    scanf("%d",&t);
    for(int i = 1;i <= t;i++){
        scanf("%d %d",&n,&m);
        if(n % 2 == 0 || m == 1){
            cout << 2 << endl;
        }
        else{
            cout << 1 << endl;
        }
    }
    return 0;
}