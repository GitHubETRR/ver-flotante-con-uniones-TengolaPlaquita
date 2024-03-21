/*#include <stdio.h>
union float_t{
  float fu;
  unsigned char var[4];
};
int main(void) {
  union float_t num;
  printf("Ingrese un valor flotante: ");
  scanf("%f", &num.fu);
  printf("El valor ingresado es: \n");
  for(int i = 3; i >= 0; i--){
    printf(" %x ", num.var[i]);
  }
  return 0;
}*/