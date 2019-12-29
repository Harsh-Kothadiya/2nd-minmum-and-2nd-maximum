//2nd min and 2nd max use only one loop with array size 2 or 3 or 4
#include<iostream>
using namespace std;

int main()
{
	int size;
	cout<<"\n\n\t ENTER ARRAY SIZE : ";
	cin>>size;
	cout<<"\n\n\t ENTER "<<size<<" ,ELEMENT\n\n";
	int a[size],i,tmp,tmp1;
	for(i=0;i<size;i++)
	{
		cin>>a[i];
	}
	
	tmp=a[size-1];
	for(i=0;i<size;i++)
	{  
		if(a[i]>tmp)
		{
			tmp1=a[i];
			a[i]=tmp;
			a[size-1]=tmp1;
			tmp=tmp1;
			
		}
		else if(a[i]<tmp)
		{
			if(i==size-1)
				break;
			else if(a[i]>a[size-2])
			{
				tmp1=a[i];
				a[i]=a[size-2];
				a[size-2]=tmp1;
			}
		}
		if(a[i]>a[i+1])
		{
			tmp1=a[i];
			a[i]=a[i+1];
			a[i+1]=tmp1;
		}
		if(a[i]>a[size-2])
		{
			tmp1=a[i];
			a[i]=a[size-2];
			a[size-2]=tmp1;
		}
	}
	cout<<"\n\n\----------OUTPUT------------\n\n";
	cout<<"2nd MINMUM VALUE OF ARRAY : ";
	if(size==2)
	   cout<<a[0]<<endl<<endl;
	else
	  cout<<a[1]<<endl<<endl;
	  
    cout<<"\n\n\n2nd MAXIMUM VALUE OF ARRAY : ";
	if(size==2)
	   cout<<a[1]<<endl<<endl;
	if(size==3)
	  cout<<a[size-2]<<endl<<endl;
	if(size==4)
	  cout<<a[size-1]<<endl<<endl;

	return 0;
}
