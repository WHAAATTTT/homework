#include <iostream>
#include <cstdlib>
#include <time.h>

using namespace std;

int main()
{
    srand(time(0));
    int secretNum = rand()%10+1;
    int input;
    int attempts = 1;

    do{
        cout << "Enter your guess between 1 and 10" << endl;
        cin >> input;
        if(input < secretNum)
        {
            cout << "Your guess is too small, attempt(s):" << attempts << endl;
            attempts++;
        }
        else if(input > secretNum)
        {
            cout << "Your guess is too big, attempt(s):" << attempts << endl;
            attempts++;
        }
        else
        {
            cout << "Congrats! You got it after " << attempts << " tries" << endl;
        }
    }while(input != secretNum);
   
    return 0;
}
