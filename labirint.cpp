#include <iostream>
#include <fstream>
using namespace std;
ifstream f("labirint.txt");
struct punct {
    int x, y;
};
punct d[] = { {0,0},{-1,0},{0,1},{1,0},{0,-1} }, t[100];
int n, m, st[100], l[200][200];
void afisare(int k)
{
    cout << k << " pasi: " ;
    for (int i = 0; i <= k; i++)
        cout << "(" << t[i].x << ";" << t[i].y << "); ";
    cout << endl;
    cout << endl;
}
int solutie(int k)
{
    if (t[k].x == 1 || t[k].x == n || t[k].y == 1 || t[k].y == m)
        return 1;
    return 0;
}
int valid(int k)
{
    
    int a, b;
    a = t[k - 1].x + d[st[k]].x;
    b = t[k - 1].y + d[st[k]].y;
    if (l[a][b] == 1)
        return 0;
    for (int i = 0; i < k; i++)
        if (t[i].x == a && t[i].y == b)
            return 0;
    t[k].x = a;
    t[k].y = b;
    
    return 1;
}
void back()
{
    int k = 1;
    st[k] = 0;
    while (k > 0)
        if (st[k] < 4)
        {
            
            st[k]++;
            
            if (valid(k))
                if (solutie(k))
                    afisare(k);
                else st[++k] = 0;
        }
        else k--;
}
int main()
{
    f >> n >> m;
    f >> t[0].x >> t[0].y;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
            f >> l[i][j];
    back();
}

