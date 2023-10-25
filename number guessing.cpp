#include <iostream>
#include<cstdlib>
#include <ctime>
using namespace std;
void Rules()
{
    cout << endl;
    cout << "Rules to play the number guessing game " << endl << endl;
    cout << "1.The computer picks a random number from 0 to 99." << endl;
    cout << "You must try to guess the number." << endl;
    cout << "2.The computer ask you to enter your guess." << endl;
    cout << "3.The computer checks the number, if your guess is less than the computer generated number than it will show a message that your guess is lower" << endl;
    cout << "4.If your guess is higher than the computer generated number than the computer will show a message that your guess is higher" << endl;
    cout << "5.If your guess is equal to the computer generated number, than the computer will print a message 'Congratulation! You Won the game' and exit." << endl;
    cout << "6.If you are unable to guess the number than the computer will show the message and ask you to play tha game again or exit " << endl;
}
void Play();
void limit()
{
    int ch1;
    while(1)
    {
        cout << endl;
        cout << "1.Do you want to continue?" << endl;
        cout << "2.Exit" << endl;
        cout << "Enter Your choice:" << endl;
        cin >> ch1;
        switch(ch1)
        {
            case 1:
            Play();
            break;
            case 2:
            exit(0);
            break;
            default:
            cout << "Enter the 1 or 2 " << endl;
            break;
        }
    }
}
void Play()
{
    srand(time(0));
    int random_number = ( rand() % 10000 ) + 1;
    int guess = 0;
    int moves = 0;
    do{
        cout << endl;
        moves++;
        cout << "Enter the guess:" << endl;
        cin >> guess;
        if(moves == 10)
        {
            cout << endl;
            cout << "You have reached your limit" << endl;
            cout << "You are wrong " << random_number << " is the number" << endl;
            limit();
        }
        else if(guess > random_number)
        {
        cout << "Your guess is higher!" << endl;
        }
        else if(guess < random_number)
        {
        cout << "Your guess is lower!" << endl;
        }
        else
        {
        cout << "Congratulation! You Won the game" << endl;
        exit(0);
        }

    }while(guess != random_number );
}
int main()
{
    int ch;
    while(1)
    {
        cout << endl;
        cout << "1.Rules for the number guessing game" << endl;
        cout << "2.Play the number guessing game" << endl;
        cout << "3.Exit the number guessing game" << endl;
        cout << "Enter your choice:" << endl;
        cin >> ch;
        switch(ch)
        {
            case 1:
            Rules();
            break;
            case 2:
            Play();
            break;
            case 3:
            exit(0);
            break;
            default:
            cout << "Enter choice between 1 to 3" << endl;
        }
    }
}
