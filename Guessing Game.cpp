#include<iostream>
using namespace std;
int main() {
    int secretNumber = 2;
    int userNumber;
    int guessCount = 3;
    int guessLeft = 0;
    bool OutOfGuesses = false;
    while(secretNumber != userNumber){
        if(guessCount == guessLeft){
            cout<<"You are out of guesses!"<<endl;
        break;
        } else if(guessCount > guessLeft) {
            cout<<"You have "<<guessCount<<" chances remaining"<<endl;
}
    cout<<"Enter a number: "<<endl;
    cin>>userNumber;
    guessCount--;
    if(secretNumber == userNumber){
    cout<<"You won!!"<<endl;
    break;

}
}
}
