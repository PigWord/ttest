#include"iostream"
#include"cmalloc"

using namespace std;

//��ʽ�ṹ
typedef struct link{
	int data;
	struct link * next;
}*linked; 
//β�巨����������
linked TailInsert(linked l)
{
	int x;
	l=(linked)malloc(sizeof(struct link));
	linked s,r=l;
	cout<<"����ֵ: ";
	cin>>x;
	while(x!=99)	//����x��ֵΪ99�˳� 
	{
		s=(linked)malloc(sizeof(struct link));
		s->data=x;
		r->next=s;
		r=s;
		cout<<"����ֵ��";
		cin>>x;
	}
	r->next=NULL;
	return l;
}


int main()
{
	
	return 0;
}
