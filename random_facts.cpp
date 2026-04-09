/******************************************************************************
  Aayan Faisal
  4/9/2026
  Simple C++ program demonstrating functions, switch statements, conditionals, and random number generation.
*******************************************************************************/

#include <iostream>
using namespace std;
#include <ctime>

string switchStates(int);
void ifSport(int);

int main()
{
    srand(time(0)); 
    int randomSport = rand() % 5 + 1;
    int randomState = rand() % 5 + 1;
    cout << switchStates(randomState) << endl;
    ifSport(randomSport);
    return 0;
}

string switchStates(int num)
{
    switch(num)
    {
        case 1:
            return "Alaska is the largest U.S. state by land area—bigger than the next three largest states combined.";
        case 2:
            return "California has the highest population of any U.S. state, with over 39 million people.";
        case 3:
            return "Texas was once its own independent nation (the Republic of Texas) before joining the U.S. in 1845.";
        case 4:
            return "Hawaii is the only state made entirely of islands and is the most geographically isolated state.";
        case 5:
            return "Florida has the longest coastline in the contiguous United States.";
        default:
            return "Invalid state number.";
    }
}

void ifSport(int num)
{
    if(num == 1)
        cout << "FIFA World Cup is the most-watched sporting event globally, with billions of viewers." << endl;
    else if(num == 2)
        cout << "National Football League generates more revenue than any other professional sports league in the world." << endl;
    else if(num == 3)
        cout << "Basketball was invented in 1891 by James Naismith." << endl;
    else if(num == 4)
        cout << "Tennis matches at Wimbledon must follow a strict all-white dress code for players." << endl;
    else if(num == 5)
        cout << "Soccer is the most popular sport in the world, played in nearly every country." << endl;
}

