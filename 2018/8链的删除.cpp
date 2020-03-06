#include"iostream"
#include"cmalloc"

using namespace std;

//链式结构
typedef struct link{
	int data;
	struct link * next;
}*linked; 
//尾插法建立单链表
linked TailInsert(linked l)
{
	int x;
	l=(linked)malloc(sizeof(struct link));
	linked s,r=l;
	cout<<"输入值: ";
	cin>>x;
	while(x!=99)	//输入x的值为99退出 
	{
		s=(linked)malloc(sizeof(struct link));
		s->data=x;
		r->next=s;
		r=s;
		cout<<"输入值：";
		cin>>x;
	}
	r->next=NULL;
	return l;
}


int main()
{
	
	return 0;
}
