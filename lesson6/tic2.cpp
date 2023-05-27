#include<iostream> 

/* 
* Finish the implementation of player_turn function which handles a player's turn. 
*/
void player_turn() {
   int row;
   int col;

   std::cout << "Row: ";
   std::cin >> row; 
   std::cout << "Col: ";
   std::cin >> col; 
}

/*
* Function to check if the game is over
* Returns true if game over, false otherwise
*/
bool game_over(char** board, int bSize, char player) {
   bool over; 

   // check the rows 
   for (int i = 0; i < bSize; i++) { 
      over = true; 
      for (int j = 0; j < bSize; j++) {
         if (board[i][j] != player) {
            over = false; 
            break; 
         }
      }

      if (over == true) {
         return true; 
      }
   }

   // check the columns
   for (int i = 0; i < bSize; i++) { 
      over = true; 
      for (int j = 0; j < bSize; j++) {
         if (board[j][i] != player) {
            over = false; 
            break; 
         }
      }

      if (over == true) {
         return true; 
      }
   }

   // check the left diagonal
   over = true; 
   for (int i = 0; i < bSize; i ++) {
      if (board[i][i] != player) {
         over = false; 
         break; 
      } 
   }

   if (over == true) {
      return true; 
   }

   // check the right diagonal 
   over = true; 
   for (int i = bSize - 1; i >= 0; i -- ) {
      if (board[i][bSize - 1 - i] != player) {
         over = false; 
         break; 
      } 
   }

   if (over == true) {
      return true; 
   }

   // the game is not over
   return false; 
}

void print_board(char** board, int bSize) {
   for (int i = 0; i < bSize; i++) { 
      for (int j = 0; j < bSize; j++) {
         std::cout << board[i][j] << ' '; 
      }
      std::cout << std::endl;
   }
}

int main() {
   // ask the board size
   int bSize = 0; 
   std::cout << "Board size: ";
   std::cin >> bSize; 
   std::cout << std::endl; 

   // create the board with correct size 
   char ** board = new char*[bSize];
   for (int i = 0; i < bSize; i++) {
      board[i] = new char[bSize]; 
   }

   // initialize the board with space characters 
   for (int i = 0; i < bSize; i++) { 
      for (int j = 0; j < bSize; j++) {
         board[i][j] = ' '; 
      }
   }

   // Main function for the Tic Tac Toe game
   bool over = false; // Game state 
   char player = 'O'; // Player character
   while(over) {
      player_turn(); // CHANGE THIS 

      // Print out the board 
      print_board(board, bSize);

      // Check if the player won 
      over = game_over(board, bSize, player); 
      if (over) {
         std::cout << "Player " << player << " Win" << std::endl; 
         break; 
      }

      // change turn for player
      if (player == 'O') {
         player = 'X';
      } else {
         player = 'O'; 
      }
   }

   // deallocate the memory in the heap 
   for (int i = 0; i < bSize; i++) {
     delete [] board[i]; 
   }
   delete [] board; 

   return 0;
}
