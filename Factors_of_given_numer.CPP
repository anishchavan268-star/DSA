#include<iostream>
#include<cmath>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
vector <int> ls; 
int num;
cout << "Enter a number: ";
cin >> num;    
for(int i = 1;i*i<=num;i++){
    if(num%i==0){
        cout << i << " ";
    if(num/i !=i){
        ls.push_back((num/i));
    }
    }
    
}
sort(ls.begin(), ls.end());
for(auto it =ls.begin();it!=ls.end();++it){
        cout << *it << " ";
    }
    return 0;
}