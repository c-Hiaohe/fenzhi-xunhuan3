#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	char input[20] = {0};

	system("shutdown -s -t 20");
	
again:
	printf("һ���Ӻ�ػ�����������������");
	scanf("%s", input);
	if (strcmp(input, "������")== 0);
	{
		system("shutdown-a");
	}
	if (strcmp(input, "������") !=0);
	{
		goto again;
	}

	
	
	return 0;
}


//������
//#include<stdio.h>
//#include<stdlib.h>
//#include<time.h>
//void menu()
//{
//	printf("**********************************\n");
//	printf("***** 1 play    0 exikt       ****\n");
//	printf("**********************************\n");
//}
//void game()
//{
//	//1���������
//	int ret = 0;
//	int guess = 0;
//	//ʱ�����
//	ret = rand()%100+1;
//	//2������
//	while (1)
//	{
//		printf("������֣�");
//		scanf("%d", &guess);
//		if (guess > ret)
//		{
//			printf("�´���\n");
//		}
//		else if (guess < ret)
//		{
//			printf("��С��\n");
//		}
//		else
//		{
//			printf("�¶���");
//			break;
//		}
//	}
//}
//int main()//��������Ϸ��
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));
//	do
//	{
//		menu();
//		printf("��ѡ��>��");
//		scanf("%d",&input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("�˳���Ϸ");
//			break;
//		default:
//			printf("�����д�");
//			break;
//		}
//	} while (input);
//	return 0;
//}


//int main()//��ӡ�˷��ھ���
//{
//	int i = 0;
//	for (i = 1; i <= 9; i++)
//	{
//		int j = 1;
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%-3d", i, j, i * j);
//		}
//		printf("\n");
//	}
//;
//	return 0; 
//}


//int main()
//{
//	int arr[] = { -1,-2,-3,-4,-5,-6,-7,-8,-9,-10 };
//	int max = arr[0];//�����ֵΪ0���ǲ��Եģ�Ҫ��max����arr����
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i <= sz; i++)
//	{
//		if (arr[i] > max)
//		{
//			max = arr[i];
//		}
//	}
//	printf("%d\n", max);
//	return 0;
//}

//int main()//��1/1-1/2+1/3-......
//{
//	int i = 0;
//	double sum = 0;
//	int flag = 1;
//	for (i = 1; i <= 100; i++)
//	{
//		sum += flag * 1.0 / i;//1.0���ܴ�ӡС������Ȼ���ӡ����Ķ���
//		flag = -flag;
//	}
//	printf("%lf\n",sum);//%lf-��ӡ������
//	return 0;
//}


//int main()//����1-100�ڰ�����9������
//{
//	int i = 0;
//	int a = 0;
//	for (i = 1; i < 100; i++)
//	{
//		if (i % 10 == 9)
//		{
//			printf(" %d", i);
//			a++;
//		}
//		if (i / 10 == 9)
//		{
//			a++;
//			printf(" %d", i);
//		}
//	} 
//	;
//	printf(" %d\n",a);
//	return 0;
//}

//int main()//����ɶ��
//{
//	char arr[200] = {0};
//	
//	int i = arr[b];
//	int j = arr[];
//	int k = 0;
//	int a = 0;
//	for ()
//	{
//		if (k = i * j)
//		{
//			a++;
//			if (a == 1)
//				printf("  %d", k);
//		}
//		
//	}
//
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int a = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		//�ж�i�ǲ���������
//		//�жϷ������Գ�����
//		int j = 0;
//		for (j = 2; j<i; j++)
//		{
//			if (i % j == 0)
//				break;
//		}
//		if (j == i)
//		{
//			a++;
//			printf(" %d",i);
//		
//		}
//	}
//	printf("%d\n", a);
//	return 0;
//}

//int main()//��ӡ1000��2000������
//{
//	int year = 0;
//	int a = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		//1����4�������Ҳ��ܱ�100����
//		//2���ܱ�400����
//		if (year % 4 == 0 && year % 100 != 0)
//		{
//			printf("%d", year);
//			a++;
//		}
//		else if (year % 400 == 0)
//		{
//			
//			printf("%d\n%d\n", year,a);
//			a++;
//			
//		}
//	}
//	return 0;
//}

//int main()//���������������Լ��
//
//{
//	int m = 25;
//	int n = 30;
//	scanf("%d""%d", &m, &n);
//	while (m%n)
//	{
//		int r = m % n;
//		m = n;
//		n = r;
//	}
//	printf("%d\n", n);
//	return 0;
//}

//int main()//��ӡ��1-100��3�ı�����
//
//{
//	int i = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i%3 == 0)
//			printf("%d", i);
//	}
//	return 0;
//}

