#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,contmax = 0,contmin = 0;
    cin >> n;
    int array[n];
    for(int i = 0;i < n; i++){
        cin >> array[i];
    }
    int minimo = array[0],maximo = array[0];
    for(int i = 1;i < n; i++){
        if(array[i] > maximo){
            maximo = array[i];
            contmax++;
        }
        else if(array[i] < minimo){
            minimo = array[i];
            contmin++;
        }
    }
    int results[2];
    results[0] = contmax;
    results[1] = contmin;
    for(int i = 0;i < 2;i++){
        printf("%d ",results[i]);
    }
    return 0;
}