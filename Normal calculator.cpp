#include<iostream>
#include<cmath>
using namespace std;
int main() {
    double a , b;
    cout<<"Enter first number: "<<endl;
    cin>>a;
    char op;
    cout<<"Enter an operation: "<<endl;
    cin>>op;
    cout<<"Enter second number: "<<endl;
    cin>>b;
    if ( op == '+') {
        cout<<"Answer: "<<a+b<<endl;
    }else if ( op == '-') {
        cout<<"Answer: "<<<a-b<<endl;
    }else if ( op == '*') {
        cout<<"Answer: "<<a*b<<endl;
    }else if ( op == '/') {
        cout<<"Answer: "<<a/b<<endl;
    }else {
        cout<<"Enter a valid operator"<<endl;
    }
}
