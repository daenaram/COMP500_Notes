// for loops

#include <stdio.h>

int main() {
    
    int lines; 
    
    printf(">\n");
    scanf("%d", &lines);
    
    for (int row = 1; row <= lines; ++row)
    {
        printf("+");
        
        for (int column = 1; column <= lines; ++column)
        {
            printf("-");
        }
        
        printf("+\n");
    }

    return 0;
}
