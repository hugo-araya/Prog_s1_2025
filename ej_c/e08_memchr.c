#include <stdio.h>
#include <string.h>

int main() {
  char buffer[] = "Hola, mundo!";
  char *ptr;
  int caracter_a_buscar = 'm';
  size_t num_bytes = strlen(buffer);

  ptr = (char *)memchr(buffer, caracter_a_buscar, num_bytes);

  if (ptr != NULL) {
    printf("Se encontró '%c' en la posición: %ld\n", caracter_a_buscar, ptr - buffer);
  } else {
    printf("No se encontró '%c'\n", caracter_a_buscar);
  }

  return 0;
}
