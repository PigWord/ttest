#include"iostream"

using namespace std;

int main()
{
	int n0,n1,n2,max;
	cout<<"输入3个数: ";
	cin>>n0>>n1>>n2;
	max=n0;
	if(max<=n1)
	{
		max=n1;
		if(max<=n2)
		{
			max=n2;
		}
	}
	cout<<"最大数是: "<<max<<endl;
	return 0;
}
