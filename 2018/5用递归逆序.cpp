#include"iostream"

using namespace std;

void Rev(int n)
{
	if(n!=0)
	{
		cout<<(n%10)<<" ";
	
		return Rev(n/10);
	}else{
		return;
	}
	
}

int main()
{
	int n;
	
	cout<<"请输入一个数字: ";
	cin>>n;
	Rev(n);
	return 0;
}
