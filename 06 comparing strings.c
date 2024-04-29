// compare 2 strings 
// check if its exactly the same
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
    
    while (str1 != str2){
        if (strcmp(str1, str2) == 0){
            printf("anagrams");
            break;
        }
        else {
            printf("not anagrams");
            break;
        }
    }
    return 0;
}
