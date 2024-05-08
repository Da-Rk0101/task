#include<iostream>
using namespace std;
int arr_avr(int arr[6])
{
	int sum = 0;
	for(int i=0; i<=5; i++)
	{
		sum = sum + arr[i];
	}
	return sum/6;
}
void display(int arr[] , int x)
{
	for(int i=0; i<x; i++)
	cout<<arr[i] << "  ";
}
int max( int arr[6])
{
	int x = arr[0];
	for(int i=0; i<=5; i++)
	{
		if(arr[i] > x)
		x = arr[i];
	}
	return x;
}
int min( int arr[6])
{
	int x = arr[0];
	for(int i=0; i<=5; i++)
	{
		if(arr[i] < x)
		x = arr[i];
	}
	return x;
}
int delet( int z, int arr[],int x , int flag)
{
	
	int fla = 0 ;
	flag = 0;
	for(int i=0; i<x; i++)
	{
		if( arr[i] == z)
		{
			for(int j=i+1; j<=5; j++)
			arr[j-1] = arr[j];
			x--;
			fla = 1;
			flag = 1;
		}
	}
	if(fla == 0)
	{
		cout<<" not found "<<z<<endl;
		flag = 0;
	}
	
	for(int i=0; i<x; i++)
	{
		cout<<arr[i]<<" ";
	}
	return flag;
}
int main()
{
	int arr[6],z,y,x;
	int k=6 , flag=0;
	cout<< "enter array \n";
	for(int i=0; i<=5; i++)
	cin>>arr[i];
	while(1)
	{
		cout<<" average : 1 \n display : 2 \n max : 3 \n min : 4 \n delete : 5 \n ";
	    cin>>x;
		switch(x)
	{
		case 1:
			cout<<arr_avr( arr);
			break;
		case 2:
			
			display(arr , k);
			break;
		case 3:
			cout<<max(arr);
			break;
		case 4:
			cout<<min(arr);
			break;
		case 5:
			cout<<" enter num to delete : ";
			cin>>z;
			if(delet(z,arr,k,flag))
			flag++;
			else
			flag = 0;
			k=k-flag;
			break;
		default:
			cout<<" choose correct number ";
	}
	cout<<" \n enter 1 to continue \n enter any key to exit \n";
	cin>>y;
	if( y != 1)
	break;
	
	}
	
	
	
}
