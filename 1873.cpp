/*
#include <iostream>
#include <cstdio>
using namespace std;

int main(){
    int casos;
    string s1,s2;
    cin >> casos;
    for(int i =0;i<casos;i++){
        cin >> s1 >> s2;
        if(s1 == s2){
            printf("empate\n");
        }
        else if(){}
    }
}
*/

#include <iostream>
#include <cstdio>
using namespace std;

int main(){
    int casos;
    cin >> casos;
    string c1,c2;
    for(int i = 1;i<=casos;i++){
        cin >> c1 >> c2;
        if(c1 == c2){
            printf("empate\n");
        }
        else if(c1 == "tesoura" && c2 == "papel"){
            printf("rajesh\n");
        }
        else if(c1 == "papel" && c2 == "pedra"){
            printf("rajesh\n");
        }
        else if(c1 == "pedra" && c2 == "lagarto"){
            printf("rajesh\n");
        }
        else if(c1 == "lagarto" && c2 == "spock"){
            printf("rajesh\n");
        }
        else if(c1 == "spock" && c2 == "tesoura"){
            printf("rajesh\n");
        }
        else if(c1 == "tesoura" && c2 == "lagarto"){
            printf("rajesh\n");
        }
        else if(c1 == "lagarto" && c2 == "papel"){
            printf("rajesh\n");
        }
        else if(c1 == "papel" && c2 == "spock"){
            printf("rajesh\n");
        }
        else if(c1 == "spock" && c2 == "pedra"){
            printf("rajesh\n");
        }
        else if(c1 == "pedra" && c2 == "tesoura"){
            printf("rajesh\n");
        }
        else{
            printf("sheldon\n");
        }
    }
}

