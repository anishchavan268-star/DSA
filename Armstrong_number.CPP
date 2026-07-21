#include<iostream>
using namespace std;
int main(){
int num,temp=0,result=0,dupli;
cout << "Enter a number: ";
cin >> num;
dupli=num;


while(num>0){
temp=num%10;
result+= (temp*temp*temp);

num/=10;

}
if(result==dupli){
    cout << "Armstrong number";
}
else{
    cout<< "Not a armstrong";
}
return 0;
}