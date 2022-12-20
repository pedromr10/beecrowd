#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(){
    int casos,qtdlingua,contador=0;
    vector<string>v;
    cin >> casos;
    string lingua;
    for(int i =0;i<casos;i++){
        cin>> qtdlingua;
        cin >> lingua;
        v.push_back(lingua);
        contador++;
        for(int j =0;j< qtdlingua-1;j++){
            cin >> lingua;
            v.push_back(lingua);
            if(lingua != v[0]){
                contador--;
            }
            else if(lingua == v[0]){
                contador++;
            }
        }
        if(contador == qtdlingua){
            cout << v[0] << endl;
        }
        else if(contador!=qtdlingua){
            printf("ingles\n");
        }
        v.clear();
        contador=0;
    }
}
