#include<bits/stdc++.h>
using namespace std;

string Matrix[3][3] = { "1","2","3","4","5","6","7","8","9" }; // This Is Row And Column
string Player = "X"; // As The First Player X

void Print_Matrix()
{
    system("cls"); // Change Matrix From Old To New In Seconds
    for (int i = 0; i < 3; i++)
    {
        if (i == 0)
        {
            cout << "   |   |   " << endl;
        }
        for (int j = 0; j < 3; j++)
        {
            if (j != 3 - 1)
                cout << " " << Matrix[i][j] << " |";
            else
            {
                cout << " " << Matrix[i][j] << endl;
            }
        }
        if (i != 3 - 1)
        {
            cout << "___|___|___ " << endl;
            cout << "   |   |   " << endl;
        }
        else
            cout << "   |   |   " << endl;
    }
}

void Play_Matrix()
{
    bool flag = false;
    string Place; // Selection Position
    while (!flag) {
        cout << "Choose Your Position - Player ( " << Player << " ) : ";
        cin >> Place;
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                if (Matrix[i][j] == Place) // Erase Number And Add X Or O
                {
                    Matrix[i][j] = Player;
                    flag = true; // Make The Player Input From 1 To 9
                    break; // If False Write Again Until Write Correct
                }
            }
            if (flag)
            {
                break; // If True Break
            }
        }
    }
    Player = (Player == "X") ? "O" : "X"; // Change Game Role
}

string Winner_Game()
{
    int Counter_X = 0, Counter_O = 0, Counter = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (Matrix[i][j] != "X" and Matrix[i][j] != "O")
            {
                Counter += 1;
            }
            if (Matrix[i][j] == "X")
            {
                Counter_X += 1;
            }
            else if (Matrix[i][j] == "O")
            {
                Counter_O += 1;
            }
            if (Counter_X == 3 || Counter_O == 3) // Check Out The Class Winner In Row
            {
                return (Counter_X > Counter_O) ? "X" : "O";
            }
        }
        Counter_X = 0; Counter_O = 0; // Clear Garbage To Start For Beginning
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (Matrix[j][i] == "X")
            {
                Counter_X += 1;
            }
            else if (Matrix[j][i] == "O")
            {
                Counter_O += 1;
            }
            if (Counter_X == 3 || Counter_O == 3)
            {
                return (Counter_X > Counter_O) ? "X" : "O"; // Check Out The Class Winner In Column
            }
        }
        Counter_X = 0; Counter_O = 0; // Clear Garbage To Start For Beginning
    }
    if (Matrix[0][0] == "X" && Matrix[1][1] == "X" && Matrix[2][2] == "X")
    {
        return "X"; // 'X' ==> ( The Player X Is Win )
    }
    else if (Matrix[0][2] == "X" && Matrix[1][1] == "X" && Matrix[2][0] == "X")
    {
        return "X"; // 'X' ==> ( The Player X Is Win )
    }
    else if (Matrix[0][0] == "O" && Matrix[1][1] == "O" && Matrix[2][2] == "O")
    {
        return "O"; // 'O' ==> ( The Player O Is Win )
    }
    else if (Matrix[0][2] == "O" && Matrix[1][1] == "O" && Matrix[2][0] == "O")
    {
        return "O"; // 'O' ==> ( The Player O Is Win )
    }
    if (Counter == 0) {
        return "E"; // 'E' ==> ( The Play Is End And No Body Is Win )
    }
    return "C"; // '.' ==> ( The Play Is Continue And No Body Is Win )
}

void Reset_Game() {
    // Reset the Matrix to initial state
    Matrix[0][0] = "1"; Matrix[0][1] = "2"; Matrix[0][2] = "3";
    Matrix[1][0] = "4"; Matrix[1][1] = "5"; Matrix[1][2] = "6";
    Matrix[2][0] = "7"; Matrix[2][1] = "8"; Matrix[2][2] = "9";
    Player = "X"; // Reset Player to X
}

int main()
{
    char playAgain; // Variable to store user's choice to play again

    do {
        while (Winner_Game() == "C") // ( The Play Is Continue And No Body Is Win )
        {
            Print_Matrix();
            Play_Matrix();
        }

        Print_Matrix();
        if (Winner_Game() == "E") // (The Play Is End And No Body Is Win)
        {
            cout << "\nNo Winner !!" << endl;
            cout << "Play Again" << endl;
        }
        else
        {
            cout << "\nThe Winner Is Player (" << Winner_Game() << ")" << endl;
            cout << "Congratulations !" << endl;
        }

        // Ask if the user wants to play again
        cout << "Do you want to play again? (y/n): ";
        cin >> playAgain;
        Reset_Game(); // Reset the game for next play
    } while (playAgain == 'y' || playAgain == 'Y'); // Continue if the user enters 'y' or 'Y'

    system("pause"); // If Clear The Game Need To Run Again
    return 0;
}
