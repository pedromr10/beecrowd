//1272_mensagemoculta

#include <iostream>
using namespace std;

int main(){
    int casos;
    string s;
    cin >> casos;   cin.ignore();
    for(int i=0;i<casos;i++){
        getline(cin,s);
        if(s[0] != ' '){
            cout << s[0];
        }
        for(int j=1;j<s.size();j++){
            if(s[j] == ' '){
                continue;
            }
            if(s[j-1] == ' '){
                cout << s[j];
            }
        }
        cout << endl;
    }
}

//usar getline, pq aparentemente tem espacos, nao pontos;
