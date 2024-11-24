#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main()
{
    int a;
    srand((unsigned)time(nullptr));
    a = rand() % 10 * 2 + 1;
    switch(a)
    {
        case 1:
            cout << "1.	How do you keep in contact with your parents and friends? How do you like these ways of communication?" << endl;
            break;
        case 2:
            cout << "2.	How much do you know about emojis? And what is the role of emojis in digital communication?" << endl;
            break;
        case 3:
            cout << "3.	How does social media change the way we communicate? Does social media bring us together or push us apart?" << endl;
            break;
        case 4:
            cout << "4.	What is the main idea of Unit 1 “Why emojis are a no-brainer for digital communication” in the textbook?  Please summarize and retell the text" << endl;
            break;
        case 5:
            cout << "5.	Do you know someone who has leadership qualities? Why do you think so? Give specific examples." << endl;
            break;
        case 6:
            cout << "6.	What qualities do leaders have in common? And which one do you think is the most important leadership quality? Explain your reasons." << endl;
            break;
        case 7:
            cout << "7.	Do you think college should develop students 的 leadership skills? Why or why not? List some leadership qualities that you possess now. Use examples to support your points." << endl;
            break;
        case 8:
            cout << "8.	What is the main idea of Unit 2 “How I started my business while studying at university” in the textbook?  Please summarize and retell the text." << endl;
            break;
        case 9:
            cout << "9.	What do you think is the most creative product or service in the past decade? Why do you think so?" << endl;
            break;
        case 10:
            cout << "10.	What is the main idea of Unit 3 “How I became a leader” in the textbook? Please summarize and retell the text." << endl;
            break;
        case 11:
            cout << "11.	What creative Chinese enterprises do you know? Why do you think they are creative?" << endl;
            break;
        case 12:
            cout << "12.	Do you agree that if you want to be a leader, how successful you are will depend greatly on the culture where you grew up? Give your opinions on this." << endl;
            break;
        case 13:
            cout << "13.	What is the main idea of Unit 4 “The miracle of SolarCity” in the textbook? Please summarize and retell the text." << endl;
            break;
        case 14:
            cout << "14.	What urban challenges do you know? How can these problems be tackled?" << endl;
            break;
        case 15:
            cout << "15.	What is the main problem that your hometown is facing with? Propose possible solutions to it." << endl;
            break;
        case 16:
            cout << "16.	What is the main idea of Unit 5 “How we move:Sustainable transport around the world” in the textbook?  Please summarize and retell the text." << endl;
            break;
        case 17:
            cout << "17.	What do you think is the relationship between art and science? Who do you think makes more contributions to society, an artist or a scientist?" << endl;
            break;
        case 18:
            cout << "18.	How would the development of science contribute to the presentation of the works of art in modern times?" << endl;
            break;
        case 19:
            cout << "19.	What is the main idea of Unit 6  How the intersection of art and science made history  in the textbook?  Please summarize and retell the text." << endl;
            break;
        case 20:
            cout << "According to a survey, an increasing number of young people choose to start a business instead of finding a job. What do you think are the reasons? How about you ?" << endl;
            break;
    }
    
}