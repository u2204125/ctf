#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>
#include <time.h>

char *find_little_endian(const char *word)
{
    size_t word_len = strlen(word);
    char *little_endian = (char *)malloc((2 * word_len + 1) * sizeof(char));

    for (size_t i = word_len; i-- > 0;)
    {
        snprintf(&little_endian[(word_len - 1 - i) * 2], 3, "%02X", (unsigned char)word[i]);
    }

    little_endian[2 * word_len] = '\0';
    return little_endian;
}

char *find_big_endian(const char *word)
{
    size_t length = strlen(word);
    char *big_endian = (char *)malloc((2 * length + 1) * sizeof(char));

    for (size_t i = 0; i < length; i++)
    {
        snprintf(&big_endian[i * 2], 3, "%02X", (unsigned char)word[i]);
    }

    big_endian[2 * length] = '\0';
    return big_endian;
}

char *generate_random_word()
{
    printf("Welcome to the Endian CTF!\n");
    printf("You need to find both the little endian and big endian representations of a word.\n");
    printf("If you get both correct, you will receive the flag.\n");
    srand(time(NULL));

    int word_length = 5;
    char *word = (char *)malloc((word_length + 1) * sizeof(char));

    for (int i = 0; i < word_length; i++)
    {
        word[i] = (rand() % 26) + 'a';
    }

    word[word_length] = '\0';
    return word;
}

int main()
{
    char user_endian[10];
    printf("Enter the word: ");
    fflush(stdout);
    scanf("%10s", user_endian);
    printf("The Little Endian is: %s\n", find_little_endian(user_endian));
    printf("The Big Endian is: %s\n", find_big_endian(user_endian));

    return 0;
}