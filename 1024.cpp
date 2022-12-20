#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int casos;
    string s,aux;
    cin >> casos;cin.ignore();
    for(int i=0;i<casos;i++){
        getline(cin,s);
        //passada um, deslocamento de letras em 3 posicoes; FUNCIONANDO;
        for(int j=0;j<s.size();j++){
            if(s[j] >=65 && s[j]<=90 || s[j] >=97 && s[j]<=122){
                s[j] = s[j]+3;
            }
        }
        //cout << "Primeira passada: " << s << endl;
        //passada dois, inverter a string; FUNCIONANDO;
        reverse(s.begin(),s.end());
        //cout << "Segunda passada: " << s << endl;
        //passada tres, pegar a metade e fazer -1 em cada elemento;
        int met = s.size()/2;
        for(int j=met;j<s.size();j++){
            s[j] = s[j]-1;
        }
        //cout << "Terceira passada: " << s << endl;
        cout << s << endl;
    }
}
