#include"iostream"
#include"fstream"
#include"cstdlib"
#include"string"

using namespace std;

int main()
{
	ifstream ifs;
	
	//��  
	ifs.open("test.txt",ios::in);
	char buf[1024];
	int f=1;
	int sum,row,num0,num1,num2;
	sum=row=num0=num1=num2=0;
	//��һ�� 
//	while(ifs >> buf)
//	{
//		cout<<buf<<endl;
//	 } 
	//�ڶ��� 
//	while(ifs.getline(buf,sizeof(buf)))
//	{
//		cout<<buf<<endl;
//	}
	//������ 
//	string sbuf;
//	while(getline(ifs,sbuf))
//	{
//		cout<<sbuf<<endl;
//	}
	 
	 //�ȶ������ݽ� �ַ�������
	while(!ifs.eof())
	{
	 	ifs>>buf[sum++];	
	} 
	cout<<"��ʾ�ļ���"<<buf<<endl;
	cout<<"����Ϊ: "<<sum<<endl;
	for(int i=0;i<sum;i++,f++)
	{
		if(f==80)
		{
			row++;
			f=1;
		}
		if(buf[i]>='a'&&buf[i]<='z')
		{
			num0++;
		}
		else if(buf[i]>='A'&&buf[i]<='Z')
		{
			num1++;
		}else{
			num2++;
		}
	}
	cout<<"Сд��ĸ: "<<num0<<endl;
	cout<<"��д��ĸ: "<<num1<<endl;
	cout<<"����: "<<num2<<endl;
	cout<<"����: "<<row+1<<endl;
	ifs.close();
	return 0;
}
