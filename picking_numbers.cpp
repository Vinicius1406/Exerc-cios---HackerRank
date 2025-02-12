#include <bits/stdc++.h>

using namespace std;

int main(){
    //cout << "Comida\n";
    int n;
    scanf("%d",&n);
    //cout << "Comida\n";
    int array[n];
    for(int i = 0;i < n;i++){
        scanf("%d",&array[i]);
    }
    for(int i = 0;i < n;i++){
        for(int j = i + 1;j < n;j++){
            if(array[i] > array[j]){
                int a = array[i];
                array[i] = array[j];
                array[j] = a;
            }
        }
    }
    int len = 0,start = 0,num = 1;
    for(int i = 1;i < n;i++){
        if(array[i] - array[start] >= 2){
            num = 1;
            len = max(len,i - start);
            start = i;
        }
        else{
            num++;
        }
    }
    int z = max(len,num);
    cout << z << endl;
}