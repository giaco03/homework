/*
 * Jacopo Del Granchio
 * #013 16.10.2019
 *
  * Una smeplice calcolatrice che supporta le operazion: +, -, * e /.
 */

#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main() {
  char scelta;
  int a, b, risultato, fatto = 0;

  printf("Premi + per sommare.\n");
  printf("Premi - per sottrarre.\n");
  printf("Premi * per moltiplicare.\n");
  printf("Premi / per dividere.\n");
  printf("Premi # per uscire.\n");

<<<<<<< HEAD
  switch (operazione) {
    case '+':
      printf("Il risultato è %d\n", a + b);
      break;

    case '-':
      printf("Il risultato è %d\n", a - b);
      break;

    case '*':
      printf("Il risultato è %d\n", a * b);
      break;

    case '/':
      printf("Il risultato è %d con resto %d\n", a / b, a % b);
=======
  for (int i = 0; i < 3; i++) {
    printf("\nScelta: ");
    scanf(" %c", &scelta);

    if (scelta == '+' || scelta == '-' || scelta == '*' || scelta == '/') {
      printf("Dammi due numeri: ");
      scanf(" %d %d", &a, &b);

      switch (scelta) {
        case '+':
          risultato = a + b;
          fatto = 1;
          break;

        case '-':
          risultato = a - b;
          fatto = 1;
          break;

        case '*':
          risultato = a * b;
          fatto = 1;
          break;

        case '/':

          if (b == 0) printf("Impossibil dividere per 0\n");
          else {
            risultato = a / b;
            fatto = 1;
          }

          // niente break perchè è l'ultimo caso.
      }
    } else if (scelta == '#') {
      printf("Chiudo il programma\n");
>>>>>>> 9311976320145f8ba08dc75961e0a32628a1231d
      break;
    }

    if (fatto) {
      printf("Il risultato e' %d\n", risultato);
      break;
    }
  }

  // getchar();
  // system("pause");
  return 0;
}
