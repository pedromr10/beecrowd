#include <iostream>
#include <set>
using namespace std;

int main(){
    int casos;
    set<char>s;
    cin >> casos; cin.ignore();
    string a;
    for(int i = 0;i<casos;i++){
        getline(cin,a);
        for(int j = 0;j<a.size();j++){
            if(a[j]>=97 && a[j]<=122){
                s.insert(a[j]);
            }
        }
        if(s.size()<13){
            printf("frase mal elaborada\n");
        }
        else if(s.size()>=13 && s.size() < 26){
            printf("frase quase completa\n");
        }
        else if(s.size() == 26){
            printf("frase completa\n");
        }
        s.clear();
    }

}
