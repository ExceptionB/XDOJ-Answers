//����	
//���ڼ���
//
//���
//���̿���
//
//ʱ������	
//1S
//
//�ڴ�����	
//256Kb
//
//��������	
//����һ�����y��һ������d������һ��ĵ�d���Ǽ��¼��գ�   
//ע�������2����29�죬��������������֮һ�������꣺   
//1�� �����4�������������Ҳ���100����������
//2�� �����400��������
//
//����˵��	
//���������������y��d��y��ʾ��ݣ������1900��2018֮�䣨����1900��2018���� d��ʾ��һ��ĵڼ��죬d��1��365֮�䡣
//
//���˵��	
//��һ����������������ֱ��ʾ�𰸵��·ݺ����ڡ�
//
//��������	
//2015 80
//
//�������	
//3  21
//
//	
#include<stdio.h>

int month = 1;
int year,days;

int compare(int monthday){
	if(days<=monthday)
		return;
	else{
		days -= monthday;
		month++;
		return;
	}
}

int main(){
	scanf("%d %d",&year,&days);
	//дһ���������ô�������һ�� 
	if((year%4==0 && year%100 != 0) || year % 400 == 0){//���� 
		compare(31);
		compare(29);
		compare(31);
		compare(30);
		compare(31);
		compare(30);
		compare(31);
		compare(31);
		compare(30);
		compare(31);
		compare(30);
		compare(31);
		printf("%d %d",month,days);
	}
	else{
		compare(31);
		compare(28);
		compare(31);
		compare(30);
		compare(31);
		compare(30);
		compare(31);
		compare(31);
		compare(30);
		compare(31);
		compare(30);
		compare(31);
		printf("%d %d",month,days);
	}
	return 0;
}
