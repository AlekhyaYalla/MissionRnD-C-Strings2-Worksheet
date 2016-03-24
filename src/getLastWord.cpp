/*

Problem : Return the Last word in a string

Input : I will do this without using String Library
Output : Library

Note:Dont modify original string Neglect Spaces at the right end and at left end if required .
->Create a new string and return it , Use dynamic memory allocation .
*/
#include <stdlib.h>
#include<stddef.h>

char * get_last_word(char * str){

	int i = 0;
	char *p, *q, *temp, *a;
	p = str;
	q = p;
	if (str == NULL)
		return NULL;	
	while (1)
	{
		q = p;
		while (*p != ' ' && *p != '\0')
			p++;
		if (*p == '\0')
			break;
		p++;

	}

	a = (char*)calloc(p - q, sizeof(char));
	while (*q != '\0')
		a[i++] = *(q++);
	a[i] = '\0';
	return a;
	/*while (*p != '\0')
	{
		while (*p == ' '&&*p != '\0')
			p++;
		if (*p != '\0'&&*(p - 1) == ' ')
			q = p;
		if (*p == '\0')
			break;
		p++;
	}
	while (*q != ' '&&*q != '\0')
	{
		a[i] = *q;
		i++;
		realloc(a, i + 1);
		q++;
	}*/
	//a[i] = '\0';
	//return a;
}
