#include <stdio.h>
void Print(char* q)
{
	printf("%s\n",q);
}
int main()
{
	void (*w)(char*) = Print;
	(*w)("����������������");//������������Ǵ����Զ��庯���Ĳ���
	return 0;
}