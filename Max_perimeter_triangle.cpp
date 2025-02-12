#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    scanf("%d",&n);
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
    for(int i = n - 1;i >= 2;i--){
        if(array[i] < (array[i - 1] + array[i - 2])){
            cout << array[i - 2] << " " << array[i - 1] << " " << array[i] << endl;
            return 0;
        }
    }
    cout << -1 << endl;
    return 0;

}