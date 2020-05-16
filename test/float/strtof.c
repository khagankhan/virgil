#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {
  for (int i = 1; i < argc; i++) {
    float f = strtof(argv[i], NULL);
    int32_t* p = (int32_t*)&f;
    printf("\tassert_fv(\"%s\", 0x%08x);\n", argv[i], *p);
  }
  return 0;
}
