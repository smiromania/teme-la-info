#include <iostream>
using namespace std;
int main()
{
    
    int n,n_copy, v[10000],v_copy[101],i,poz1=0,poz2=0,j;
    cin >> n;
    n_copy = n;
    for (i = 1; i <= n; i++)
    {
        cin >> v[i]; 
        v_copy[i] = v[i];
    }
    //a
    int max = v[1],k=0; 
    for (i = 1; i <= n; i++)
    {
        if (max < v[i])
            max = v[i];
    }
    for (i = 1; i <= n; i++)
    {
        if (max == v[i])
            k++;
    }

    cout << "a) Maximul din vector este " << max << " si apare de " << k << " ori." << endl;
        

    //b
    int min = v[1]; 
    int pozm[100],l=0; 
    for (int i = 1; i <= n; i++)
    {
        if (min > v[i])
            min = v[i];

    }
    for (int i = 1; i <= n; i++)
    {
        if (min == v[i])
        {
            l = l + 1;
            pozm[l] = i;

        }
    }
    cout << "b) Minimul este " << min << " si apare pe pozitiile: ";
    for (i = 1; i <= l; i++)
        cout << pozm[i] << " ";
    cout << endl;
    

    //c
    for (int i = 1; i <= n; i++)
    {
        int sc = 0; 
        int copy = v[i];
        while (copy != 0)
        {
            sc = sc + copy % 10;
            copy = copy / 10;
            
        }
        int ok=1;
        for (j = 2; j <= sc / 2; j++)
            if (sc % j == 0)
                ok = 0; 
        if (v[i] == 1)
            ok = 0;
        if (ok == 1)
        {
            
            poz1 = i; 
            i = n + 1; 
        }

    }
    cout << "c) poz1=" << poz1 << endl;
    //d

   
    for (i = n; i >= 1; i--) 
    {
        int inv = 0;
        int copy = v[i]; 
        while (copy > 0)
        {
            inv = inv * 10 + copy % 10;
            copy = copy / 10;
            
        }
        if (inv == v[i])
        {
            poz2 = i;
            i = 0;
        }
    }
    cout << "d) poz2=" << poz2 << endl;
    //e
    
    for(i=poz1;i<=poz2-1;i++)
        for(j=i+1;j<=poz2;j++)
            if (v[i] > v[j])
            {
                int aux = v[i];
                v[i] = v[j];
                v[j] = aux;
            }
    
    cout << "e) Vectorul sortat crescator intre poz1 si poz2: ";
    for (i = 1; i <= n; i++)
        cout << v[i] << " ";
    cout << endl;

    
    for (i = 1; i <= n_copy; i++)
    {
        v[i]= v_copy[i];
    }
    n = n_copy;
   


    //f
    for (i = 1; i <= n; i++)
    {
        if (v[i] < 0)
        {
            for (j = i; j < n; j++)
            {
                v[j] = v[j + 1];

            }
            v[n] = 0;
            n = n - 1;
            i = i - 1;
            
        }
        

    }
    cout << "f) Elementele vectorului fara elemente negative: ";
    for (i = 1; i <= n; i++)
        cout << v[i] << " ";
    cout << endl;

    
    for (i = 1; i <= n_copy; i++)
    {
        v[i] = v_copy[i];
    }
    n = n_copy;
    

    //g 
    
    int ii;
    for (i = 1; i <= n; i++)
    {
        int kk = i+1;
        if (v[i] == max)
        {
            for (j = 2; j <= max / 2; j++)
                if (max % j == 0)
                {
                    for (ii = n; ii >= i + 1; ii--)
                        v[ii + 1] = v[ii];
                    v[kk] = j;
                    n++;
                    kk++;
                }
            
        }
    }
    cout << "g) Vectorul cu divizorii proprii crescatori pt fiecare element maxim: ";
    for (i = 1; i <= n; i++)
        cout << v[i] << " ";
    cout << endl;

    
    for (i = 1; i <= n_copy; i++)
    {
        v[i] = v_copy[i];
    }
    n = n_copy;
   

    //h 
    int nr = 0, nrmax = 0;
    for (i = 1; i <= n; i++)
    {
        if (v[i] % 2 == 0)
        {
            nr++;
            if (nr > nrmax)
            {
                nrmax = nr;
                j = i;
            }
        }
        else
            nr = 0;
    }
    
    cout << "h) Secventa cea mai lunga de numere pare este: ";
    for (i = j - nrmax + 1; i <= j; i++)
        cout << v[i]<<" ";
    cout << endl;

    for (i = 1; i <= n_copy; i++)
    {
        v[i] = v_copy[i];
    }
    n = n_copy;
   

    //i
    int w[101],s=0;
    for (int i = 1; i <= n; i++)
    {
        int cop = v[i],cif[10];
        if (cop < 0)
            cop = cop - (2 * cop);
        for (j = 0; j <= 9; j++)
            cif[j]=0; 

        while (cop != 0)
        {
            cif[cop % 10]++;
            cop = cop / 10;
        }
        int adv = 1;
        for (j = 0; j <= 9; j++)
            if (cif[j] > 1) 
                adv = 0;
        if (adv == 1)
        {
            s++;
            w[s] = v[i];
        }
    }
    cout << "i) Numerele formate din cifre distincte sunt: ";
    for (int i = 1; i <= s; i++)
        cout << w[i]<<" ";

    
}

