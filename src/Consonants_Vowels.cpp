/*
OVERVIEW: Given a string, Count the number of consonants and vowels and copy them to 'consonants' and 'vowels' respectively
Notes : Neglect Space and Other Symbols .Consider Capital Letters too

E.g.: Input: "aB c" , Output: consonants should contain 2 and vowels 1

INPUTS: A string and two int pointers

OUTPUT: Modify the consonants and vowels pointers accordingly with their counts (*consonants=?? ;*vowels=??)

INPUT2: Dont Forget they are pointers ;consonants and vowels are addresses of two variables .

Output: consonants should be ??,vowels should be ??

??:Count them :)

NOTES: Don't create new string , Dont return anything ,you have been given two pointers ,copy values into those .
*/

#include <stddef.h>
#include<stdlib.h>

void count_vowels_and_consonants(char *str,int *consonants, int *vowels){

	char *p;
	int i = 0, j = 0;
	p = str;
	if (str==NULL)
	{
		*consonants = 0;
		*vowels = 0;
		return;
	}
	while (*p != '\0')	
	{
		if (*p == 'a' || *p == 'A' || *p == 'e' || *p == 'E' || *p == 'i' || *p == 'I' || *p == 'o' || *p == 'O' || *p == 'u' || *p == 'U')
			j++;
		else if ((*p >= 65 && *p <= 91) || (*p >= 97 && *p <= 122))
			i++;
		p++;
	}
	*consonants = i;
	*vowels = j;
}