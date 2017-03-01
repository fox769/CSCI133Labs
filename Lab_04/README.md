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

When calling the funcation with:

>
	cout << endl << c(5,4)

It works, but with this loop it repeats, but without it, at the end it outputs 6295680 for some reason.

I assume there is an overflow error but I don't know why.


