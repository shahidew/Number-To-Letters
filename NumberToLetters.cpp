#include <iostream>
using namespace std;
int yektasad(int n);
int seraghamiha(int n);
int charraghami(int n);
int doraghamiham(int n);
int sadtahezar(int n);
int hezartamilion(int n);
int miliontamilyard(int n);
int milyarde(int n);
int main()
{
    int n;
    cin >> n;
    if(n >= 1 && n <= 10)
    {
      yektasad(n);
    }
    else if(n > 10 && n <100)
    {
       doraghamiham(n);
    }
    else if(n >= 100 && n < 1000)
    {
       sadtahezar(n);
    }
    else if(n >= 1000 && n < 1000000)
    {
        hezartamilion(n);
    }
    else if(n >= 1000000 && n < 1000000000)
    {
        miliontamilyard(n);
    }
    else if(n >= 1000000000 && n < 1000000000000)
    {
        milyarde(n);
    }
    return 0;
}

int yektasad(int n)
{
    switch (n){
    case 1:
        cout << "yek";
        break;
    case 2:
        cout <<"do";
        break;
    case 3:
        cout << "se";
        break;
    case 4:
        cout << "char";
        break;
    case 5:
        cout << "panj";
        break;
    case 6:
        cout << "shesh";
        break;
    case 7:
        cout << "haft";
        break;
    case 8:
        cout << "hasht";
        break;
    case 9:
        cout << "noh";
        break;
    case 10:
        cout << "dah";
        break;
    case 11:
        cout << "yazdah";
        break;
    case 12:
        cout << "davazdah";
        break;
    case 13:
        cout << "sizdah";
        break;
    case 14:
        cout << "chardah";
        break;
    case 15:
        cout << "panzdah";
        break;
    case 16:
        cout << "shanzdah";
        break;
    case 17:
        cout << "hefdah";
        break;
    case 18:
        cout << "hejdah";
        break;
    case 19:
        cout << "noozdah";
        break;
    case 20:
         cout << "bist";
         break;
    case 30:
         cout << "si";
         break;
    case 40:
         cout << "chehel";
         break;
    case 50:
         cout << "panjah";
         break;
    case 60:
         cout << "shast";
         break;
    case 70:
         cout << "haftad";
         break;
    case 80:
         cout << "hashtad";
         break;
    case 90:
         cout << "navad";
         break;
    }
    return n;
}
int seraghamiha(int n)
{
    switch(n)
    {
    case 100:
        cout << "sad";
        break;
    case 200:
        cout << "devist";
        break;
    case 300:
        cout << "sisad";
        break;
    case 400:
        cout << "charsad";
        break;
    case 500:
        cout << "pansad";
        break;
    case 600:
        cout << "sheshsad";
        break;
    case 700:
        cout << "haftsad";
        break;
    case 800:
        cout << "hashtsad";
        break;
    case 900:
        cout << "nohsad";
        break;
    }
    return n;
}
int doraghamiham(int n)
{
    int a, b;
        if(n % 10 == 0)
        {
         yektasad(n);
        }
        else if(n % 10 != 0)
        {
           if(n >= 11 && n <= 19)
           {
              yektasad(n);
           }
           else if(n >= 20 && n<= 99)
           {
              a = n % 10;
              b = n - a;
              yektasad(b);
              cout << " o ";
              yektasad(a);
           }
        }
   return n;
}
int sadtahezar(int n)
{
    int c, d, e;
    c = n / 100;
    d = c * 100;
    e = n - d;
    seraghamiha(d);
    if(e != 0)
    {
        if(e >= 1 && e < 10)
        {
            cout << " o ";
            yektasad(e);
        }
        else if(e >= 10 && e < 100)
        {
            cout << " o ";
            doraghamiham(e);
        }
    }
return n;
}
int hezartamilion(int n)
{
    int t,p,k,l;
      t = n / 1000;
      p = n - (1000 * t);
      if(t >= 1 && t <= 19)
      {
          yektasad(t);
          cout << " hezar";
          if(p != 0)
          {
              if(p >= 1 && p <= 10)
              {
                  cout << " o ";
                  yektasad(p);
              }
              else if(p >= 11 && p <= 99)
              {
                  cout << " o ";
                  doraghamiham(p);
              }
              else if(p >= 100 && p <1000)
              {
                  cout << " o ";
                  sadtahezar(p);
              }
          }
      }
      else if(t >= 20 && t <= 99)
      {
          doraghamiham(t);
          cout << " hezar";
          if(p != 0)
          {
              if(p >= 1 && p <= 10)
              {
                  cout << " o ";
                  yektasad(p);
              }
              else if(p >= 11 && p <= 99)
              {
                  cout << " o ";
                  doraghamiham(p);
              }
              else if(p >= 100 && p <1000)
              {
                  cout << " o ";
                  sadtahezar(p);
              }

          }
      }
      else if(t >= 100 && t <= 999)
      {
          sadtahezar(t);
          cout << " hezar";
          if(p != 0)
          {
              if(p >= 1 && p <= 10)
              {
                  cout << " o ";
                  yektasad(p);
              }
              else if(p >= 11 && p <= 99)
              {
                  doraghamiham(p);
              }
              else if(p >= 100 && p <1000)
              {
                  cout << " o ";
                  sadtahezar(p);
              }
          }
      }

return n;
}
int miliontamilyard(int n)
{
    int x,z;
    x = n / 1000000;
    z = n - (1000000 * x);
    if(x >= 1 && x <= 19)
    {
        yektasad(x);
        cout << " milioon";
        if(z != 0)
        {
            if(z >= 1 && z < 10)
              {
                  cout << " o ";
                  yektasad(z);
              }
              else if(z >= 10 && z <= 99)
              {
                  cout << " o ";
                  doraghamiham(z);
              }
              else if(z >= 100 && z <1000)
              {
                  cout << " o ";
                  sadtahezar(z);
              }
              else if(z >= 1000 && z < 1000000)
              {
                  cout << " o ";
                  hezartamilion(z);
              }
        }
    }
    else if(x >= 20 && x <= 99)
    {
        doraghamiham(x);
        cout << " milioon";
        if(z != 0)
        {
            if(z >= 1 && z <= 10)
              {
                  cout << " o ";
                  yektasad(z);
              }
              else if(z >= 11 && z <= 99)
              {
                  cout << " o ";
                  doraghamiham(z);
              }
              else if(z >= 100 && z <1000)
              {
                  cout << " o ";
                  sadtahezar(z);
              }
              else if(z >= 1000 && z < 1000000)
              {
                  cout << " o ";
                  hezartamilion(z);
              }
        }
    }
    else if(x >= 100 && x <= 999)
    {
          sadtahezar(x);
          cout << " milioon";
          if(z != 0)
          {
              if(z >= 1 && z <= 10)
              {
                  cout << " o ";
                  yektasad(z);
              }
              else if(z >= 11 && z <= 99)
              {
                  cout << " o ";
                  doraghamiham(z);
              }
              else if(z >= 100 && z <1000)
              {
                  cout << " o ";
                  sadtahezar(z);
              }
              else if(z >= 1000 && z < 1000000)
              {
                  cout << " o ";
                  hezartamilion(z);
              }
          }
    }
    return n;
}
int milyarde(int n)
{
    int i, s;
    i = n / 1000000000;
    s = n - (1000000000 * i);
    if(i >= 1 && i <= 10)
     {
         if(s == 0)
         {
          yektasad(i);
          cout << " milyard";
         }
        else if(s != 0)
        {
           yektasad(i);
           cout << " milyard o ";
             if(s >= 1 && s <= 10)
              {
                  yektasad(s);
              }
              else if(s > 10 && s < 20)
              {
                  yektasad(s);
              }
              else if(s >= 20 && s < 100)
              {
                  doraghamiham(s);
              }
              else if(s >= 100 && s <1000)
              {
                  sadtahezar(s);
              }
              else if(s >= 1000 && s < 1000000)
              {
                  hezartamilion(s);
              }
              else if(s >= 1000000 && s < 1000000000)
              {
                  miliontamilyard(s);
              }
        }
     }
    else if(i > 10 && i < 20)
     {
         if(s == 0)
         {
          yektasad(i);
          cout << " milyard";
         }
        else if(s != 0)
        {
           yektasad(i);
           cout << " milyard o ";
             if(s >= 1 && s <= 10)
              {
                  yektasad(s);
              }
              else if(s > 10 && s < 20)
              {
                  yektasad(s);
              }
              else if(s >= 20 && s < 100)
              {
                  doraghamiham(s);
              }
              else if(s >= 100 && s <1000)
              {
                  sadtahezar(s);
              }
              else if(s >= 1000 && s < 1000000)
              {
                  hezartamilion(s);
              }
              else if(s >= 1000000 && s < 1000000000)
              {
                  miliontamilyard(s);
              }
        }

     }
    else if(i >= 20 && i < 100)
     {
        if(s == 0)
         {
          doraghamiham(i);
          cout << " milyard";
         }
        else if(s != 0)
        {
           doraghamiham(i);
           cout << " milyard o ";
             if(s >= 1 && s <= 10)
              {
                  yektasad(s);
              }
              else if(s > 10 && s < 20)
              {
                  yektasad(s);
              }
              else if(s >= 20 && s < 100)
              {
                  doraghamiham(s);
              }
              else if(s >= 100 && s <1000)
              {
                  sadtahezar(s);
              }
              else if(s >= 1000 && s < 1000000)
              {
                  hezartamilion(s);
              }
              else if(s >= 1000000 && s < 1000000000)
              {
                  miliontamilyard(s);
              }
        }
     }
    else if(i >= 100 && i < 1000)
     {
        if(s == 0)
         {
          sadtahezar(i);
          cout << " milyard";
         }
        else if(s != 0)
        {
           sadtahezar(i);
           cout << " milyard o ";
             if(s >= 1 && s <= 10)
              {
                  yektasad(s);
              }
              else if(s > 10 && s < 20)
              {
                  yektasad(s);
              }
              else if(s >= 20 && s < 100)
              {
                  doraghamiham(s);
              }
              else if(s >= 100 && s <1000)
              {
                  sadtahezar(s);
              }
              else if(s >= 1000 && s < 1000000)
              {
                  hezartamilion(s);
              }
              else if(s >= 1000000 && s < 1000000000)
              {
                  miliontamilyard(s);
              }
        }

     }
    return n;
}

