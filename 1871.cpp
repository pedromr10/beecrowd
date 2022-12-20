#include <iostream>
#include <stdio.h>
#include <vector>
using namespace std;

int main(){
    int n1,n2,soma=0,aux;
    vector<int>v;
    while(n1 != 0 && n2 != 0){
        cin >> n1 >> n2;
        if(n1 == 0 && n2 ==0 ){
            break;
        }
        soma = n1 + n2;
        while(soma!=0){
            aux = soma%10;
            soma = soma/10;
            v.push_back(aux);
            if(aux == 0){
                v.pop_back();
            }
        }

        for(int i = v.size()-1;i>=0;i--){
            printf("%d", v[i]);
        }
        printf("\n");
        v.clear();
    }
}

//FUNCIONANDO MAIS OU MENOS KKKKKKKKKKKKKKKKKKKKK
