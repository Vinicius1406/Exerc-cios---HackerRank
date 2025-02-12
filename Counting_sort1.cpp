#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    int array[n];
    for(int i = 0;i < n;i++){
        cin >> array[i];
    }
    int array2[100] = {0};
    int a = 0;
    for(int i = 0;i < n;i++){
        a = array[i];
        array2[a]++;
    }
    for(int i = 0;i < 100;i++){
        cout << array2[i] << endl;
    }
}