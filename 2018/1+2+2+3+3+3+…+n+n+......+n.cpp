#include"iostream"

using namespace std;

int main()
{
	int sum=0;
	int n;
	cout<<"������n��";
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=i;j++)
		{
			sum+=i;
		}
	}
	
	cout<<"�����Ϊ��"<<sum<<endl;
	return 0;
}
