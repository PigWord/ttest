#include"iostream"
#define SIZE 99

using namespace std;
int main()
{
	int a[SIZE][SIZE],n;
	cout<<"请输入n的值: ";
	cin>>n;
	//1都附上 
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=i;j++)
		{
			a[i][1]=1;
			a[j][j]=1;	
		}
	}
	//剩下的地方
	for(int i=2;i<=n;i++)
	{
		for(int j=2;j<=i;j++)
		{
			a[i][j]=a[i-1][j-1]+a[i-1][j];
		}
	} 
	
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=i;j++)
		{
			cout<<a[i][j]<<" ";	
		}
		cout<<endl;
	}
	cout<<n<<"次方的系数分别是: "<<endl;
	for(int i=1;i<=n;i++)
	{
		cout<<a[n][i]<<" ";
	}
	return 0;
}
