//����	
//Ѱ���������
//
//���	
//���̿���
//
//ʱ������	
//1S
//
//�ڴ�����	
//1000Kb
//
//��������	
//�Ӽ��������ĸ��������ҳ����е����ֵ�����������
//
//����˵��	
//����4���������ÿո�ָ�
//
//���˵��	
//���ֵ����һ������
//
//��������	
//25 99 -46 0
//
//�������	
//99
//	ʹ����qsort 
#include<stdio.h>
#include<stdlib.h>

int cmpfunc (const void * a, const void * b)
{
   return ( *(int*)a - *(int*)b );
}

int map[6];
int main(){
	scanf("%d%d%d%d",&map[0],&map[1],&map[2],&map[3]);
	qsort(map, 4, sizeof(int), cmpfunc);
	printf("%d",map[3]);
	return 0;
}
