#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    int cont1 = 0,cont2 = 0,cont3 = 0,cont4 = 0,cont5 = 0;
    for(int i = 0;i < n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i = 0;i < n;i++){
        if(arr[i] == 1){
            cont1++;
        }
        else if(arr[i] == 2){
            cont2++;
        }
        else if(arr[i] == 3){
            cont3++;
        }
        else if(arr[i] == 4){
            cont4++;
        }
        else if(arr[i] == 5){
            cont5++;
        }
    }
    if(cont1 >= cont2){
        if(cont1 >= cont3){
            if(cont1 >= cont4){
                if(cont1 >= cont5){
                    cout << 1 << endl;
                }

            }
        }
    }
    if(cont2 > cont1){
        if(cont2 >= cont3){
            if(cont2 >= cont4){
                if(cont2 >= cont5){
                    cout << 2 << endl;
                }
            }
        }
    }
    if(cont3 > cont1){
        if(cont3 > cont2){
            if(cont3 >= cont4){
                if(cont3 >= cont5){
                    cout << 3 << endl;
                }
            }
        }
    }
    if(cont4 > cont1){
        if(cont4 > cont2){
            if(cont4 > cont3){
                if(cont4 >= cont5){
                    cout << 4 << endl;
                }
            }
        }
    }
    if(cont5 > cont1){
        if(cont5 > cont2){
            if(cont5 > cont3){
                if(cont5 > cont4){
                    cout << 5 << endl;
                }
            }
        }
    }
    
    
}