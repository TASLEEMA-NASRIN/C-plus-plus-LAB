#include<iostream>
using namespace std;

int main(){
    int n,original,rev=0,temp;
    cout << "enter a number:";
    cin >> n;
    original=n;

    while(n!=0){
        temp=n%10;
        rev=rev*10+temp;
        n=n/10;

    }
    if(original==rev){
        cout << "it is a palindrome";
    }
    else{
        cout << "it is not a palindrome";
    }
    return 0;
}