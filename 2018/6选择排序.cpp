#include"iostream"
#define SIZE 99
using namespace std;



//选择排序
void Selectsort(int a[],int n)
{
	int min;
	for(int i=0;i<n-1;i++)
	{
		min=i;
		for(int j=i+1;j<n;j++)
		{
			if(a[j]<a[min])
				min=j;
		}
		if(min!=i)
		{
			int temp=a[i];
			a[i]=a[min];
			a[min]=temp;
			//swap(a[i],a[min]);
		}
	}
}

 
int main()
{
	int a[SIZE],n;
	cout<<"输入n：";
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	//打印出来 
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
	cout<<endl;
	Selectsort(a,n);
	
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
	
		
	return 0;
}
