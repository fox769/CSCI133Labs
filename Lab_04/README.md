In the function:

>	
	int c(int n, int k){
		for(int i=1; i<n; i++) 
		{
			cout << endl << n * factorial (n-1) << endl << endl; //outputs n!
			cout << k * factorial (k-1) << endl << endl; //outputs k!
			cout << (n-k)* factorial (n-k-1) << endl; //outputs (n-k)!
		}
	}
>

With this for loop it repeats, but without it, at the end it outputs 6295680 for some reason.

I assume there is an overflow error but I don't know why.
