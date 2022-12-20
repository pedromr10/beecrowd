#include <iostream>
using namespace std;

int main(){
    int casos;
    string jeba;
    cin >> casos;
    for(int i =0;i<casos;i++){
        cin >> jeba;
        if(jeba.size() == 5){
            printf("3\n");
        }
        else if((jeba[0]=='t' && jeba[1]=='w')||(jeba[0]=='t'&&jeba[2]=='o')||(jeba[1]=='w'&&jeba[2]=='o')){
            printf("2\n");
        }
        else{
            printf("1\n");
        }
    }
}
