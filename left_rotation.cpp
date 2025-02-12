#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    scanf("%d",&n);
    int d;
    scanf("%d",&d);
    int array[n];
    for(int i = 0;i < n;i++){
        scanf("%d",&array[i]);
    }
    int startindex = d;
    int curindex = startindex;
    vector<int>arr;
    while(curindex < n){
        arr.push_back(array[curindex]);
        ++curindex;
    }
    for(int i = 0;i < startindex;i++){
        arr.push_back(array[i]);
    }
    for(int i = 0;i < n;i++){
        cout << arr[i] << endl;
    }
}