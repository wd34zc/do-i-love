/*ͳ��������
ԭ����ͨ������������֮��Ŀո��ƶϳ�������
      ʵ�ʾ��Ǽ��ո��������
����������һ�����������������ķ������ַ����ǿո�
      ������һ�������������ո�ǰ�Ƿ����ַ�
	  ����ѭ��
����*/
#include<stdio.h>
#include<ctype.h>
#define stop '|'
int main()
{
    printf("���ã�\n��ӭ���������������ʣ�ͳ��ϵͳ��\n���롰|������ͳ�ơ�\n���������ģ�\n");
	char a;//���ڼ���ַ�
	int b=0;//��������
	int c=0;//�������� 
	while ((a=getchar())!=stop)
	{
		if(!isspace(a))
		b=1;
		
		if(isspace(a) && b==1)
		{
			b=0;
			c++; 
		}
	 }
	 printf("�ܵ������������������ţ���%d",c);
	 return 0;
}  