#include<iostream>
using namespace std;
bool isPowerOfTwo(int n){
    return n > 0 && (n & (n-1)) == 0;
}
int main(){
    int n;
    cout << "Enter your number :";
    cin>>n;
    if (isPowerOfTwo(n)) {
        cout << "Your number is a power of 2";
    }else {
        cout << "Your number is not a power of 2";
    }

cout<<endl;
return 0;
}
