//��Ŀ�������������һ�������������ĺͣ�ֱ������0ʱ������
//
//�����ʽ����һ�У�����һ���������Կո�ָ�
//
//�����ʽ�����һ������
//
//ʾ����
//���룺1 2 3 4 5 0 6 7 
//�����9
#include<stdio.h>

int main(){
	int result=0,num;
	while(1){
		scanf("%d",&num);
		if(num==0)
			break;
		if(num%2==1)
			result+=num;
	}
	printf("%d",result);
	return 0;
}
