#include"iostream"
#define SIZE 99

using namespace std;
int main()
{
	int a[SIZE][SIZE],n;
	cout<<"������n��ֵ: ";
	cin>>n;
	//1������ 
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=i;j++)
		{
			a[i][1]=1;
			a[j][j]=1;	
		}
	}
	//ʣ�µĵط�
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
	cout<<n<<"�η���ϵ���ֱ���: "<<endl;
	for(int i=1;i<=n;i++)
	{
		cout<<a[n][i]<<" ";
	}
	return 0;
}
