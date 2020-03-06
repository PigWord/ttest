#include"iostream"
#include"fstream"
#include"cstdlib"

const int SIZE= 60 ;


using namespace std;

int main()
{
	char filename[SIZE];
	
	ifstream inFile;		//创建一个ifstream对象
	cout<<"输入数据: ";
	cin.getline(filename,SIZE);
	inFile.open(filename);			//打开文件filename
	if(!inFile.is_open())		//打开失败 
	{
		cout<<"不能打开文件 "<<filename<<endl;
		cout<<"程序结束\n";
		exit(EXIT_FAILURE);
	 } 
	
	double value;
	double sum=0.0;
	int count=0;
	
	inFile>>value;		//得到第一个值
	while(inFile.good()) //判断EOF结束 
	{
		++count;
		sum+=value;
		inFile>>value;
		
	}
	if(inFile.eof())
		cout<<"结束文件获取\n";
	else if(inFile.eof())
		cout<<"没有得到最后的数据\n";
	else
		cout<<"未知错误!\n";
	if(count==0)
		cout<<"无数据进程\n";
	else{
		cout<<"读的: "<<count<<endl;
		cout<<"总数: "<<sum<<endl;
		cout<<"平均数: "<<sum/count<<endl;
	}
	inFile.close();
	
	return 0;
	
		
	return 0;
}
