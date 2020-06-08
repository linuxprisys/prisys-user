#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static void Usage(void) {
  printf("Usage: prisys-user OPERATION\n\n"
         "OPERATIONS:\n"
         "\thelp\t\tShow the usage.\n");
}

int main(int argc, char *argv[]) {
  printf("PriSys-User\n");
  if (argc < 2) {
    Usage();
    exit(1);
  }

  if (strcmp(argv[1], "help") == 0) {
    Usage();
  } else {
    printf("Unknown operation: %s\n", argv[1]);
    Usage();
  }
  return 0;
}
