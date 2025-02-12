#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    scanf("%d",&n);
    int array[n];
    for(int i = 0;i < n;i++){
        scanf("%d",&array[i]);
    }
    sort(array,array + n);
    /*for(int i = 0;i < n;i++){
        for(int j = i + 1;j < n;j++){
            if(array[i] > array[j]){
                int a = array[i];
                array[i] = array[j];
                array[j] = a;
            }
        }
    }*/
    
    vector<int>b;
    int c = array[1] - array[0];
    //cout << c << " " << "ah\n";
    for(int i = 0;i < n - 1;i++){
        if(array[i + 1] - array[i] < c){
            c = array[i + 1] - array[i];
        }
    }
    //cout << c << " " << "ah2\n";
    for(int i = 0;i < n - 1;i++){
        if(array[i + 1] - array[i] == c){
            b.push_back(array[i]);
            b.push_back(array[i + 1]);
        }
    }
    int z = 0;
    while(z < b.size()){
        cout << b[z] << " ";
        z++;
    }
}