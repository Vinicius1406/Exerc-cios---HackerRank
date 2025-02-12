#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,k,cont = 0;
    cin >> n >> k;
    int array[n];
    for(int i = 0;i < n;i++){
        scanf("%d",&array[i]);
    }
    for(int i = 0;i < n;i++){
        for(int j = 0;j < n;j++){
            if(i < j){
                if((array[i] + array[j]) % k == 0){
                    cont++;
                }
            }
        }            
    }
    cout << cont << endl;

}