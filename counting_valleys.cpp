#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    string path;
    cin >> path;
    int tracker = 0,valley = 0;
    for(char step : path){
        if(step == 'D'){
            tracker--;
        }
        else{
            tracker++;
        }
        if(tracker == -1 && step == 'D'){
            valley++;
        }
    }
    printf("%d",valley);
    return 0;
}