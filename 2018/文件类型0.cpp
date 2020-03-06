#include"iostream"
#include"fstream"

int main()
{
	using namespace std;
	
	char automobile[50];
	int year;
	double a_price;
	double d_price;
	
	ofstream outFile;			//创建一个输出对象
	outFile.open("carinfo.txt");		//关联文件
	 
	 cout<<"请输入automobile:"<<endl;
	 cin.getline(automobile,50);
	 cout<<"输入year:"<<endl;
	 cin>>year;
	 cout<<"输入a_price:"<<endl;
	 cin>>a_price;
	 d_price=0.913 * a_price;
	 //展示输出信息
	 cout<< fixed;
	 cout.precision(2);
	 cout.setf(ios_base::showpoint);
	 cout<<"automobile: "<<automobile<<endl;
	 cout<<"year: "<<year<<endl;
	 cout<<"a_price: "<<a_price<<endl;
	 cout<<"d_price: "<<d_price<<endl;
	 
	 //使用outFile做相同的事情
	 outFile<<fixed;
	 outFile.precision(2);
	 outFile.setf(ios_base::showpoint);
	 outFile<<"automobile: "<<automobile<<endl;
	 outFile<<"year: "<<year<<endl;
	 outFile<<"a_price: "<<a_price<<endl;
	 outFile<<"d_price: "<<d_price<<endl; 
	 
	 outFile.close();
	 
	 return 0;
	 
}
