// #include <bits/stdc++.h>

// using namespace std;

// typedef struct student
// {
//     char num[15];
//     float Sub[3];
//     float Sum;
//     int Rank;
// }STU;

// void input_data(STU s[])//输入原始数据函数。
// {
//     for(int i = 0; i < 10; i++)
//     {
//         scanf("%s", s[i].num);
//         cin >> s[i].Sub[0];
//         cin >> s[i].Sub[1];
//         cin >> s[i].Sub[2];
//     }
// }

// void calculate(STU s[])//计算总分函数。
// {
//     for(int i = 0; i < 10; i++)
//     {
//         s[i].Sum = s[i].Sub[0] + s[i].Sub[1] + s[i].Sub[2]; 
//     }
// }

// void sort_total(STU s[])//根据总分降序排序函数。
// {
//     int i,n;
//     STU temp;
//     for(i=0;i<10;i++)
//     {
//         for(n=1;n<10-i;n++)
//         {
//             if(s[n].Sum>s[n-1].Sum)
//             {
//                 temp=s[n];
//                 s[n]=s[n-1];
//                 s[n-1]=temp;
//             }
//         }
//     }
// }

// void add_rank(STU s[])//增加名次列函数。
// {
//     for(int i = 0; i < 10; i++)
//     {
//         s[i].Rank = i + 1;
//     }
// }

// void print_data(STU s[])//输出二维表格样式成绩的函数。
// {
//     printf("%-15s%-15s%-15s%-15s%-15s%-15s\n", "Number:", "Chinese: ", "Mathematics:  ", "English:   ", "Total score: ", "Ranking");
//     for(int i = 0; i < 10; i++)
//     {
//         //printf("%-15s%-15.1f%-15.1f%-15.1f%-15.1f%-15d\n",s[i].num,s[i].Sub[0],s[i].Sub[1],s[i].Sub[2],s[i].Sum,s[i].Rank);
//         cout << std::left << setw(15) << s[i].num << setw(15) << s[i].Sub[0] << setw(15) << s[i].Sub[1] << setw(15) << s[i].Sub[2] << setw(15) << s[i].Sum << setw(15) << s[i].Rank << endl;
//     }
// }

// int main()
// {
//     STU stu[10];
//     input_data(stu);
//     calculate(stu);
//     sort_total(stu);
//     add_rank(stu);
//     print_data(stu);
//     return 0;
// }



// #include <bits/stdc++.h>

// using namespace std;


// int main()
// {
//     int n = 0;
//     cin >> n;
//     while(n--)
//     {
//         int t = 0;
//         cin >> t;
//         int h,m,s;
//         h = t / 3600;
//         t -= h * 3600;
//         m = t / 60;
//         t -= m * 60;
//         s = t;
//         printf("%02d:%02d:%02d\n",h,m,s);
//     }
//     return 0; 
// }




// #include <bits/stdc++.h>

// using namespace std;

// typedef struct student
// {
//     int num;
//     char name[10];
//     int sum;
// } STU;

// int main()
// {
//     STU s[5];
//     for(int i = 0; i < 5; i++)
//     {
//         scanf("%d",&s[i].num);
//         scanf("%s",&s[i].name);
//         scanf("%d",&s[i].sum);
//     }
    
//     for(int i = 0; i < 5; i++)
//     {
//         STU temp;
//         for(int n = 1; n < 5 - i; n++)
//         {
//             if(s[n].sum > s[n - 1].sum)
//             {
//                 temp = s[n];
//                 s[n] = s[n - 1];
//                 s[n - 1] = temp;
//             }
//         }
//     }
//     for(int i = 0; i < 5; i++)
//     {
//         printf("%15d%15s%15d\n",s[i].num, s[i].name, s[i].sum);
//     }
//     return 0;
// }




// #include <iostream>
// using namespace std;
 
// class Student
// {
// public:
// 	Student(string n,double s): num(n),score(s) {}
// 	string num;
// 	double score;
// };
 
// int main()
// {
// 	void max(Student * );
// 	Student s[5] =
// 	{
// 		Student ("1",60),
// 		Student ("2",70),
// 		Student ("3",80),
// 		Student ("4",90),
// 		Student ("5",100)
// 	};
 
// 	max(s);
 
// 	return 0;
// }
 
 
// void max(Student *p)
// {
// 	Student* t;
// 	Student* c;
// 	double max;
// 	for (t = p , c = t, max = t->score; t < (p + 5); ++t)
// 	{
// 		if (t->score > max)
// 		{
// 			max = t->score;
// 			c = t;
// 		}
// 	}
 
// 	cout << "成绩最高者为： " << c->num << endl;
 
 
// }
 
// #include<iostream>
// #include<string>
 
// using namespace std;
 
// int num;
// double score;
 
// class Student
// {
// public:
//   int s_num;
//   double s_score;
  
//   Student()
//   {
//   	s_num=0;
//   	s_score=0;
//   }
// public: 
//   void setStudent()
//   {
//   	cin>>num>>score;
//     s_num=num;
//     s_score=score;
//   }
// };
 
 
// int main()
// {
// 	int i=0;
// 	double j=0;
// 	cout<<"Please enter the number and score for each of the 5 students:";
// 	cout<<endl;
// 	Student s1;
// 	s1.setStudent();
// 	Student s2;
// 	s2.setStudent();
// 	if(s1.s_score>=s2.s_score)
// 	{
// 	i=s1.s_num;j=s1.s_score;}
// 	else i=s2.s_num;j=s2.s_score;
	
// 	Student s3;
// 	s3.setStudent();
// 	if(s3.s_score>=j)
// 	{
// 	i=s3.s_num;j=s3.s_score;}
	
// 	Student s4;
// 	s4.setStudent();
// 	if(s4.s_score>=j)
// 	{
// 	i=s4.s_num;j=s4.s_score;}
// 	//cout<<j<<endl;
	
// 	Student s5;
// 	s5.setStudent();
// 	if(s5.s_score>=j)
// 	{
// 	i=s5.s_num;j=s5.s_score;}
	
//     cout<<i<<" "<<j;
	
// 	return 0;
// }



// #include <iostream>
// using namespace std;
// struct 
//      {int year;
//      int month;
//      int day;
// 	 }date;
//  int main()
//     {int i,days;
//      int day_tab[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
//      cout<<"input year,month,day:" << endl;
//      cin>>date.year>>date.month>>date.day;
//      days=0;
//      for (i=1;i<date.month;i++)
//        days+=day_tab[i];
//      days+=date.day;
//      if ((date.year%4==0 && date.year%100!=0 || date.year%400==0) && date.month>=3)
//        days+=1;
//      cout<<date.month<<"/"<<date.day<<" is the "<<days
// 	   <<"th day in "<<date.year<<"."<<endl;
//     return 0;
// }



#include <iostream>
#define NULL 0
using namespace std;
struct student
{long num;
 float score;
 student *next;
};

int main()
{
    student a[10],*creat,*p;
    int i=0;
    while(1)
    {
        cout<<"Please enter the student's number and score:"<<endl;
        cin>>a[i].num>>a[i].score;
        if(a[i].num==0)
        {break;}
        i++;
    }
    creat=&a[0];
    if(a[1].num!=0)
    a[0].next=&a[1];
    else
    a[0].next=NULL;
    if(a[2].num!=0)
    a[1].next=&a[2];
    else
    a[1].next=NULL;
    if(a[3].num!=0)
    a[2].next=&a[3];
    else
    a[2].next=NULL;
    if(a[4].num!=0)
    a[3].next=&a[4];
    else
    a[3].next=NULL;
    p=creat;
}
