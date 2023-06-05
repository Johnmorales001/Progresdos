#ifndef PLAYER_H
#define PLAYER_H

extern int playerX;
extern int playerY;
extern int moveCount;
void movePlayer(char direction);
int isGameOver();

#endif