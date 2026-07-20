#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int cnt(int num){
    int temp=0;
    temp=log10(num)+1;
    
    return temp;
}

int main(){

cout << cnt(1384859);
    return 0;
}
