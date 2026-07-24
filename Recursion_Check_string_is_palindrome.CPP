#include<iostream>
using namespace std;
void palindrome(int start,int end,string &s){
if(start>=end){
    return ;
}
swap(s[start],s[end]);
palindrome(start+1,end-1,s);

}

int main(){
   string s;
   
    cout << "Enter a string: ";
    cin >> s;
    string result = s; 
    palindrome(0,result.length()-1,result);
    
    if(s==result){
        cout << "string is palindrome";
    }
    else cout << "Not a palindrome";
    return 0;
}