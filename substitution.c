#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

void substitute( char plaintext[], char key[] );


int main(int argc, char* argv[]){


    substitute( argv[1], argv[2]);





    return 0;
}


void substitute(char plaintext[], char key[] ){

    int indexes [30];
    char secret[30];
    int length = strlen(plaintext);

    for(int i = 0;  i < length; i++){

        if(isupper(plaintext[i]) !=0)
            indexes[i] = plaintext[i] - 65;
        else
            indexes[i] = plaintext[i] - 97;



    }

    for(int j =0; j < length; j++){

        secret[j] = key[indexes[j]];

    }
    printf("The plaintext is %s \n", plaintext);
    printf("The secret text is %s \n", secret);





}
