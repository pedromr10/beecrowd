#include <iostream>
using namespace std;

int main(){
    int casos;
    cin >> casos;
    for(int i=0;i<casos;i++){
        string s;
        int x;
        cin >> s >> x;cin.ignore();
        for(int j=0;j<s.size();j++){
            if((s[j]-x)<65){
                printf("%c", (s[j]-x)+26);
                //cout << (s[j]-x)+26; ta printando numero, foda;
            }
            else{
                printf("%c", s[j]-x);
                //cout << s[j]-x;
            }
        }
        cout << endl;
    }
}
