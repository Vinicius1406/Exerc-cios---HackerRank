#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    float cont1 = 0,cont2 = 0,cont3 = 0;
    cin >> n;
    int array[n];
    for(int i = 0;i < n;i++){
        scanf("%d",&array[i]);
    }
    for(int i = 0;i < n;i++){
        if(array[i] > 0){
            cont1++;
        }
        else if(array[i] < 0){
            cont2++;
        }
        else{
            cont3++;
        }
    }
    float result1 = cont1/n;
    float result2 = cont2/n;
    float result3 = cont3/n;
    printf("%f\n%f\n%f",result1,result2,result3);
    return 0;
}