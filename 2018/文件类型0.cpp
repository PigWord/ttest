#include"iostream"
#include"fstream"

int main()
{
	using namespace std;
	
	char automobile[50];
	int year;
	double a_price;
	double d_price;
	
	ofstream outFile;			//����һ���������
	outFile.open("carinfo.txt");		//�����ļ�
	 
	 cout<<"������automobile:"<<endl;
	 cin.getline(automobile,50);
	 cout<<"����year:"<<endl;
	 cin>>year;
	 cout<<"����a_price:"<<endl;
	 cin>>a_price;
	 d_price=0.913 * a_price;
	 //չʾ�����Ϣ
	 cout<< fixed;
	 cout.precision(2);
	 cout.setf(ios_base::showpoint);
	 cout<<"automobile: "<<automobile<<endl;
	 cout<<"year: "<<year<<endl;
	 cout<<"a_price: "<<a_price<<endl;
	 cout<<"d_price: "<<d_price<<endl;
	 
	 //ʹ��outFile����ͬ������
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
