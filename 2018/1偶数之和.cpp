#include"iostream"

using namespace std;



int main()
{
	int a,b,sum;
	sum=0;
	cout<<"������a��b��";
	cin>>a>>b;
	if(a%2==0)
	{
		for(int i=a+2;i<b;i=i+2)
		{
			sum+=i;
		}
	}else{
		for(int i=a+1;i<b;i=i+2)
		{
			sum+=i;
		}
	}
	
	cout<<a<<"��"<<b<<"֮���ż����Ϊ��"<<sum<<endl;
	
	
	return 0;
}
