#include<iostream>
using namespace std;
void name(int num){
    if(num==0){
        return;
    }
    cout << "Anish" << " ";
    name(num-1);
}

int main(){
    int n;
    cin >> n;
    name(n);

return 0;    
}