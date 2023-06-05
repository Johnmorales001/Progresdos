#include <stdio.h>

int maze[5][5] = {
    {0, 1, 0, 0, 0},
    {0, 1, 1, 1, 0},
    {0, 0, 0, 0, 0},
    {0, 1, 0, 1, 0},
    {1, 0, 0, 1, 0}
};

void printMaze() {
  for (int i = 0; i < 5; i++) {
    for (int j = 0; j < 5; j++) {
      if (maze[i][j] == 0) {
        printf(" ");
      } else {
        printf("█");
      }
    }
    printf("\n");
  }
}

int isValidMove(int x, int y) {
  if (x >= 0 && x < 5 && y >= 0 && y < 5 && maze[x][y] == 0) {
    return 1;
  }
  return 0;
}