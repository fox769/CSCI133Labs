In the function

>	
	int c(int n, int k){
		for(int i=1; i<n; i++) //with this for loop it repeats, but w/o it, at the end it outputs 6295680 for some reason

		{
			cout << endl << n * factorial (n-1) << endl << endl; //outputs n!
			cout << k * factorial (k-1) << endl << endl; //outputs k!
			cout << (n-k)* factorial (n-k-1) << endl; //outputs (n-k)!
		}
	}
>