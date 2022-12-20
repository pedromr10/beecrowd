#include <iostream>
#include <stdio.h>
using namespace std;

int main(){
    string str;
    int casos,soma=0;
    cin >> casos;
    for(int i = 0;i<casos;i++){
        cin >> str;
        for(int j =0;j<=str.size();j++){
            if(str[j] == '1'){
                soma+=2;
            }
            else if(str[j] == '2' || str[j] == '3' || str[j] == '5'){
                soma += 5;
            }
            else if(str[j] == '4'){
                soma += 4;
            }
            else if(str[j] == '6' || str[j]=='9' || str[j] == '0'){
                soma += 6;
            }
            else if(str[j] == '7'){
                soma += 3;
            }
            else if(str[j] == '8'){
                soma += 7;
            }
        }
        printf("%d leds\n", soma);
        soma = 0;
    }
}
