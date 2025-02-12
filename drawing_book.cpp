#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    scanf("%d",&n);
    int p;
    scanf("%d",&p);
    int c = 0;
    int d = 1;
    int e = 2;
    if(p == n - 1){
        if(n % 2 == 0){
            if(n == 2){
                cout << 0 << endl;
                return 0;
            }
            else{
                cout << 1 << endl;
                return 0;
            }
        }
        else{
            cout << 0 << endl;
            return 0;
        }
    }
    if(p == n){
        cout << 0 << endl;
        return 0;
    }
    while(d != p){
        if(p == d - 1){
            break;
        }
        d += e;
        c++;
    }
    int f = n;
    int k = 0;
    while(f != p){
        if(p == f - 1){
            break;
        }
        f -= e;
        k++;
    }
    if(k < c){
        cout << k << endl;
    }
    else{
        cout << c << endl;
    }
}