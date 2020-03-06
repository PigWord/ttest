#include"iostream"
#include"fstream"
#include"cstdlib"
#include"string"

using namespace std;

int main()
{
	ifstream ifs;
	
	//打开  
	ifs.open("test.txt",ios::in);
	char buf[1024];
	int f=1;
	int sum,row,num0,num1,num2;
	sum=row=num0=num1=num2=0;
	//第一种 
//	while(ifs >> buf)
//	{
//		cout<<buf<<endl;
//	 } 
	//第二种 
//	while(ifs.getline(buf,sizeof(buf)))
//	{
//		cout<<buf<<endl;
//	}
	//第三种 
//	string sbuf;
//	while(getline(ifs,sbuf))
//	{
//		cout<<sbuf<<endl;
//	}
	 
	 //先读入数据进 字符数组中
	while(!ifs.eof())
	{
	 	ifs>>buf[sum++];	
	} 
	cout<<"显示文件："<<buf<<endl;
	cout<<"总数为: "<<sum<<endl;
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
	cout<<"小写字母: "<<num0<<endl;
	cout<<"大写字母: "<<num1<<endl;
	cout<<"数字: "<<num2<<endl;
	cout<<"行数: "<<row+1<<endl;
	ifs.close();
	return 0;
}
