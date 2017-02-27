#include <iostream>

using std::cout;
using std::endl;

/*notes
//double d = 3.3;

//double e = 3.7;

//int j = int(d);

//int j = int(e);
*/

int factorial(int);

int factorial(int n) 
{
	int num;
    if (n > 1) 
    {
        num = n*factorial(n-1);
    }
    else 
    {
        return 1;
    }
}

int c(int n, int k){
	for(int i=1; i<n; i++)
	{
		cout << endl << n * factorial (n-1) << endl << endl;
		cout << k * factorial (k-1) << endl << endl;
		cout << (n-k)* factorial (n-k-1) << endl;
	}
}

//int c2(int n, int k);

//double c4(int n, int k);

int main(){
	cout << endl << c(5,4) << endl << endl;

	return 0;
}