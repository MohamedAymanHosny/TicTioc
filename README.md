<h1 align="center">Calculator</h1>

## Project Description
This is a simple console-based **Tic-Tac-Toe** game implemented in C++.
The game allows two players to take turns in placing their marks ('X' and 'O') on a 3x3 grid
until a player wins or the game ends in a tie.

### Features
- **Two-Player Mode**: Players can take turns placing their marks on the grid.
- **Win Condition**: The game checks for a winning condition after each turn.
- **Draw Condition**: The game also checks for a tie if all positions are filled without a winner.
- **User-Friendly Interface**: The game displays the grid clearly in the console for easy visibility.

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
   ``` Tic-Tac-Toe Game
  
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

