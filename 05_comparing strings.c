#include <stdio.h>
#include <string.h> 

int main() {
    
    char str1[100];
    char str2[100];
    int result;
    
    printf("word 1: \n");
    scanf("%[^\n]%*c", str1);
    printf("word 2: \n");
    scanf("%[^\n]%*c", str2);
    
    while (result != 0){
        result = strcmp(str1, str2);
    }
    printf("%s %s are the same", str1, str2);
    
    return 0;
}
