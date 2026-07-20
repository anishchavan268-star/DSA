#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int temp=n;
    int rev=0;
    while(n>0){
        rev=(rev*10)+(n%10);
        n=n/10;

    }
if(temp==rev)
    cout<< "Palindrome";

else
    cout << "Erorr";

    return 0;
}