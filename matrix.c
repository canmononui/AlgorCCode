#include<stdio.h>
#include<conio.h>
#include<stdlib.h>


int main()
{
	//create();
	int i, j, row, col, menu, row1,col1,data;
	printf("Enter Row :");
	scanf("%d", &row);
	printf("Enter Column :");
	scanf("%d", &col);
	int **matrix = (int **)malloc(row * sizeof(int*));
	//สร้างอาร์เรย์เก็บพ้อยเตอร์เท่ากับค่า row(แถว) ที่รับมา
	for (i = 0; i < col; i++) matrix[i] = (int *)malloc(col * sizeof(int));
	//จองหน่วยความจำเท่ากับค่า col ที่รับมา

	printf("Enter the elements of matrix :\n");
	for (i = 0; i < row; i++)
		for (j = 0; j < col; j++)
			scanf("%d", &matrix[i][j]);

	system("cls");
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
	printf("4.Destroy data in matrix\n\n");// ใช้คำสั่งfree
	printf("Please enter number of choide : ");
	scanf("%d", &menu);

	system("cls");
	if (menu == 1)
	{
		printf("1.Insert data in matrix \n");
		printf("Product of matrix :\n");
		for (i = 0; i < row; i++)
		{
			for (j = 0; j < col; j++)
				printf("%d\t", matrix[i][j]);
			printf("\n");
		}
			printf("\nEnter the number of rows and columns for Insert matrix :\n");
			scanf("%d%d", &row1, &col1);
			printf("\nEnter the new data for edit matrix :\n");
			scanf("%d", &data);
			//printf("%d\n", data);
			int **matrix1 = (int **)malloc(row1 * sizeof(int*));
			for (i = 0; i < col1; i++) matrix1[i] = (int *)malloc(col1 * sizeof(int));
			i = row1 - 1;
			j = col1 - 1;
			matrix1[i][j] = data;
				
			//copy ค่าเดิมมาใส่ ถ้าไม่มีค่าให้ใส่ค่าเป็น 0
			for(i = 0; i < row1; i++)
				for (j = 0; j < col1; j++)
					matrix1[i][j] = 0;

			for (i = 0; i < row; i++)
				for (j = 0; j < col; j++)
					matrix1[i][j] = matrix[i][j];

			i = row1 - 1;
			j = col1 - 1;
			matrix1[i][j] = data;
				printf("\nNew Product of matrix :\n");
				for (i = 0; i < row1; i++)
				{
					for (j = 0; j < col1; j++)
					{
						printf("%d\t", matrix1[i][j]);
						//printf("\n");
					}
					printf("\n");
				}
	}
//****************************************************
	else if (menu == 2)
	{
		printf("2.Delete data in matrix \n");
		printf("Product of matrix :\n");
		for (i = 0; i < row; i++)
		{
			for (j = 0; j < col; j++)
				printf("%d\t", matrix[i][j]);
			printf("\n");
		}
		//---------------------------------
		printf("\nEnter the number of rows and columns for Insert matrix :\n");
		scanf("%d%d", &row1, &col1);
		int **matrix1 = (int **)malloc(row1 * sizeof(int*));
		for (i = 0; i < col1; i++) matrix1[i] = (int *)malloc(col1 * sizeof(int));
		
		for (i = 0; i < row1; i++)
			for (j = 0; j < col1; j++)
				matrix1[i][j] = 0;
		row = row - 1;
		col = col - 1;
		for (i = 0; i < row; i++)
			for (j = 0; j < col; j++)
				matrix1[i][j] = matrix[i][j];

		printf("\nNew Product of matrix :\n");
		for (i = 0; i < row1; i++)
		{
			for (j = 0; j < col1; j++)
			{
				printf("%d\t", matrix1[i][j]);
				//printf("\n");
			}
			printf("\n");
		}
	
	}
//****************************************************
	else if (menu == 3)
	{
		printf("3.Modify data in matrix \n\n");
		printf("Product of matrix :\n");
		for (i = 0; i < row; i++)
		{
			for (j = 0; j < col; j++)
				printf("%d\t", matrix[i][j]);
				printf("\n");
		}
		printf("\nEnter the number of rows and columns for edit matrix :\n");
		scanf("%d%d", &row1,&col1);
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
	else
	{
		printf("4.Destroy data in matrix \n");
		free(matrix);
		printf("\nDelete metric successfully !!!\n\n");
	}
	
}
