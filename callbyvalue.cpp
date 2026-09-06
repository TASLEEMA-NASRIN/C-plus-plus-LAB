#include<iostream>
using namespace std;

void swap(int x,int y){
    int temp=x;
    x=y;
    y=temp;
    cout<<"after swap:a="<<x<<"b="<<y<<endl;
}
int main(){
    int a=10;
    int b=30;
    cout<<"before swap:a="<<a<<"b="<<b<<endl;
    swap(a,b);
    return 0;
}
