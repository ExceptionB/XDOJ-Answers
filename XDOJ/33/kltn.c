//����:
//�ݹ�����
//
//���
//������ݹ�
//
//�������ͣ�
//����Ƭ��
//
//ʱ������:
//2S
//�ڴ�����	
//10000Kb
//
//��������	
//һ������A��������
//A(1)=1��
//A(2)=1/(1+A(1))��
//A(3)=1/(1+A(2))��
//����
//A(n)=1/(1+A(n-1))��
//����һ������function�����������еĵڵ�n���ֵ�������������£�
//double function(int n);
//
//����˵����	
//����Ϊ1��������n��n<=10��
//
//���˵��	
//�����������A��n���ֵ�����С�������6λ��Ч���֣����ಿ���������롣
//
//��������	
//5
//
//�������	
//0.625000
//
//��ʾ	
//���и�����ʹ��˫���ȸ��������㣡����
#include<stdio.h> 

double calculation(double res, int times, int goal){
	//printf("%lf",res);
	if(times == goal)
		return res;
	calculation(1.0/(res+1.0),times+1,goal);
}
	

double function(int n){
	double res = calculation(1.0,1,n);
	return res;
}

int main(){
	int n;
	scanf("%d",&n);
	printf("%.6lf",function(n));
	return 0;
}
