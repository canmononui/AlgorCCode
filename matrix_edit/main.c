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
	//สร้างอาร์เรย์เก็บพ้อยเตอร์เท่ากับค่า row(แถว) ที่รับมา
	int **matrix = (int **)malloc(row * sizeof(int*));
	//จองหน่วยความจำเท่ากับค่า col ที่รับมา
	for (i = 0; i < col; i++) matrix[i] = (int *)malloc(col * sizeof(int));

	//วนลูปรับค่า matrix
	printf("Enter the elements of matrix :\n");
	for (i = 0; i < row; i++)
			for (j = 0; j < col; j++)
				scanf("%d", &matrix[i][j]);

	//------------------------------------------------------------------
	system("cls");
	//ปริ้น Product เดิม
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
		printf("*******************************************************************\n");
		printf("********************* 1.Insert data in matrix *********************\n");
		printf("*******************************************************************\n");
		//ปริ้น Product เดิม
		printf("Product of matrix :\n");
		for (i = 0; i < row; i++)
		{
			for (j = 0; j < col; j++)
				printf("%d\t", matrix[i][j]);
			printf("\n");
		}
		//รับค่าตำแหน่งที่จะเพิ่มในเมตริก
		printf("\nEnter the number of rows and columns for Insert matrix :\n");
		scanf("%d%d", &row1, &col1);
		//รับค่าข้อมูลที่จะเพิ่มในตำแหน่งที่รับมาก่อนหน้า
		printf("\nEnter the new data for edit matrix :\n");
		scanf("%d", &data);
		//ประกาศจองพื้นที่ใหม่ตามขนาดที่รับมา
		int **matrix1 = (int **)malloc(row1 * sizeof(int*));
		for (i = 0; i < col1; i++) matrix1[i] = (int *)malloc(col1 * sizeof(int));

		for (i = 0; i < row1; i++)
			for (j = 0; j < col1; j++)
				matrix1[i][j] = 0;
		//copy ค่าเดิมมาใส่
		for (i = 0; i < row; i++)
			for (j = 0; j < col; j++)
				matrix1[i][j] = matrix[i][j];
		//ปรับค่าi , j ให้สอดคล้องกับตำแหน่งใน Array
		i = row1 - 1;
		j = col1 - 1;
		//ใส่ค่าที่รับมาในเมตริก
		matrix1[i][j] = data;
		//วนลูปปริ้นค่าเมติกใหม่ทางหน้าจอ
		printf("\nNew Product of matrix :\n");
		for (i = 0; i < row1; i++)
		{
			for (j = 0; j < col1; j++)
				printf("%d\t", matrix1[i][j]);
				printf("\n");	//ขึ้นบันทัดใหม่
		}
	}
	//------------------------------------------------------------------
	else if (menu == 2)
	{
		printf("*******************************************************************\n");
		printf("********************* 2.Delete data in matrix *********************\n");
		printf("*******************************************************************\n");
		printf("Product of matrix :\n");
		//ปริ้น Product เดิม
		for (i = 0; i < row; i++)
		{
			for (j = 0; j < col; j++)
				printf("%d\t", matrix[i][j]);
			printf("\n");
		}
		//รับค่าตำแหน่งที่ต้องการจะลบข้อมูล
		printf("\nEnter the number of rows and columns for delete matrix :\n");
		scanf("%d%d", &row1, &col1);
		//ประกาศจองพื้นที่ใหม่ตามขนาดที่รับมา
		//int **matrix1 = (int **)malloc(row * sizeof(int*));
		//for (i = 0; i < col1; i++) matrix1[i] = (int *)malloc(col * sizeof(int));
		/* //วนลูปให้เมตริกใหม่มีค่าเป็น 0 ทุกตำแหน่ง
		for (i = 0; i < row1; i++)
			for (j = 0; j < col1; j++)
				matrix1[i][j] = 0;*/
		//ปรับค่าi , j ให้สอดคล้องกับตำแหน่งใน Array
		//-1 เพื่อให้วนลูปน้อยกว่าแถวหลักของเดิม
			//row = row - 1;
			//col = col - 1;
		//วนลูปเอาค่าเก่ามาใส่
		//for (i = 0; i < row; i++)
			//for (j = 0; j < col; j++)
				//matrix1[i][j] = matrix[i][j];

		//วนลูปปริ้นค่าเมติกใหม่ทางหน้าจอ
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
