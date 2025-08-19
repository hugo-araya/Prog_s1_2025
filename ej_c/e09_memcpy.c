#include <stdio.h>
#include <string.h>

int main() {
  char str1[20] = "Hola Mundo";
  char str2[20];

  // Copia los primeros 5 caracteres de str1 a str2
  memcpy(str2, str1, 5);

  // Agrega un carácter nulo al final de str2 para que sea una cadena válida
  str2[5] = '\0';

  printf("str1: %s\n", str1);
  printf("str2: %s\n", str2);

  return 0;
}

/*
En este ejemplo, memcpy copia los primeros 5 caracteres de str1 a str2. 
Luego, se agrega un carácter nulo al final de str2 para que sea una cadena válida. 
Es importante tener en cuenta que memcpy no verifica si las áreas de memoria se superponen. 
Si las áreas de origen y destino se superponen, el resultado es indefinido. 
En casos de superposición, se recomienda usar memmove en su lugar, que sí 
maneja la superposición. 
Además, es crucial asegurar que el área de destino sea lo suficientemente grande 
para contener los datos copiados. 
De lo contrario, podría ocurrir un desbordamiento de búfer. 
Finalmente, si se trabaja con cadenas, es importante recordar copiar el 
carácter nulo al final de la cadena para que memcpy se comporte correctamente. 

*/