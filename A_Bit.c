#include <stdio.h>
#include <string.h>

int main() {
    int n, x = 0;
    char statement[4]; 
    scanf("%d", &n);

    
    for (int i = 0; i < n; i++) {
        scanf("%s", statement);

        
        if (strstr(statement, "++")) {
            x++;
        }
    
        else if (strstr(statement, "--")) {
            x--;
        }
    }

    
    printf("%d\n", x);

    return 0;
}