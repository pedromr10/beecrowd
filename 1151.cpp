#include <iostream>
#include <vector>
using namespace std;

int main(){
  long long v[61];
  int num;
  cin >> num;

  v[0] = 0;
  v[1] = 1;

  for(int i = 2;i<61;i++){
    v[i] = v[i-1]+v[i-2];
  }
  for(int i = 0;i<num-1;i++){
    cout << v[i] << " ";
  }
  cout << v[num-1] << endl;
}

