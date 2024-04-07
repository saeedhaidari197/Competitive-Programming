#include<iostream>
#include <string>
using namespace std;

main(){
	string str;
	cin>>str;
	int size = (str.length()/2)+1;
	int arr[size] = {0};
	int index = 0;
	for(int i=0; i<str.length(); i++)
	{
		arr[index] = arr[index] * 10 + (str[i] - 48);
		index++;
		i++;
	}
	for(int i = 0; i<size; i++) {
      for(int j = 0; j<size-i-1; j++) {
         if(arr[j] > arr[j+1]) {
            int temp = arr[j];
   			arr[j] = arr[j+1];
  			arr[j+1] = temp;
         }
      }
   }
   for(int i = 0; i<size; i++)
   {
   	if(i == size-1)
   	{
   		cout<<arr[i];
	   }
	else cout<<arr[i]<<"+";
   }
}