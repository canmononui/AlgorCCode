#include<stdio.h>

int main()
{

	int i, j, row, col, menu, row1, col1, data;
	int count = 0;
	int	check = 0;
	printf("Enter Row :");
	scanf("%d", &row);
	printf("Enter Column :");
	scanf("%d", &col);
	//���ҧ���������纾���������ҡѺ��� row(��) ����Ѻ��
	int **matrix = (int **)malloc(row * sizeof(int*));
	//�ͧ˹��¤�������ҡѺ��� col ����Ѻ��
	for (i = 0; i < col; i++) matrix[i] = (int *)malloc(col * sizeof(int));

	//ǹ�ٻ�Ѻ��� matrix
	printf("Enter the elements of matrix :\n");
	for (i = 0; i < row; i++)
			for (j = 0; j < col; j++)
				scanf("%d", &matrix[i][j]);

	//------------------------------------------------------------------
	system("cls");
	//���� Product ���
	printf("Product of matrix :\n");
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
			printf("%d\t", matrix[i][j]);
		printf("\n");
	}
	printf("********************************************\n");
	printf("1.Insert data in matrix\n");
	printf("2.Delete data in matrix\n");
	printf("3.Modify data in matrix\n");
	printf("4.Destroy data in matrix\n\n");// ������free
	printf("Please enter number of choide : ");
	scanf("%d", &menu);

	system("cls");
	if (menu == 1)
	{
		printf("*******************************************************************\n");
		printf("********************* 1.Insert data in matrix *********************\n");
		printf("*******************************************************************\n");
		//���� Product ���
		printf("Product of matrix :\n");
		for (i = 0; i < row; i++)
		{
			for (j = 0; j < col; j++)
				printf("%d\t", matrix[i][j]);
			printf("\n");
		}
		//�Ѻ��ҵ��˹觷������������ԡ
		printf("\nEnter the number of rows and columns for Insert matrix :\n");
		scanf("%d%d", &row1, &col1);
		//�Ѻ��Ң����ŷ�������㹵��˹觷���Ѻ�ҡ�͹˹��
		printf("\nEnter the new data for edit matrix :\n");
		scanf("%d", &data);
		//��С�Ȩͧ��鹷����������Ҵ����Ѻ��
		int **matrix1 = (int **)malloc(row1 * sizeof(int*));
		for (i = 0; i < col1; i++) matrix1[i] = (int *)malloc(col1 * sizeof(int));

		for (i = 0; i < row1; i++)
			for (j = 0; j < col1; j++)
				matrix1[i][j] = 0;
		//copy �����������
		for (i = 0; i < row; i++)
			for (j = 0; j < col; j++)
				matrix1[i][j] = matrix[i][j];
		//��Ѻ���i , j ����ʹ���ͧ�Ѻ���˹�� Array
		i = row1 - 1;
		j = col1 - 1;
		//����ҷ���Ѻ�������ԡ
		matrix1[i][j] = data;
		//ǹ�ٻ���鹤�����ԡ����ҧ˹�Ҩ�
		printf("\nNew Product of matrix :\n");
		for (i = 0; i < row1; i++)
		{
			for (j = 0; j < col1; j++)
				printf("%d\t", matrix1[i][j]);
				printf("\n");	//��鹺ѹ�Ѵ����
		}
	}
	//------------------------------------------------------------------
	else if (menu == 2)
	{
		printf("*******************************************************************\n");
		printf("********************* 2.Delete data in matrix *********************\n");
		printf("*******************************************************************\n");
		printf("Product of matrix :\n");
		//���� Product ���
		for (i = 0; i < row; i++)
		{
			for (j = 0; j < col; j++)
				printf("%d\t", matrix[i][j]);
			printf("\n");
		}
		//�Ѻ��ҵ��˹觷���ͧ��è�ź������
		printf("\nEnter the number of rows and columns for delete matrix :\n");
		scanf("%d%d", &row1, &col1);
		//��С�Ȩͧ��鹷����������Ҵ����Ѻ��
		//int **matrix1 = (int **)malloc(row * sizeof(int*));
		//for (i = 0; i < col1; i++) matrix1[i] = (int *)malloc(col * sizeof(int));
		/* //ǹ�ٻ�������ԡ�����դ���� 0 �ء���˹�
		for (i = 0; i < row1; i++)
			for (j = 0; j < col1; j++)
				matrix1[i][j] = 0;*/
		//��Ѻ���i , j ����ʹ���ͧ�Ѻ���˹�� Array
		//-1 �������ǹ�ٻ���¡�������ѡ�ͧ���
			//row = row - 1;
			//col = col - 1;
		//ǹ�ٻ��Ҥ����������
		//for (i = 0; i < row; i++)
			//for (j = 0; j < col; j++)
				//matrix1[i][j] = matrix[i][j];

		//ǹ�ٻ���鹤�����ԡ����ҧ˹�Ҩ�
		/*
		for (i = 0; i < col; i++)
		{
			matrix[i][col1 - 1] = matrix[i][col1];

		}
		for (i = 0; i < row; i++)
		{
			matrix[row1 - 1][i] = matrix[row1][i];

		}*/
		//for (i = 0; i < row1; i++)
			//for (j = 0; j < col1; j++)
				//matrix1[i][j]= matrix[i][j]

		for (i = 0; i < row; i++)
			for (j = 0; j < col; j++)
			{
				if (i == row1 - 1) { matrix[i][j] = 0; }
				if (j == col1 - 1) { matrix[i][j] = 0; }
			}
		/*for (i = 0; i < row; i++)
			for (j = 0; j < col; j++)
			{

			}*/

		printf("\nNew Product of matrix :\n");
		for (i = 0; i < row; i++)
		{
			for (j = 0; j < col; j++)
				printf("%d\t", matrix[i][j]); //1>0
				printf("\n");
		}
		//scanf("%d", &o);
	}
	//****************************************************
	else if (menu == 3)
	{
		printf("*******************************************************************\n");
		printf("********************* 3.Modify data in matrix *********************\n");
		printf("*******************************************************************\n");
		printf("Product of matrix :\n");
		for (i = 0; i < row; i++)
		{
			for (j = 0; j < col; j++)
				printf("%d\t", matrix[i][j]);
			printf("\n");
		}
		printf("\nEnter the number of rows and columns for edit matrix :\n");
		scanf("%d%d", &row1, &col1);
		printf("\nEnter the new data for edit matrix :\n");
		scanf("%d", &data);
		i = row1 - 1;
		j = col1 - 1;
		matrix[i][j] = data;
		printf("\nNew Product of matrix :\n");
		for (i = 0; i < row; i++)
		{
			for (j = 0; j < col; j++)
				printf("%d\t", matrix[i][j]);
			printf("\n");
		}

	}
	//****************************************************
	else if (menu == 4)
	{
		printf("*******************************************************************\n");
		printf("******************** 4.Destroy data in matrix *********************\n");
		printf("*******************************************************************\n");
		free(matrix);
		printf("\nDelete metric successfully !!!\n\n");
	}
	//****************************************************
	else
	{
		printf("*******************************************************************\n");
		printf("*************************** Error !!! *****************************\n");
		printf("*******************************************************************\n");
		printf("\nYou Choose Error !!!\n\n");
	}

}
