#include<iostream>
using namespace std;
int print(int i , int N){

    if(i>N){
    return 0 ;
}
cout << i << " ";
print(i+1,N);

}

int main(){
    int number;
    cout << "Enter a number: ";
    cin >> number;
print(1,number);

    return 0;     
}