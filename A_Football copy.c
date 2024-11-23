#include <stdio.h>

int main() {
    char s[101];
    int count = 1;  

    scanf("%s", s);  

    for (int i = 1; s[i] != '\0'; i++) {  
        if (s[i] == s[i - 1]) {           
            count++;                     
            if (count >= 7) {          
                printf("YES\n");          
                return 0;                 
            }
        } else {
            count = 1;                    
        }
    }

    printf("NO\n"); 
    return 0;
}