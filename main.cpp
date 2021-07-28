

#include <iostream>
using namespace std;

int main()
{
char player1;          //input for player 1
char player2;          //input for player 2
char playAgain = 'y'; //loop control

cout << "Enter R P or S for Rock, Paper, or Scissors" << endl;

do{
    cout << "Player 1 (R P S): ";
    cin >> player1;
    player1 = toupper(player1); //converts all input to uppercase

    cout << "Player 2 (R P S): ";
    cin >> player2;
    player2 = toupper(player2);

    if (player1 == 'R')
    {
        if (player2 == 'R')
            cout << "Tie game" << endl;
      else if (player2 == 'P')
            cout << "Paper covers Rock, Player 2 wins." << endl;
      else if (player2 == 'S')
            cout << "Rock breaks Scissors, Player 1 wins." << endl;
      else
        cout << "Illegal selection for player 2" << endl;
    }

  else if (player1 == 'P')
    {
        if (player2 == 'R')
            cout << "Paper covers Rock, Player 1 wins." << endl;
      else if (player2 == 'P')
            cout << "Tie game" << endl;
      else if (player2 == 'S')
            cout << "Scissors cuts Paper, Player 2 wins." << endl;
      else
        cout << "Illegal selection for player 2" << endl;
    }

  else if (player1 == 'S')
    {
        if (player2 == 'R')
            cout << "Rock breaks Scissors, Player 2 wins." << endl;
      else if (player2 == 'P')
            cout << "Scissors cuts Paper, Player 1 wins." << endl;
      else if (player2 == 'S')
            cout << "Tie game" << endl;
      else
        cout << "Illegal selection for player 2" << endl;
    }

        else
        {
        cout << "Illegal selection for player 1" << endl;
    }

        cout << "Do you want to play again? Press 'Y' for yes, any key to exit";
        cin >> playAgain;
        playAgain = toupper(playAgain);
        cout << endl; //blank between games
}
while (playAgain == 'Y');

return 0;

}
