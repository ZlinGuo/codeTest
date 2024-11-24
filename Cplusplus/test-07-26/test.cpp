#include "Queue.h"

int main()
{
    Queue q;
    QueueInit(&q);
    QueuePush(&q, 1);
    QueuePush(&q, 2);
    QueuePush(&q, 3);
    QueuePush(&q, 4);

    while (!QueueEmpty(&q))
    {
        cout << QueueFront(&q) << " ";
        QueuePop(&q);
    }

    QueueDestroy(&q);
    return 0;
}