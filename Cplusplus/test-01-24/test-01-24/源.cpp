#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <assert.h>
//int my_strlen(const char* str)
//{
//	int count = 0;
//	assert(str);
//	while (*str)
//	{
//		count++;
//		str++;
//	}
//	return count;
//}

//char* my_strcpy(char* str1, char* str2)
//{
//	char* test = str1;
//	assert(str1);
//	assert(str2);
//	while (*str2 != '\0')
//	{
//		*str1 = *str2;
//		str1++;
//		str2++;
//	}
//	*str1 = *str2;
//	return test;
//}

//int my_strcmp(const char* str1, const char* str2)
//{
//	int ret = 0;
//	assert(str1 != NULL);
//	assert(str2 != NULL);
//	while (*str1 == *str2)
//	{
//		if (*str1 == '\0')
//			return 0;
//		str1++;
//		str2++;
//	}
//	return *str1 - *str2;
//}
//
//char* my_strcat(char* dest, const char* src)
//{
//	char* ret = dest;
//	assert(dest != NULL);
//	assert(src != NULL);
//	while (*dest)
//	{
//		dest++;
//	}
//	while ((*dest++ = *src++))
//	{
//		;
//	}
//	return ret;
//}
//
//char* my_strstr(const char* str1, const char* str2)
//{
//	char* cp = (char*)str1;
//	char* s1, * s2;
//	if (!*str2)
//		return((char*)str1);
//	while (*cp)
//	{
//		s1 = cp;
//		s2 = (char*)str2;
//		while (*s1 && *s2 && !(*s1 - *s2))
//			s1++, s2++;
//		if (!*s2)
//			return(cp);
//		cp++;
//	}
//	return(NULL);
//}
//
//int  main()
//{
//	char str1[200] = {"I love programing"};
//	char str2[] = { "programing" };
//	my_strstr(str1, str2);
//	printf("%s\n", str1);
//	return 0;
//}

//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	char str[] = "This is a simple string";
//	char* pch;
//	pch = strstr(str, "simple");
//	strncpy(pch, "qwerty", 6);
//	printf("%s\n", str);
//	return 0;
//}
char* strstr(const char* str1, const char* str2)
{
	char* cp = (char*)str1;
	char* s1, * s2;
	if (!*str2)
		return((char*)str1);
	while (*cp)
	{
		s1 = cp;
		s2 = (char*)str2;
		while (*s1 && *s2 && !(*s1 - *s2))
			s1++, s2++;
		if (!*s2)
			return(cp);
		cp++;
	}
	return(NULL);
}