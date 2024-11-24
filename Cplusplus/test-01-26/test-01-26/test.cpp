#define  _CRT_SECURE_NO_WARNINGS 1 
#include<stdio.h>
#include<string.h>
#include <stdlib.h> 
#include <assert.h> 
#include <ctype.h> 

//int Myatoi(char* str)
//{
//	assert(str != NULL);
//
//	while (isspace(*str))
//	{
//		str++;
//	}
//	int flg = 1;
//	if (*str == '+')
//	{
//		flg = 1;
//		str++;
//	}
//	else if (*str == '-')
//	{
//		flg = -1;
//		str++;
//	} 
//	long long ret = 0;
//	while (*str != '\0')
//	{
//		if (isdigit(*str))
//		{
//			ret = ret * 10 + (*str - '0') * flg;
//			if (ret > INT_MAX || ret < INT_MIN)
//			{
//				return 0;
//			}
//		}
//		else
//		{
//			return ret;
//		}
//		str++;
//	}
//	return ret;
//}
//
//int main()
//{
//	char a[] = { " 123456" };
//	int ret = Myatoi(a);
//	printf("%d\n", ret);
//	return 0;
//}

//
// struct  {
//	int a;
//	char b;
//	short c;
//	short d;
//}AA_t;
//
// struct A
// {
//	 int a;
//	 short b;
//	 int c;
//	 char d;
// };
//
// struct B
// {
//	 int a;
//	 short b;
//	 char c;
//	 int d;
// };
//int main()
//{
//	int s = sizeof( struct A );
//	int sz = sizeof(struct B);
//
//	printf("%d\n", s);
//	printf("%d\n", sz);
//
//	return 0;
//}


//#pragma pack(4)/*编译选项，表示4字节对齐 平台：VS2013。语言：C语言*/
////假设long 是4个字节
//int main(int argc, char* argv[])
//{
//    struct tagTest1
//    {
//        short a;
//        char d;
//        long b;
//        long c;
//    };
//    struct tagTest2
//    {
//        long b;
//        short c;
//        char d;
//        long a;
//    };
//    struct tagTest3
//    {
//        short c;
//        long b;
//        char d;
//        long a;
//    };
//    struct tagTest1 stT1;
//    struct tagTest2 stT2;
//    struct tagTest3 stT3;
//
//    printf("%d %d %d", sizeof(stT1), sizeof(stT2), sizeof(stT3));
//    return 0;
//}
//#pragma pack()


//#define MAX_SIZE 2+3
//struct _Record_Struct
//{
//	unsigned char Env_Alarm_ID : 4;
//	unsigned char Para1 : 2;
//	unsigned char state;
//	unsigned char avail : 1;
//}*Env_Alarm_Record;
//struct _Record_Struct* pointer = (struct _Record_Struct*)malloc(sizeof(struct _Record_Struct) *MAX_SIZE);
//int main()
//{
//	printf("%d\n", sizeof(pointer));
//}
////当A=2， B=3时，pointer分配（ ）个字节的空间。


int main()
{
    unsigned char puc[4];
    struct tagPIM
    {
        unsigned char ucPim1;
        unsigned char ucData0 : 1;
        unsigned char ucData1 : 2;
        unsigned char ucData2 : 3;
    }*pstPimData;
    pstPimData = (struct tagPIM*)puc;
    memset(puc, 0, 4);
    pstPimData->ucPim1 = 2;
    pstPimData->ucData0 = 3;
    pstPimData->ucData1 = 4;
    pstPimData->ucData2 = 5;
    printf("%02x %02x %02x %02x\n", puc[0], puc[1], puc[2], puc[3]);
    return 0;
} 