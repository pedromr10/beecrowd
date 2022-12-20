#include <iostream>
#include <cstdio>
using namespace std;

int main(){
    int contador=0,i=0;
    char c[500];
    scanf("%[^\n]",&c);
    while(c[i]!='\0'){
        contador++;
        i++;
    }
    if(contador>140){
        printf("MUTE\n");
    }
    else if(contador<=140){
        printf("TWEET\n");
    }
}
