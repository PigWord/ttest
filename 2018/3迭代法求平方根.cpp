#include"iostream"
#include"cmath"

using namespace std;

int main()
{
	double x1,x2,a;
	cout<<"������a: ";
	cin>>a;
	x2=1.0;
	int flag=1;
	while(flag)
	{
		x1=x2;
		x2=(x1+a/x1)/2.0;
		if(fabs(x1-x2)<0.00001)
		{
			cout<<"ƽ����Ϊ��"<<x2<<endl;
			break;
		}
	}
	return 0;
}
