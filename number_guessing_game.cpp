/******************************************************************************
	Aayan Faisal
	3/9/2027
	Number Guessing Game
	This program generates a random number between 1–10 and allows the user up to 5 attempts to guess it. 
	Includes input validation and feedback on whether guesses are too high or too low.
*******************************************************************************/

#include <iostream>
using namespace std;
#include <ctime>

int main()
{
    srand(time(0));
    const int MAX=10;
    const int MIN=1;
    int guess;
    int counter; //how many times to guess right number
    char replay;
    
    do 
    {
        int randomNum = rand()%(MAX-MIN+1)+1; //guess 1-10
 	
        for (counter=1; counter < 6; counter++) 
        {
            do{
                cout << "Guess the number between 1-10: ";
                cin >> guess;
                if (guess < 1 || guess > 10)
                    cout << "Invalid number" << endl;
            } while (guess < 1 || guess > 10);
            if (guess < randomNum)
                cout << "Your guess is too low" <<endl;
            else if (guess > randomNum)
                cout << "Your guess is too high" <<endl;
            else
                break;
            cout << "Tries remaining: " << 5 - counter << endl;
        }
        
        if (guess == randomNum)
        {
            cout << "Congratulations! You guessed the number in " << counter << " tries!" << endl;
            if (counter == 1)
                cout << "You're amazing!" << endl;
        }
        else
            cout << "The correct number was: " << randomNum << endl;
        cout << "Do you want to play again? [Y/N] " << endl;
        cin >> replay;
    } while (replay == 'Y' || replay == 'y');   
    
    
    return 0;
}