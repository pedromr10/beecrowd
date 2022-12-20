#include <iostream>
#include <string>
using namespace std;

int main(){
    int casos;
    string s1,s2;
    cin >> casos;cin.ignore();
    for(int i=0;i<casos;i++){
        cin >> s1 >> s2;
        if(s2.size()>s1.size()){
            cout << "nao encaixa" << endl; //primeiro caso, onde a segunda string é maior;
        }
        else{
            int dif = s1.size()-s2.size();
            string aux;
            aux = s1.substr(dif,s2.size());
            //cout << aux << endl;
            if(aux == s2){
                cout << "encaixa" << endl;
            }
            else{
                cout << "nao encaixa" << endl;
            }
        }
    }
}
