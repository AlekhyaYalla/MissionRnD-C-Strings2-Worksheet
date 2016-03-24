/*

Problem : Return the Count of how many times the word occurred in given string in two ways
Way1: Not using Recursion
Way2:Using Recursion [Optional]

Input : "Hello HelloAgain HelloAGAINAGAIN commonItsHelloagain","Hello"
Output : 4

Note: Dont modify original str or word,Just return count ,Spaces can also be part of words like "ab cd" in "ab cd ab cd" returns 2
*/

#include <stdlib.h>
int check(char *, char *, int );


int count_word_in_str_way_1(char *str, char *word){

	int n, i = 0, c = 0;
	char *p;
	p = str;
	if (str == NULL || word == NULL)
		return 0;
	while (*p != '\0')
	{
		n = 0;
		while (*p == word[i] && word[i] != '\0')
		{
			n++;
			p++;
			i++;
		}
		if (n == i&&word[i] == '\0')
		{
			p--;
			c++;
		}
		if (i == 0 || i == 1)
			p++;
		i = 0;
	}
	return c;

}

int count_word_int_str_way_2_recursion(char *str, char *word){
	
	int c = 0;
	char *p, *w;
	p = str;
	w = word;
	while (*p != '\0')
	{
		c = check(p, word, c);
		p++;
	}
	return c;
}

int check(char *p, char *w, int c)
{
	if (*w == '\0')
	{
		c++;
		return c;
	}
	else if (*p == *w)
	{
		p++;
		w++;
		c = check(p, w, c);
	}
	else
		return c;
}

