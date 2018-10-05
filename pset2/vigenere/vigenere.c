#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, string argv[])
{
    //check for lack of user input
    if (argc != 2)
    {
        printf("error: must input argument");
        printf("\n");
        return 1;
    }

    //check for non-letters
    for (int i = 0; i < strlen(argv[1]); i++)
    {
        string s = argv[1];
        if (s[i] < 'A' || (s[i] > 'Z' && s[i] < 'a') || s[i] > 'z')
        {
            printf("error: key must only be letters");
            printf("\n");
            return 1;
        }
    }


    //implement the cipher
    //dumb global variables
        string s = argv[1];
        string p = get_string("plaintext:  ");

        //j helps k iterate through input string
        int j = 0;

        printf("ciphertext: ");
        //generate ciphertext
        for (int i = 0, n = strlen(p); i < n; i++)
        {
                int k = s[j];

                //plaintext lowercase
                if (p[i] >= 'a' && p[i] <= 'z')
                {
                    //knock k down to "alphabet size"
                    if (k>='A' && k<='Z'){
                        k = k - 'A';
                    }
                    if (k>='a' && k<='z'){
                        k = k - 'a';
                    }

                    //c is a small number that describes how far the cipher advances
                    //knocked down to 'alphabet size'
                    int c = ((p[i] - 'a' + k) % 26);
                    //brought back up to ascii size
                    printf("%c", c + 'a');

                    j++;
                    j = j %strlen(s);
                }
                //plaintext uppercase
                if (p[i] >= 'A' && p[i] <= 'Z')
                {

                    //knock k down to "alphabet size"
                    if (k>='A' && k<='Z'){
                        k = k - 'A';
                    }
                    if (k>='a' && k<='z'){
                        k = k - 'a';
                    }

                    //c is a small number that describes how far the cipher advances
                    //knocked down to 'alphabet size'
                    int c = ((p[i] - 'A' + k) % 26);
                    //brought back up to ascii size
                    printf("%c", c + 'A');

                    j++;
                    j = j %strlen(s);
                }

            //not a letter
            if (p[i] < 'A')
            {
                printf("%c", p[i]);
            }

            //not a letter
            if (p[i] > 'Z' && p[i] < 'a')
            {
                printf("%c", p[i]);
            }

            //not a letter
            if (p[i] > 'z')
            {
                printf("%c", p[i]);
            }
        }
        printf("\n");
        return 0;

}