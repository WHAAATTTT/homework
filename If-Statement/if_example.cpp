#include <iostream>


using namespace std;

int main()
{
    cout << "This is an example of if-statements!" << endl;
    cout << "Please input an integer:" << endl;

    int input;
    cin >> input;

    cout << "Your chosen number is: " <<  input << endl;
    cout << "If it is bigger than 10, we will display Nice Work!" << endl;
    cout << "Else If it is bigger than 5, we will display Okay!" << endl;
    cout << "Else we will display Bad Work!" << endl;
    cout << endl;
    cout << "Display: " << endl;

    // if block...
    if (input > 10)
    {
        cout << "Nice Work!" << endl;
    }
    else if (input > 5)
    {
        cout << "Okay" << endl;
    }
    else
    {
        cout << "Bad Work!" << endl;
    }
    
    return 0;
}
