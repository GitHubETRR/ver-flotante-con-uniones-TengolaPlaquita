#include <stdio.h>
union float_t{
  float fu;
  unsigned char var;
};
int main(void) {
  union float_t num;
  unsigned char *pchar = &num.var + 3;
  printf("Ingrese un valor flotante: ");
  scanf("%f", &num.fu);
  while(pchar >=  &num.var){
    printf(" %x ", *pchar);
    pchar--;
  }
  return 0;
}