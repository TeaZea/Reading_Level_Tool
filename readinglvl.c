// #include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>
#include <math.h>

int main(void)
{

    // TODO: redo without cs50 get_string, or download the .h

    // string text;
    int letters = 0;
    int words = 1;
    int sentences = 0;

    // user input//
    // text = get_string("Type in your text: ");

    // count letters//
    for (int i = 0; i < strlen(text); i++)
    {
        if ((text[i] >= 'a' && text[i] <= 'z') || (text[i] >= 'A' && text[i] <= 'Z'))
            letters++;
    }
    // printf("total letters is %d\n", letters);//

    // count words//
    for (int i = 0; i < strlen(text); i++)
    {
        if (text[i] == ' ')
            words++;
    }
    // printf("total words is %d\n", words);//

    // count sentences//
    for (int i = 0; i < strlen(text); i++)
    {
        if (text[i] == '.' || text[i] == '!' || text[i] == '?')
            sentences++;
    }
    // printf("total sentences are: %d\n", sentences);//

    // equation//
    float calc = (0.0588 * letters / words * 100) - (0.296 * sentences / words * 100) - 15.8;
    int index = round(calc);

    // if statement to print reading level//
    if (index < 1)
    {
        printf("Before Grade 1\n");
        return 0;
    }
    else if (index >= 16)
    {
        printf("Grade 16+\n");
        return 0;
    }
    else
    {
        printf("Grade %d\n", index);
    }
}