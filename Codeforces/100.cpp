#include<iostream>
#include<vector>
#include<string>
using namespace std;

main()
{
	/* Algorithm
	
	int num = 22;
	while (true)
	{
		cout<<num<<" ";
		if(num == 1)
			break;
		if((num%2) != 0)
		{
			num = (num*3) +1;
		}
		else{
			num = num/2;
		}
	}
	*/
	string line;
	vector<string> input;
	while(getline(cin, line)){
		if(line.empty)
			break;
			
		input.push_back(line);
	}
	int range[2];
	for (int i=0; i<2; i++)
	{
		cin>>range[i];
	}
	int max = 0;
	for( int i = range[0]; i<= range[1]; i++)
	{
		int data = i;
		int cycle = 0;
		
		while(true)
		{
			cycle++;
			if( cycle > max)
				max = cycle;
			if(data == 1)
				break;
			if( data%2 == 1)
				data = data*3 +1;
			else 
				data = data/2;
				
		}
		
	}
	cout<<max;
}
