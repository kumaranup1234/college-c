#include <stdio.h>
//program to check input char. is vowel or not
int main(){
    char letter;
    int lower_case , upper_case;
    printf("Enter a letter: \n");
    scanf("%c", &letter);
    lower_case = (letter == 'a' ||letter == 'i' || letter == 'e' || letter == 'o' || letter == 'u');
    upper_case = (letter == 'A' || letter == 'I' ||  letter == 'E'  || letter == 'O' ||  letter == 'U');
    if (letter == lower_case || upper_case)
    {
        printf("Entered letter is a vowel");
    }
    else
    {
        printf("Entered letter is a consonant");
    }
    return 0;
}