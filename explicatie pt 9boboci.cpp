#include <iostream>
using namespace std;
int main()
{
    
    int n,n_copy, v[10000],v_copy[101],i,poz1=0,poz2=0,j;
    cin >> n;
    n_copy = n;
    for (i = 1; i <= n; i++)
    {
        cin >> v[i]; //citim toate cele n elemente din vector
        v_copy[i] = v[i];
    }
    //a
    int max = v[1],k=0; //initializam maximul cu primul element din vector, nu cu -9999999999999999 ca bulangii
    for (i = 1; i <= n; i++)
    {
        if (max < v[i])// verificam daca maximul declarat este mai mic decat elementul la care am ajuns
            max = v[i];
    }
    for (i = 1; i <= n; i++)
    {
        if (max == v[i])// verificam daca elementul v[i] este egal cu elementul maxim
            k++;
    }

    cout << "a) Maximul din vector este " << max << " si apare de " << k << " ori." << endl;
        

    //b
    int min = v[1]; //initializam minimul cu primul element din vector sau cu 99999999999999999999999999999999999 daca suntem bulangii
    int pozm[100],l=0; //luam un vector pentru pozitile minimului si o variabila pentru a umbla in pozitiile acestui nou vector
    for (int i = 1; i <= n; i++)
    {
        if (min > v[i])//cautam minimu' in vector
            min = v[i];

    }
    for (int i = 1; i <= n; i++)
    {
        if (min == v[i])
        {
            l = l + 1;
            pozm[l] = i;//memoram pozitiile in care se gaseste minimul, iar pentru a afisa aceste pozitii se va lua un for de la 1 la l

        }
    }
    cout << "b) Minimul este " << min << " si apare pe pozitiile: ";
    for (i = 1; i <= l; i++)
        cout << pozm[i] << " ";
    cout << endl;
    

    //c
    for (int i = 1; i <= n; i++)
    {
        int sc = 0; //o varibaila pentru suma cifrelor
        int copy = v[i];//copiem numarul intr-o variabila pentru a-l pastra
        while (copy != 0)
        {
            sc = sc + copy % 10;
            copy = copy / 10;
            //suma cifrelor
        }
        int ok=1;
        for (j = 2; j <= sc / 2; j++)
            if (sc % j == 0)
                ok = 0; //algoritmu' de numar prim
        if (v[i] == 1)
            ok = 0;
        if (ok == 1)
        {
            
            poz1 = i; //aceasta este pozitia primului element cu suma cifrelor numar prim
            i = n + 1; //pentru a opri executarea for-ului cand gasim o solutie
        }

    }
    cout << "c) poz1=" << poz1 << endl;
    //d

    //luam un for de la ultimul element la primul
    for (i = n; i >= 1; i--) 
    {
        int inv = 0;
        int copy = v[i]; //idem ca la punctul anterior
        while (copy > 0)
        {
            inv = inv * 10 + copy % 10;
            copy = copy / 10;
            //algoritmu' la invers
        }
        if (inv == v[i])
        {
            poz2 = i;
            i = 0;//oprim for-ul din nou ca am gasit ce ne trebuie
        }
    }
    cout << "d) poz2=" << poz2 << endl;
    //e
    //sortam crescator de la poz1 la poz2
    for(i=poz1;i<=poz2-1;i++)
        for(j=i+1;j<=poz2;j++)
            if (v[i] > v[j])
            {
                int aux = v[i];
                v[i] = v[j];
                v[j] = aux;
            }
    //asta e algoritmul de sortare crescatoare folosit intre poz1 si poz2
    cout << "e) Vectorul sortat crescator intre poz1 si poz2: ";
    for (i = 1; i <= n; i++)
        cout << v[i] << " ";
    cout << endl;

    //refac vectorul la cel initial
    //AICI INTREBATI PE JOHN RESETAM VECTORUL LA FIECARE SUBPUNCT IN CARE ESTE MODIFICAT CA NU STIU SIGUR DACA E BINE
    for (i = 1; i <= n_copy; i++)
    {
        v[i]= v_copy[i];
    }
    n = n_copy;
    //DACA NU TREBUIE RESETAT VECTORUL LA ELEMENTELE INITIALE VEDETI CA AM PUS ASTA DE MAI MULTE ORI PRIN PROGRAM
    //____________________________________________________________________



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
            //PAC e negativ l-am belit si mutam toate elementele cu o pozitie inainte sa ne prefacem ca nu a fost niciodata acolo
        }
        

    }
    cout << "f) Elementele vectorului fara elemente negative: ";
    for (i = 1; i <= n; i++)
        cout << v[i] << " ";
    cout << endl;

    //.
    for (i = 1; i <= n_copy; i++)
    {
        v[i] = v_copy[i];
    }
    n = n_copy;
    //.

    //g 
    //la asta e matematica si mutare de vectori pentru a elibera un spatiu
        int ii;
    for (i = 1; i <= n; i++)
    {
        int kk = i+1; //locul unde va fi pus divizorul
        if (v[i] == max)
        {
            for (j = 2; j <= max / 2; j++)
                if (max % j == 0)
                { 
                    for (ii = n; ii >= kk; ii--)
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

    //.
    for (i = 1; i <= n_copy; i++)
    {
        v[i] = v_copy[i];
    }
    n = n_copy;
    //.

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
    //o functie pentru a determina secventa cea mai lunga de numere pare (se afla intre j-nrmax+1 si j)
    cout << "h) Secventa cea mai lunga de numere pare este: ";
    for (i = j - nrmax + 1; i <= j; i++)
        cout << v[i]<<" ";
    cout << endl;

    //.
    for (i = 1; i <= n_copy; i++)
    {
        v[i] = v_copy[i];
    }
    n = n_copy;
    //.

    //i
    int w[101],s=0;
    for (int i = 1; i <= n; i++)
    {
        int cop = v[i],cif[10];
        if (cop < 0)
            cop = cop - (2 * cop); //daca nr e negativ ii facem modulul
        for (j = 0; j <= 9; j++)
            cif[j]=0; //vector pentru a verifica prezenta fiecarei cifre in parte

        while (cop != 0)
        {
            cif[cop % 10]++;
            cop = cop / 10;
        }
        int adv = 1;
        for (j = 0; j <= 9; j++)
            if (cif[j] > 1) //daca cifra apare mai mult de o singura data nu e numar cu cifre distincte
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

    //INTREBATI CE AM ZIS IO ACOLO CU SIRUL DA IO CRED CA ASA CUM AM PUS ACUMA IE BINE CA ALTFEL N-ARE SENS
}

