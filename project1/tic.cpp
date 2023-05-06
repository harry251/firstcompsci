#include<iostream>

char board[3][3] = {{' ',' ',' '},{' ',' ',' '},{' ',' ',' '}};; 
int checkO[6] = {0, 0, 0, 0, 0, 0}; // this is for O; first 3 row, second 3 col 
int checkX[6] = {0, 0, 0, 0, 0, 0}; // this is for X; first 3 row, second 3 col 
bool checkB[3][3] = {{false, false, false}, {false, false, false}, {false, false, false}};

void player_turn() {
   char player;
   int row;
   int col;

   std::cout << "Player: ";
   std::cin >> player; 
   std::cout << "Row: ";
   std::cin >> row; 
   std::cout << "Col: ";
   std::cin >> col; 

   board[row][col] = player;
   checkB[row][col] = true; 

   if (player == 'O') {
      checkO[row]++; 
      checkO[col+3]++;
   }
   else if (player == 'X') {
      checkX[row]++; 
      checkX[col+3]++;
   }

}

bool game_over() {
   for (int i = 0; i < 6; i++) {
      if (checkO[i] == 3) {
         return true; 
      }
      if (checkX[i] == 3) {
         return true; 
      }
   }

   bool temp = true;
   for (int i = 0; i < 3; i++) {
      for (int j = 0; j < 3; j++) {
         temp = checkB[i][j];
         if (temp == false) {
            break;
         }
      }
      if (temp == false) {
         break;
      }
   }

   if (temp == true) {
      return true;
   }
   return false;
}

void print_board() {
   for (int i = 0; i < 3; i++) { 
      for (int j = 0; j < 3; j++) {
         std::cout << board[i][j];
      }
      std::cout << std::endl;
   }
}

int main() {
   // while (game)
   while(!game_over()) {
      player_turn();
      print_board();
      // break; 
      // continue;
   }

   // winner

   return 0;
}