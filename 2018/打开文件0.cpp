#include"iostream"
#include"fstream"
#include"cstdlib"

const int SIZE= 60 ;


using namespace std;

int main()
{
	char filename[SIZE];
	
	ifstream inFile;		//����һ��ifstream����
	cout<<"��������: ";
	cin.getline(filename,SIZE);
	inFile.open(filename);			//���ļ�filename
	if(!inFile.is_open())		//��ʧ�� 
	{
		cout<<"���ܴ��ļ� "<<filename<<endl;
		cout<<"�������\n";
		exit(EXIT_FAILURE);
	 } 
	
	double value;
	double sum=0.0;
	int count=0;
	
	inFile>>value;		//�õ���һ��ֵ
	while(inFile.good()) //�ж�EOF���� 
	{
		++count;
		sum+=value;
		inFile>>value;
		
	}
	if(inFile.eof())
		cout<<"�����ļ���ȡ\n";
	else if(inFile.eof())
		cout<<"û�еõ���������\n";
	else
		cout<<"δ֪����!\n";
	if(count==0)
		cout<<"�����ݽ���\n";
	else{
		cout<<"����: "<<count<<endl;
		cout<<"����: "<<sum<<endl;
		cout<<"ƽ����: "<<sum/count<<endl;
	}
	inFile.close();
	
	return 0;
	
		
	return 0;
}
