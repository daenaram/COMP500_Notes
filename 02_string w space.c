// scan string w spaces

#include <stdio.h>
 
int main() {
    char str[100];
      scanf("%[^\n]s",str);
      printf("%s",str);
    return 0;
}
