#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	char input[20] = {0};

	system("shutdown -s -t 20");
	
again:
	printf("一分钟后关机，除非输入我是猪");
	scanf("%s", input);
	if (strcmp(input, "我是猪")== 0);
	{
		system("shutdown-a");
	}
	if (strcmp(input, "我是猪") !=0);
	{
		goto again;
	}

	
	
	return 0;
}


//猜数字
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
//	//1生成随机数
//	int ret = 0;
//	int guess = 0;
//	//时间戳；
//	ret = rand()%100+1;
//	//2猜数字
//	while (1)
//	{
//		printf("请猜数字：");
//		scanf("%d", &guess);
//		if (guess > ret)
//		{
//			printf("猜大了\n");
//		}
//		else if (guess < ret)
//		{
//			printf("猜小了\n");
//		}
//		else
//		{
//			printf("猜对了");
//			break;
//		}
//	}
//}
//int main()//猜数字游戏；
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));
//	do
//	{
//		menu();
//		printf("请选择>：");
//		scanf("%d",&input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("退出游戏");
//			break;
//		default:
//			printf("输入有错");
//			break;
//		}
//	} while (input);
//	return 0;
//}


//int main()//打印乘法口诀表
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
//	int max = arr[0];//如果赋值为0，是不对的，要把max放在arr里面
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

//int main()//求1/1-1/2+1/3-......
//{
//	int i = 0;
//	double sum = 0;
//	int flag = 1;
//	for (i = 1; i <= 100; i++)
//	{
//		sum += flag * 1.0 / i;//1.0才能打印小数，不然会打印错误的东西
//		flag = -flag;
//	}
//	printf("%lf\n",sum);//%lf-打印浮点数
//	return 0;
//}


//int main()//计算1-100内包含了9的数字
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

//int main()//忘了啥了
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
//		//判断i是不是素数；
//		//判断方法：试除法。
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

//int main()//打印1000到2000的任年
//{
//	int year = 0;
//	int a = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		//1：被4整除并且不能被100整除
//		//2：能被400整除
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

//int main()//计算两个数的最大公约数
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

//int main()//打印（1-100）3的倍数。
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

