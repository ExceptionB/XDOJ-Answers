//��Ŀ��������д���򣬼��㽻������1-2/3+3/5-4/7+5/9-6/11+����ǰN��֮�͡�
//
//�����ʽ������һ��������
//
//�����ʽ����������������������λС��
//
//ʾ����
//���룺5
//�����0.917
int main(){
	int n;
	double index, plus=-1.0;
	double result=0.0;
	scanf("%d",&n);
	for(int i = 1; i <= n; i++){
		plus*=-1.0;
		index=plus*i/(i*2.0-1.0);
		//printf("%lf",index);
		result += index;
	}
	printf("%.3lf",result);
	return 0;
}
