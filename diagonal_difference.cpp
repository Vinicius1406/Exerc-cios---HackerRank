#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    scanf("%d",&n);
    int array[n][n];
    for(int i = 0;i < n;i++){
        for(int j = 0;j < n;j++){
            scanf("%d",&array[i][j]);
        }
    }
    int l_to_r = 0,r_to_l = 0;
    for(int i = 0;i < n;i++){
        l_to_r += array[i][i];
        
    }
    cout << l_to_r << endl;
    int i = 0;
    int j = n - 1;
    while(i < n && j >= 0){
        r_to_l += array[i][j];
        i++;
        j--;
    }
    cout << r_to_l << endl;
    int d_differ = l_to_r - r_to_l;
    if(d_differ < 0){
        d_differ = d_differ * -1;
    }
    cout << d_differ << endl;
}