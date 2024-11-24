#include <bits/stdc++.h>
using namespace std;

int n, m;
int a, b, x, y;
struct pos
{
    int startx;
    int starty;
    int steps;
};
int arr[101][101];
int vis[101][101] = {0};
int movex[4] = {0,1,0,-1};
int movey[4] = {1,0,-1,0};
int flag = 0;

queue<pos> r;
void BFS();

int main()
{
    cin >> n >> m;
    cin >> a >> b >> x >> y;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }
    
    BFS();

    if(flag == 0)
    {
        cout << "NOFOUND!";
    }

    return 0;
}

void BFS()
{
    pos start;
    start.startx = a;
    start.starty = b;
    start.steps  = 0;
    r.push(start);
    vis[a][b] = 1;

    while(!r.empty())
    {
        int z = r.front().startx, l = r.front().starty;
        if(z == x && l == y)
        {
            flag = 1;
            cout << r.front().steps;
            return;
        }

        for(int k = 0; k <= 3; k++)
        {
            int tx = z + movex[k];
            int ty = l + movey[k];
            if(arr[tx][ty] == 0 && vis[tx][ty] == 0)
            {
                //入队
                pos temp;
                temp.startx = tx;
                temp.starty = ty;
                temp.steps = r.front().steps + 1;
                r.push(temp);
                vis[tx][ty] = 1;
            }
            else
            {
                tx = z, ty = l;
            }
        }
        r.pop();
    }

}