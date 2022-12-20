//1238_Combinador;

#include <iostream>
using namespace std;

int main(){
    int casos,menor,maior;
    string s1,s2;
    cin >> casos;
    for(int i=0;i<casos;i++){
        cin >> s1 >> s2;
        if(s1.size()>s2.size()){
            maior = s1.size();
            menor = s2.size();
        }
        else{
            maior = s2.size();
            menor = s1.size();
        }
        for(int x=0;x<menor;x++){
            printf("%c", s1[x]);
            printf("%c", s2[x]);
        }
        if(maior==s2.size()){
            for(int x=menor;x<maior;x++){
                printf("%c", s2[x]);
            }
        }
        else if(maior == s1.size()){
            for(int x=menor;x<maior;x++){
                printf("%c", s1[x]);
            }
        }
        printf("\n");
    }
    return 0;
}
