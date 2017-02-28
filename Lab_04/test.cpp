#include <iostream>
#include <iomanip>
using namespace std;

int C(int n, int k)
{
    int numerator = n; int num = n;
    int k1 = k; int k2 = k;
    int nk = n - k; int nk2 = n - k;

    for ( int i = 0; i < n-1; i++)
    {
        num = num - 1;
        numerator = numerator * num;
    }

    if (numerator == 0)
    {
        numerator = 1;
    }   
    cout << "This is n! "<<numerator <<endl;

    for ( int i = 0; i < k-1; i++)
    {
        k2 = k2 - 1;
        k1 = k1 * k2;
    }

    if (k1 == 0)
    {
        k1 = 1;
    }
    cout << "This is k! " << k1 <<endl;

    for ( int i = 0; i < (n-k)-1; i++)
    {
        nk2 = nk2 - 1;
        nk = nk * nk2;
    }

    if (nk == 0)
    {
        nk = 1;
    }
    cout << "This is (n-k)! "<<nk <<endl;

}

int C2(int n, int k)  
{
    int numerator = n; int num = n;
    for (int i = 0; i < k - 1; i++)
    {
        num = num - 1;
        numerator = numerator * num; 
    }

    int k1 = k; int k2 = k;
    for ( int i = 0; i < k-1; i++) 
    {
        k2 = k2 - 1;
        k1 = k1 * k2;
    }

    if (k1 == 0)
    {
        k1 = 1;
    }
    cout << "This is k! " << k1 <<endl;

    int answer = numerator/k1;
    cout << answer <<endl;

}

int C3(int n, int k)
{
    if (n-k < k)  // If n-k is less than k then k can be n-k according to the theorem. It is easier to compute the answer as well. 
    {
        k = n-k;
    }

    int numerator = n; int num = n;
    for (int i = 0; i < k - 1; i++)
    {
        num = num - 1;
        numerator = numerator * num; 
    }

    int k1 = k; int k2 = k;
    for ( int i = 0; i < k-1; i++)
    {
        k2 = k2 - 1;
        k1 = k1 * k2;
    }

    if (k1 == 0)
    {
        k1 = 1;
    }
    cout << "This is k! " << k1 <<endl;

    int answer = numerator/k1;
    cout << answer <<endl;

}

double C4(int n, int k)
{
    double sum = 1; 
    double divide = 0;  // (n-k)/1  ... (n-k)/2... (n-k)/3...

    for (int i = 1; i <= k; i++)
    {
        divide = (n-k)/(double(i));
        cout << "double " << divide <<endl;
        sum = sum * (1+divide);
        cout << sum <<endl;
    }

    cout << sum <<endl;

}

int main()
{
    C(-1,6);
    cout << "________________________________________"<<endl;
    C2(7,4);
    cout << "________________________________________"<<endl;
    C3(7,4);
    cout << "________________________________________"<<endl;
    C4(7,4);    
    return 0;
}