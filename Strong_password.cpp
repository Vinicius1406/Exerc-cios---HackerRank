#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    scanf("%d",&n);
    string a;
    cin >> a;
    int lower = 1,upper = 1,digit = 1,special = 1,size = a.size();
    string s("!@#$%^&*()-+");
    for(char c:a){
        if(c >= 'A' && c <= 'Z'){
            upper = 0;
        }
        else if(c>= 'a' && c <= 'z'){
            lower = 0;
        }
        else if(c >= '0'&& c <= '9'){
            digit = 0;
        }
        else if(s.find(c) != string::npos){
            special = 0;
        }
    }
    int total = lower + upper + digit + special;
    int z = max(6 - size,total);
    cout << z << endl;
}