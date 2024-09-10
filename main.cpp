#include <stdio.h>

#include "iog_assert.h"
#include "iog_string.h"

// ----- Demonstration of iog_string -----

int main(int argc, const char *argv[]) {
  char str1[100];
  char str2[100];
  char str3[100];


  istrcpy(str1, "Hello, ");
  printf("str1 = '%s'\n", str1);

  istrcpy(str2, "Helly!");
  printf("str2 = '%s'\n", str2);

  istrcat(str1, str2);
  printf("-----------------\n");
  printf("istrcat(str1, str2) = '%s' | len = %lu\n", str1, istrlen(str1));

  istrcpy(str3, str1);

  printf("istrcmp('%s', '%s') = %d\n", str1, str2, istrcmp(str1, str2));
  printf("istrcmp('%s', '%s') = %d\n", str1, str3, istrcmp(str1, str3));
  printf("-----------------\n");
  printf("istrchr('%s', '%c') = %ld\n", str1, ',', (long)istrchr(str1, ','));

  return 0;
}
