/*
 * This program classifies the characters of a string like vowels, consonants, digits, special characters and spaces.
 * entered by the user.
 *
 * Author: Karla Alexandra Hernandez Aviles
 * Email: A01411843@itesm.mx
 * Date: 18/10/2018
 */

 //The program use this libraries
 #include <stdio.h>
 #include <ctype.h>
 #include <string.h>

 //In this part we check if the character is a vowel
 int isvowel(char k) {
     //This part is to compare vowels (a,e,i,o and u)
     k = (char) tolower(k);
     if (k == 'a' ||
         k == 'e' ||
         k == 'i' ||
         k == 'o' ||
         k == 'u') {
         return 1;
    }
    return 0;
}

int main() {
    //Declaration of variable
    char str[250];           //<----str=string


    printf("Welcome user, this program will help you to classify vowels,consonants,digits and others characters."
           "Please, Enter your text:    ");
    fgets(str, sizeof(str), stdin);

    //In this part the program classify each character of the text
    for (int a = 0; a < strlen(str); a++) {

        printf("%c ", str[a]);

        if (isalpha(str[a])) {
            if (isvowel(str[a])) {
                printf("This character is a vowel  \n"); //The program say if the character is a vowel
            } else {
                printf("This character is a consonant  \n"); //Or a consonant
            }
        } else if (isdigit(str[a])) {
            printf("This character is a digit   \n");        //In this part the program classify if is a digit
        } else if (str[a] == ' ' || str[a] == '\t') {
            printf("is a space.   \n");                      //if is a space
        } else if (str[a] == '\n');                          //If the character is a new line doesn´t matter
        else {
            printf("This is a special character\n");
        }
    }
    return 0;
}