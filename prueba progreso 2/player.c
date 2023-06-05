#include <stdio.h>
#include "maze.h"

int playerX = 0;
int playerY = 0;
int moveCount = 0;

void movePlayer(char direction) {
  int newX = playerX;
  int newY = playerY;

  switch (direction) {
    case 'W':
      newX--;
      break;
    case 'S':
      newX++;
      break;
    case 'A':
      newY--;
      break;
    case 'D':
      newY++;
      break;
  }

  if (isValidMove(newX, newY)) {
    playerX = newX;
    playerY = newY;
    moveCount++;
  } else {
    printf("Movimiento inválido. Intenta de nuevo.\n");
  }
}

int isGameOver() {
  if (playerX == 4 && playerY == 4) {
    printf("¡Ganaste!\n");
    if (moveCount <= 8) {
      printf("Eres un Pro!\n");
    } else if (moveCount <= 15) {
      printf("Eres novato.\n");
    } else {
      printf("Eres un noob!\n");
    }
    return 1;
  }
  return 0;
}