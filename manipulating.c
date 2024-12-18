#define _CRT_SECURE_NO_WARNINGS
#define BUFFER_SIZE 80
#include "manipulating.h"

void manipulating() {
// Version 1 
	
	printf("*** Start of Concatenating String Demo ***\n");
	char	string1[BUFFER_SIZE];
	char	string2[BUFFER_SIZE];

	do
	{
		printf("Type the 1st string (q - to quit):\n");
		fgets(string1, BUFFER_SIZE, stdin);
		string1[strlen(string1) - 1] = '\0';

		if ((strcmp(string1, "q") != 0))
		{
			printf("Type the 2nd string:\n");
			fgets(string2, BUFFER_SIZE, stdin);
			string2[strlen(string2) - 1] = '\0';
			strcat(string1, string2);
			printf("Concatenated string is \'%s\'\n", string1);
		}
	} while (strcmp(string1, "q") != 0);
	printf("*** End of Concatenating Strings Demo ***\n\n");
	
/* Version 2 */
	
	printf("*** Start of Comparing Strings Demo ***\n");
	char compare1[BUFFER_SIZE];
	char compare2[BUFFER_SIZE];
	int result;

	do
	{
		printf("Type the 1st string to compare (q - to quit):\n");
		fgets(compare1, BUFFER_SIZE, stdin);
		compare1[strlen(compare1) - 1] = '\0';
		if (strcmp(compare1, "q") != 0)
		{
			printf("Type the 2nd string to compare:\n");
			fgets(compare2, BUFFER_SIZE, stdin);
			compare2[strlen(compare2) - 1] = '\0';
			result = strcmp(compare1, compare2);
			if (result < 0)
				printf("\'%s\' string is less than \'%s\'\n", compare1, compare2);
			else if (result == 0)
				printf("\'%s\' string is equal to \'%s\'\n", compare1, compare2);
			else
				printf("\'%s\' string is greater than \'%s\'\n", compare1, compare2);
		}
	} while (strcmp(compare1, "q") != 0); 
		printf("*** End of Comparing Strings Demo ***\n\n");

	
/* Version 3 */

		printf("*** Start of Searching Strings Demo ***\n");
		char hayStack[BUFFER_SIZE];
		char needle[BUFFER_SIZE];
		char* occurrence  = NULL;
		
		do
		{
			printf("Type the string (q - to quit):\n");
			fgets(hayStack, BUFFER_SIZE, stdin);
			hayStack[strlen(hayStack) - 1] = '\0';
			if (strcmp(hayStack, "q") != 0)
			{
				printf("Type the substring:\n");
				fgets(needle, BUFFER_SIZE, stdin);
				needle[strlen(needle) - 1] = '\0';
				occurrence = strstr(hayStack, needle);
				if (occurrence)
					printf("\'%s\' found at %d position\n", needle, (int)(occurrence - hayStack));
				else
					printf("Not found\n");
			}
		} while (strcmp(hayStack, "q") != 0);
		printf("*** End of Searching Strings Demo ***\n\n");

}