#include <stdio.h>
#include "maze.h"
#include "player.h"

void juegoNuevo() {
  playerX = 0;
  playerY = 0;
  moveCount = 0;

  printf("¡Bienvenido al Laberinto!\n");

  while (!isGameOver()) {
    printf("\n");
    printMaze();

    printf("\n");
    printf("Movimientos: %d\n", moveCount);
    printf("Elige una dirección (WASD): ");
    char direction;
    scanf(" %c", &direction);

    movePlayer(direction);
  }
}

void mostrarCreditos() {
  printf("Los créditos son para David Cabrera Santamaria, A00109191\n");
}

int main() {
  int opcion;

  do {
    printf("Bienvenido al Laberinto\n");
    printf("1. Jugar\n");
    printf("2. Créditos\n");
    printf("3. Salir\n");
    printf("Selecciona una opción: ");
    scanf("%d", &opcion);

    switch (opcion) {
      case 1:
        juegoNuevo();
        break;
      case 2:
        mostrarCreditos();
        break;
      case 3:
        printf("¡Hasta luego!\n");
        break;
      default:
        printf("Opción inválida. Inténtalo de nuevo.\n");
    }
  } while (opcion != 3);

  return 0;
}