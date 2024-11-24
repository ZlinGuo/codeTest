#include "SeqList.h"

void Test1()
{
    SL sl;
    SLInit(&sl);

    //≤‚ ‘Œ≤≤Â
    SLPushBack(&sl, 1);
    SLPushBack(&sl, 2);
    SLPushBack(&sl, 3);
    SLPushBack(&sl, 4);
    //Print(&sl);
    ////Õ∑≤Â
    //SLPushFront(&sl, 5);
    //SLPushFront(&sl, 6);
    //SLPushFront(&sl, 7);

    ////Œ≤…æ
    //SLPopBack(&sl);
    //SLPopBack(&sl);
    //SLPopBack(&sl);

    ////Õ∑…æ
    //SLPopFront(&sl);

    //÷∏∂®Œª÷√≤Â»Î
    SLInsert(&sl, 2, 0);
    SLInsert(&sl, 1, 100);
    Print(&sl);

    SLErease(&sl, 1);
    Print(&sl);
}

int main()
{
    Test1();
    return 0;
}