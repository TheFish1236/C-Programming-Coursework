#include<stdio.h>
#include<ctype.h>

int main(){
    int pass = 0;
    int lastpos = 0;
    char input[16] = {};
    char check[16] = {};

    printf("Enter a string: ");
    scanf("%s", input);

    for (int i = 0; input[i] != '\0'; i++) {
        check[i] = toupper(input[i]);
    }
    
    while (check[lastpos] != '\0'){
        lastpos++;
    }
    lastpos--;

    int j = 0;
    for (int i = lastpos; i>=j; i--){
        if (check[i] != check[j]){
            printf("%s is not a palindrome!", input);
            return 0;
        }
        j++;
    }
    printf("%s is a palindrome!", input);
    
    return 0;
}
