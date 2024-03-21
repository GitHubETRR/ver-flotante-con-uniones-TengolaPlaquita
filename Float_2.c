/*#include <stdio.h>
union float_t{
  float fu;
  struct{
    unsigned long mant : 23;
    unsigned long exp : 8;
    unsigned long sign : 1;
  }parts;
  unsigned int full;
};
int main(void) {
  union float_t num;
  printf("Ingrese un valor flotante: ");
  scanf("%f", &num.fu);
  printf("signo: %x\n", num.parts.sign);
  printf("E: 0x%x\n", num.parts.exp);
  printf("e: 0x%x\n", num.parts.exp-127);
  printf("mantisa: 0x%x\n", num.parts.mant);
  printf("completo: 0x%x\n", num.full);
  return 0;
}*/