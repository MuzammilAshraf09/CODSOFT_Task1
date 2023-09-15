//Description:
// In this simple guessing Game firstly i generate a random number from 1-100 using rand() and then ask user to enter
// its guess for this secret number and give the hints to narrow it down untill it reaches to it and i show how many 
// attempts he took to reach it and show Congrats message
#include<iostream>
#include<ctime>
using namespace std;

void GuessNumber(int random)
{
    int guess; 
    int flag=0;
    int attempt=0;

    cout<<"\nWelcome to the Game where you have to guess the Number in the range of 1 to 100";
    while (flag!=1)
    {
        attempt++;
        cout<< "\nEnter your Guess: ";
        cin >> guess;
        while (guess<0||guess>100)
        {
            cout<<"\nInvalid\nEnter Your Guess in range of 1 to 100: ";
            cin>>guess;
        }
        if(guess==random)
        {
            cout<< "\nOh man you did  it!! Your GUESS is quite similar to that random number!! ";
            cout<<"\nCongrats!!!! You took "<< attempt<< " attempts to narrow it down!";

            flag=1;
        }
        else if(guess<random)
        {
            cout<<"\nYou Guess is below the actual random number that given to you to guess! ";
            if(guess+50<random)
            {
                cout<<"\nAnd moreover your assumption is too low from the number to guess"; 
            }   
        }
        else if (guess> random)
        {
            cout<<"\nYou Guess is above the actual random number that given to you to guess! ";
            if(guess-50>random)
            {
                cout<<"\nAnd moreover your assumption is too high from the number to guess"; 
            }   
        }


    }
}
int main()
{
    srand(time(NULL));
    int randomNumber= 1+(rand()%100);
    GuessNumber(randomNumber);

    return 0;
}