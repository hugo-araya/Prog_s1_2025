#include <stdio.h>
#include <string.h>

int main() {
  char cadena[] = "Este es un ejemplo de cadena";
  char subcadena[] = "ejemplo";
  char *resultado = strstr(cadena, subcadena);

  if (resultado != NULL) {
    printf("Subcadena encontrada en: %s\n", resultado); // Salida: Subcadena encontrada en: ejemplo de cadena
  } else {
    printf("Subcadena no encontrada\n");
  }
  return 0;
}
