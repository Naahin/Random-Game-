#include<iostream>
#include<stdlib.h>
#include<conio.h>
using namespace std;
int main()
{
    while(1)
    {
         int guessnum , randomnum;
    cout << "Enter number from 1 to 5 : ";
    cin >> guessnum;
    randomnum = rand()%5 + 1;
    if(guessnum==randomnum)
    {
        cout << "You have won!";
        break;
    }
    else
    {
        cout << "You have lost.Try again" << endl;
        cout << "The number was = " << randomnum << endl <<endl;
    }
    }

    getch();
}
