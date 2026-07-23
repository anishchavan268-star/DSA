#include<iostream>
using namespace std;
void print(int i,int num){
if(num<i){
    return ;
}
cout << num << " ";
print(i,num-1);
}

int main(){
int number;
    cout << "Enter a number: ";
cin >> number;
print(1,number);
    return 0;
}