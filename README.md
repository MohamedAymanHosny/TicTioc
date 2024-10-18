<p align="center">
  <strong># Tic-Tac-Toe Game</strong>
</p>

This is a simple console-based Tic-Tac-Toe game implemented in C++. The game allows two players to take turns in placing their marks ('X' and 'O') on a 3x3 grid until a player wins or the game ends in a tie.

## Features

- **Interactive Gameplay**: Players can input their chosen positions to place their marks on the grid.
- **Win/Tie Detection**: The game checks for winning conditions after each move and declares the winner or indicates a tie when appropriate.
- **Replay Option**: After a game ends, players are prompted to play again. If they choose to do so, the game resets to its initial state.

## Code Structure

### 1. Global Variables
- `Matrix[3][3]`: A 2D array representing the Tic-Tac-Toe grid.
- `Player`: A string that indicates the current player ('X' or 'O').

### 2. Functions
- **Print_Matrix()**: Displays the current state of the game board.
- **Play_Matrix()**: Handles player input and updates the game board.
- **Winner_Game()**: Checks for a winner or a tie after each move.
- **Reset_Game()**: Resets the game board and current player for a new game.

### 3. Main Function
The `main()` function controls the game flow:
- It enters a loop where the game continues until there is a winner or a tie.
- After a game concludes, it prompts the players to play again, allowing for multiple rounds.

## How to Play
1. Run the program.
2. Players take turns to enter a number (1-9) corresponding to their chosen position on the grid.
3. The game will display the current grid after each move and announce the winner or if the game is a tie.
4. Players can choose to play again or exit after each game.

## Example Output
   `` Tic-Tac-Toe Game
  =======================
         |     |       
      1  |  2  |  3    
    _____|_____|_____
         |     |       
      4  |  5  |  6    
    _____|_____|_____
         |     |       
      7  |  8  |  9    
         |     |       

   Choose Your Position (Player X): 

