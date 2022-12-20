#include <iostream>
#include <stdio.h>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int main(){
    int contador=0;
    string s;
    vector<char>v1;
    vector<char>v2;
    cin >> s;
    for(int i =0;i<s.size();i++){
        if(s[i] == 'a' || s[i] == 'e' || s[i]=='i' || s[i] == 'o' || s[i] == 'u'){
            v1.push_back(s[i]);
            v2.push_back(s[i]);
        }
    }
    reverse(v2.begin(),v2.end());
    for(int i =0;i<v1.size();i++){
        if(v1[i] == v2[i]){
            contador++;
        }
        else if(v1[i] != v2[i]){
                printf("N\n");
            break;
        }
    }
    if(contador == v1.size()){
        printf("S\n");
    }
}
