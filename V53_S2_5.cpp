#include <iostream>
using namespace std;

struct nod {
    int info;
    nod* urm;
};

int main()
{
    int n, a, r,k=0;
    cin >> n;
    cin >> a;
    cin >> r;
    nod * prim,*p,*q;
    prim = new nod;
    prim->info = a;
    prim->urm = NULL;
    p = prim;
    for (int i = 2; i <= n; i++)
    {
        q = new nod;
        q->info = a + ((++k) * r);
        p->urm = q;
        q->urm = NULL;
        p = q;
    }
    p = prim;
    while (p != NULL)
    {
        cout << p->info << " ";
        p = p->urm;
    }
}
