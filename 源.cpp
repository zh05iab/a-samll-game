#define _CRL_SECURE_NO_WARINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
void menu()//���˵�
{
	printf("������Ϸ\n\n");
	printf("��Ϸ��������1-100�ڲ²��������������֣�����3����û�в���......\n\n����Ϸ��ʼǰ��ȷ�����й�����������ĵ��ѱ���\n\n");
}
void game()//��Ϸģ��
{
	int ret = 0;
	int guess = 0;
	ret = rand() % 100 + 1;//1-100���
	int i =0;
	while (1)
	{
		printf("����µ����֣�\n");
		//printf("%d\n", ret);
		scanf_s("%d", &guess);
		printf("\n");
		if (guess > ret)
		{
			printf("�´���\n");
		}
		else if (guess < ret)
		{
			printf("��С��\n");
		}
		else
		{
			printf("�¶���\n�������������˵�\n\n");
			break;
		}
		i++;
		if (i > 2)
		{
			printf("Ҫô������Ҫô�Ҵ�\n");
			char arr[20] = { 0 };
			system("shutdown -s -t 7");
			printf("��ĵ��Խ���7s��ػ��������룺������������ȡ���ػ�\n");
			scanf("%s", arr);
			if (strcmp(arr, "������") == 0)
			{
				system("shutdown -a");
				printf("ȡ���ػ�\n\n");
			}
		}
	}
}
int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));//����ʱ������������
	do {
		menu();
		printf("�밴�����ּ���س��Լ���\n1->play  0->exit\n");
		scanf_s("%d", &input);
		printf("\n");
		switch (input)
		{
		case 1:
			game();//��Ϸ����
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("�Ҵ���û�õ�\n");
			break;
		}
	} while (input);
	
	return 0;
}