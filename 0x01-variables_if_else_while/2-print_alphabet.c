#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 * Description: Prints the lowercase alphabet followed by a new line.
 * Return: Always 0 (Success)*/
int main(void)
{
  char letter = 'a';
  while (letter <= 'z')
  {
    putchar(letter);
    letter++;
  }
    putchar('\n');
    return (0);
}
