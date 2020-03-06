#include"iostream"

using namespace std;



int main()
{
	int a,b,sum;
	sum=0;
	cout<<"请输入a，b：";
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
	
	cout<<a<<"与"<<b<<"之间的偶数和为："<<sum<<endl;
	
	
	return 0;
}
