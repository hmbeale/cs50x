#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, string argv[])
{

    if (argc != 2)
    {
        printf("error: must input argument");
        return 1;
        printf("\n");

    }

    else
    {
        int k = atoi(argv[1]);
        string p = get_string("plaintext:  ");
        k = k % 26;

        printf("ciphertext: ");

        for (int i = 0, n = strlen(p); i < n; i++)
        {
            //lowercase
            if (p[i] >= 'a' && p[i] <= 'z')
            {
                if (k + p[i] > 122)
                {
                    printf("%c", k + p[i] - 26);
                }
                else
                {
                    printf("%c", k + p[i]);
                }
            }

            //uppercase
            if (p[i] >= 'A' && p[i] <= 'Z')
            {
                if (k + p[i] > 90)
                {
                    printf("%c", k + p[i] - 26);
                }
                else
                {
                    printf("%c", k + p[i]);
                }
            }

            //not a letter
            if (p[i] < 65)
            {
                printf("%c", p[i]);
            }

            //not a letter
            if (p[i] > 90 && p[i] < 96)\n
            {
                printf("%c", p[i]);
            }

            //not a letter
            if (p[i] > 122)\n
            {
                printf("%c", p[i]);
            }
        }

        printf("\n");
        return 0;
    }


}