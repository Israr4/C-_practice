#include<iostream>

class Square_Matrix
{
	public:
    void square_matrix()
{
	int row;
	int col;
	int i,j;

	std::cout<<"Enter Number of Rows For a Matrix"<<std::endl;
	std::cin>>row;
	std::cout<<"Enter Number of Columns For a Matrix"<<std::endl;
	std::cin>>col;
    int matrix[row][col];
	
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			std::cout<<"Enter Number ";
			std::cin>>matrix[i][j];
		}
	}
	
	std::cout<<std::endl;
	
	std::cout<<"The Matrix is"<<std::endl;
	
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			std::cout<<matrix[i][j]<<" ";
		}
		    std::cout<<std::endl;
	}
	
	
	 if(row==col)
	 {
	 	std::cout<<"It is a Square Matrix"<<std::endl;
	 }
	 else
	 {
	 	std::cout<<"This is not a Square Matrix"<<std::endl;
	 	
	 }
	 std::cout<<std::endl;
	 
	 
	 if(i==j)
	 {
		std::cout<<"Printing Diagonal Of Matrix"<<std::endl;
	 for(i=0;i<row;i++)
	 {
		for(j=0;j<col;j++)
		{
			if(i==j)
			std::cout<<matrix[i][j]<<" ";
			else
			std::cout<<" ";
		}
		    std::cout<<std::endl;
	}
     }
	
}
};

class Transpose_Matrix
{
	public:
void transpose_matrix() 
{
	int row;
	int col;
	int i,j;

	std::cout<<"Enter Number of Rows For a Matrix"<<std::endl;
	std::cin>>row;
	std::cout<<"Enter Number of Columns For a Matrix"<<std::endl;
	std::cin>>col;
    int matrix[row][col];
    int matrix1[row][col];
	
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			std::cout<<"Enter Number ";
			std::cin>>matrix[i][j];
		}
	}
	
	std::cout<<std::endl;
	
	std::cout<<"The Matrix is"<<std::endl;
	
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			std::cout<<matrix[i][j]<<" ";
		}
		    std::cout<<std::endl;
	}
	
	std::cout<<std::endl;
	for(i=0;i<col;i++)
	{
		for(j=0;j<row;j++)
		{
			matrix1[i][j]=matrix[j][i];
			std::cout<<matrix1[i][j]<<" ";
		}
		    std::cout<<std::endl;
	}
}
};

class Concatenate_Matrix
{
    public:
    void concatenate_matrix()
    {
    int row;
	int col;
	int i,j;

	std::cout<<"Enter Number of Rows For a Matrix1"<<std::endl;
	std::cin>>row;
	std::cout<<"Enter Number of Columns For a Matrix1"<<std::endl;
	std::cin>>col;
    int matrix1[row][col];
	
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			std::cout<<"Enter Number ";
			std::cin>>matrix1[i][j];
		}
	}
	
	std::cout<<std::endl;
	
	std::cout<<"The Matrix1 is"<<std::endl;
	
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			std::cout<<matrix1[i][j]<<" ";
		}
		    std::cout<<std::endl;
	}
		 
		 
    std::cout<<"Enter Number of Rows For a Matrix2"<<std::endl;
	std::cin>>row;
	std::cout<<"Enter Number of Columns For a Matrix2"<<std::endl;
	std::cin>>col;
    int matrix2[row][col];
	
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			std::cout<<"Enter Number ";
			std::cin>>matrix2[i][j];
		}
	}
	
	std::cout<<std::endl;
	
	std::cout<<"The Matrix2 is"<<std::endl;
	
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			std::cout<<matrix2[i][j]<<" ";
		}
		    std::cout<<std::endl;
	}
	std::cout<<"The Concatenation is"<<'\n';
	
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
				std::cout<<matrix1[i][j]<<" ";
	        	std::cout<<matrix2[i][j]<<" ";
		}
		    std::cout<<std::endl;
	}
}

		 
};

int main()
{
    // Square_Matrix obj1;
	// obj1.square_matrix();
	//    Transpose_Matrix obj2;
	//    obj2.transpose_matrix();	
	   Concatenate_Matrix obj3;
	   obj3.concatenate_matrix();
}
	

