#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void printf_exam()
{
	int a = 1;
	int b = 2;
	int c = 3;
	printf("%d + %d = %d\n", a, b, c);
	printf("%.2i\n", 2008 % 100);
	printf("%.3d\n", 8);
	printf("%.3i\n", 8);
	printf("%3d\n", 8);
	printf("%3i\n", 8);
}

void scanf_exam()
{
	printf("������Ӣ�ߺ�Ӣ��");
	double foot;
	double inch;
	scanf_s("%lf %lf", &foot, &inch);
	//float height = (foot + inch / 12) * 0.3048;
	printf("�����%lf��\n", ((foot + inch / 12) * 0.3048));
}

void time_gap()
{
	int hour1, minute1;
	int hour2, minute2;
	printf("�������1��ʱ��\n");
	scanf_s("%d %d", &hour1, &minute1);
	printf("�������2��ʱ��\n");
	scanf_s("%d %d", &hour2, &minute2);
	if (hour1 < hour2)
	{
		if (minute1 < minute2)
		{
			printf("����ʱ�����%dʱ%d��", hour2 - hour1, minute2 - minute1);
		}
		else
		{
			printf("����ʱ�����%dʱ%d��", hour2 - hour1 - 1, minute2 + 60 - minute1);
		}
	}
	else
	{
		if (minute1 < minute2)
		{
			printf("����ʱ�����%dʱ%d��", hour1 - hour2 - 1, minute1 + 60 - minute2);
		}
		else
		{
			printf("����ʱ�����%dʱ%d��", hour1 - hour2, minute1 - minute2);
		}
	}
}

void time_gap2()
{ // �ж�ʱ���
	int hour1, minute1;
	int hour2, minute2;
	printf("�������1��ʱ��\n");
	scanf_s("%d %d", &hour1, &minute1);
	printf("�������2��ʱ��\n");
	scanf_s("%d %d", &hour2, &minute2);
	int gap = (hour2 - hour1) * 60 + minute2 - minute1;
	if (gap > 0)
	{
		printf("����ʱ�����%dʱ%d��", gap / 60, gap % 60);
	}
	else
	{
		printf("����ʱ�����%dʱ%d��", -gap / 60, -gap % 60);
	}
}

void integer_num()
{ // �ж�һ��������λ��
	printf("������һ����");
	int num;
	scanf_s("%d", &num);
	if (num < 0)
	{ // �������ֵΪ��ֵʱ��
		printf("������\n");
		num = -num;
	}
	int n = 0;
	do
	{
		n++;
		num /= 10;
	} while (num > 0);
	printf("�������������%dλ\n", n);
}

void guess_the_num()
{
	srand((unsigned int)time(0));
	//    printf("");
	int real_num = rand() % 100 + 1;
	int input = -1;
	int count = 0;
	printf("i have set up a number,please input a number:");
	do
	{
		scanf_s("%d", &input);
		count++;
		if (input < real_num)
		{
			printf("less than the real number!\n");
			//continue;
		}
		else if (input > real_num)
		{
			printf("bigger than the real number!\n");
			//continue;
		}
		else
		{
			break;
		}
		printf("try again:");
	} while (input != real_num);
	printf("right hit!\n");
}

void how_to_use_rand()
{
	time_t t;
	srand((unsigned int)time(&t));
	int random;
	for (int x = 0; x < 10; ++x)
	{
		random = rand() % 100 + 1;
		printf("\n%d", random);
	}
	//    The C library function int rand(void) returns
	//    a pseudo-random number in the range of 0 to RAND_MAX.
	//
	//    RAND_MAX is a constant whose default value may vary
	//    between implementations but it is granted to be at least 32767.
}

void get_the_average()
{
	//    printf("������һ����");
	float num = 0;
	float avg = 0;
	float sum = 0;
	int count = 0;
	printf("please input the NO.%d number:", count + 1);
	scanf_s("%f", &num);
	while (num != -1)
	{
		sum += num;
		count++;
		printf("please input the NO.%d number:", count + 1);
		scanf_s("%f", &num);
	}
	if (count > 0)
		avg = sum / count;
	printf("%f\n", avg);
	//    do {
	//        printf("please input the NO.%d number:",count + 1);
	//
	//
	//    }while (num != -1);
	//
	//        avg = (sum + 1) / (count - 1);
	//    else{
	//        avg = 0;
	//    }
	//
}

void get_the_average2()
{
	float num = 0;
	float avg = 0;
	float sum = 0;
	int count = 0;
	do
	{
		printf("please input the NO.%d number:", count + 1);
		scanf_s("%f", &num);
		if (num != -1)
		{
			sum += num;
			count++;
		}
	} while (num != -1);
	avg = sum / count;
	printf("%f\n", avg);
}

void sushu(int num)
{
	int i;
	int tag = 0; // tag == 0��ʾ������
	for (i = 2; i <= num / 2; ++i)
	{
		if (num % i == 0)
		{
			tag = 1;
			break;
		}
	}
	if (tag == 0)
	{
		printf("%d is a sushu\n", num);
	}
	else
	{
		printf("%d is not a sushu\n", num);
	}
}

void how_to_gather_100()
{ // ��1,2,5Ԫ�����ȥ��ȡ100Ԫ���оٳ����н����
	for (int one = 0; one <= 100; ++one)
	{
		for (int two = 0; two <= 50; ++two)
		{
			for (int five = 0; five <= 20; ++five)
			{
				if (one + two * 2 + five * 5 == 100)
				{
					printf("%d\t%d\t%d\n", one, two, five);
				}
			}
		}
	}
}

void how_to_gather_100_2()
{ // ��1,2,5Ԫ�����ȥ��ȡ100Ԫ��һ����ȡ��һ�������������ѭ����
	int exit = 0;
	for (int one = 0; one <= 100; ++one)
	{
		for (int two = 0; two <= 50; ++two)
		{
			for (int five = 0; five <= 20; ++five)
			{
				if (one + two * 2 + five * 5 == 100)
				{
					printf("%d\t%d\t%d\n", one, two, five);
					exit = 1;
					break;
				}
			}
			if (exit == 1)
				break;
		}
		if (exit == 1)
			break;
	}
}

void how_to_gather_100_3()
{ // ��1,2,5Ԫ�����ȥ��ȡ100Ԫ��һ����ȡ��һ�������������ѭ����
	int exit = 0;
	for (int one = 0; one <= 100; ++one)
	{
		for (int two = 0; two <= 50; ++two)
		{
			for (int five = 0; five <= 20; ++five)
			{
				if (one + two * 2 + five * 5 == 100)
				{
					printf("%d\t%d\t%d\n", one, two, five);
					goto out;
				}
			}
		}
	}
out:
	return;
}

int get_digits(int num)
{
	int n = 1;
	while (num >= 10)
	{
		num /= 10;
		n++;
	}
	//    printf("%d//", n);
	return n;
}

void ordered_output(int num)
{
	int quotient;
	int ten_power;
	int i = get_digits(num);
	//    printf("i=%d", i);
	do
	{
		ten_power = powf(10, --i); // Ҫ��Ϊע��������⣡
		quotient = num / ten_power;
		num = num % ten_power;
		printf("%d", quotient);
		if (i > 0)
		{
			printf(" ");
		}
	} while (i > 0);
	printf("\n");
}

void float_double_ecample()
{
	/*char c = 127;
	c += 1;
	printf("%d\n", c);
	printf("%d\n", c);
	c = -128;
	c -= 1;*/
	float f = 10.23f;
	printf("%e\n", f);
	//scanf("");
	double ff = 1E-10;
	printf("%.12lf\n", ff); // .12��ʾ�����Чλ�ĸ���
	double fff = 1E10;
	printf("%4lf\n", fff);
}

void float_double_ecample2()
{
	/*printf("%f\n", 12.0 / 0.0);
    printf("%f\n", -12.0 / 0.0);
    printf("%f\n", 0.0 / 0.0);*/
}

void char_exam()
{
	int i = 49;
	char c = i;
	printf("%c\n", c);
}

//int main() {
//    printf_exam();
//    scanf_exam();
//    printf("%f\n", 10.0 / 3 * 3);
//    time_gap2();
//    integer_num();
//    guess_the_num();
//    how_to_use_rand();
//    get_the_average();
//    how_to_gather_100();
//    how_to_gather_100_3();
/*ordered_output(0);
	    ordered_output(1);
	    ordered_output(12);
	    ordered_output(10);
	    ordered_output(80);
	    ordered_output(800);
	    ordered_output(8000);
	    ordered_output(80000);
	    ordered_output(800000);*/
//    get_digits(80001);
//    get_digits(70000);
//    printf("%f\n",powf(10, 2));
//    printf("%f\n",powf(10, 3));
//float_double_ecample2();
//    char_exam();
//}