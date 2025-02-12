#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,k;
    scanf("%d",&n);
    cin >> k;
    int array[n];
    for(int i = 0;i < n;i++){
        scanf("%d",&array[i]);
    }
    sort(array,array + n);
    int temp = 0;
    vector<int>a;
    for(int i = 0;i <= n - k;i++){
        temp = array[i + k - 1] - array[i];
        a.push_back(temp);
    }
    int b = 0,c = a[0];
    while(b != a.size()){
        if(a[b] < c){
            c = a[b];
        }
        b++;
    }
    cout << c << endl;
}