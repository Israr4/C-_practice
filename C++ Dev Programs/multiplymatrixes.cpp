#include<iostream>
int main()
{
	int row_1;
	int col_1row_2;
	int col_2;
	std::cout<<"NOTE: number of coloumns of 1st Matric should be equal to number of rows of 2nd Matric"<<std::endl;
	std::cout<<"Enter Row Of First Matrix"<<std::endl;
	std::cin>>row_1;
	std::cout<<"Enter Coloumn Of First Matrix and Row Of Second Matrix"<<std::endl;
	std::cin>>col_1row_2;
	std::cout<<"Enter Coloumn Of Second Matrix "<<std::endl;
	std::cin>>col_2;
	int matrix1[row_1][col_1row_2];
	int matrix2[col_1row_2][col_2];
	int mult[row_1][col_2];
	int sum=0;
	
	std::cout<<"Enter Values For !st................."<<std::endl;
	for(int i=0;i<row_1;i++)
	{
		for(int j=0;j<col_1row_2;j++)
		{
			std::cout<<"Enter Number ";
			std::cin>>matrix1[i][j];
		}
	}
	std::cout<<"Matrix! is..............................."<<std::endl;
	for(int i=0;i<row_1;i++)
	{
		for(int j=0;j<col_1row_2;j++)
		{
			std::cout<<matrix1[i][j]<<" ";
		}
		std::cout<<std::endl;
	}
	std::cout<<std::endl;
	std::cout<<"Enter Values For 2nd................."<<std::endl;
	for(int i=0;i<col_1row_2;i++)
	{
		for(int j=0;j<col_2;j++)
		{
			std::cout<<"Enter Number ";
			std::cin>>matrix2[i][j];
		}
	}
	std::cout<<"Matrix2 is..............................."<<std::endl;
	for(int i=0;i<col_1row_2;i++)
	{
		for(int j=0;j<col_2;j++)
		{
			std::cout<<matrix2[i][j]<<" ";
		}
		std::cout<<std::endl;
	}
	std::cout<<std::endl;
	
	std::cout<<"Multiplication of these two matrixes are.........."<<std::endl;
	for( int i=0;i<row_1;i++)
	{
		for( int j=0;j<col_2;j++)
		{
			for( int k=0;k<col_1row_2;k++)
			{
				sum=sum+matrix1[i][k]*matrix2[k][j];
				mult[i][j]=sum;
			
			}
			sum=0;
			std::cout<<mult[i][j]<<" ";
			//mult[i][j]=0;
			
		}
		std::cout<<std::endl;
	}
	
//		for(int i=0;i<row_1;i++)
//	{
//		for(int j=0;j<col_2;j++)
//		{
//			std::cout<<mult[i][j]<<" ";
//		}
//		std::cout<<std::endl;
//	}
	
}


