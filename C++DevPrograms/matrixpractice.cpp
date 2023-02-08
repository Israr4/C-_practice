#include<iostream>
#include<vector>
class OneDArray
{
	public:
	void OneArray()
	{
		int matrix1[10];
	
	for(int i=0;i<=9;i++)
	{
		std::cout<<"Enter Number ";
		std::cin>>matrix1[i];
	}
	
	std::cout<<"The Value Of Matrix Are................."<<std::endl;
	for(int i=0;i<=9;i++)
	{
		std::cout<<matrix1[i]<<" ";
	}
	}
};

class ThreeDToTwoArray       //converting 3D Array into 2D Arrays;
{
	public:
		int i,j,k;
		void ThreeArray()
		{
			int matrix1[3][2][2];
			
			for(i=0;i<=2;i++)
			{
				std::cout<<"Enter Value For "<<i<<" Matrix"<<std::endl;
				for(j=0;j<=1;j++)
				{
					for(k=0;k<=1;k++)
					{
						std::cout<<"Enter Number ";
						std::cin>>matrix1[i][j][k];
					}
				}
				std::cout<<std::endl;
			}
			
			std::cout<<"The matrices of block size "<<i<<" are "<<std::endl;
			for(i=0;i<=2;i++)
			{
				for(j=0;j<=1;j++)
				{
					for(k=0;k<=1;k++)
					{
						std::cout<<matrix1[i][j][k]<<" ";
					}
					std::cout<<std::endl;
				}
				std::cout<<std::endl;
			}
			
			std::cout<<"Now We Are Creating 2D Array of Size Of Block(i) given in 3D Matrix "<<std::endl<<std::endl;
			int m1[2][2];   //they must be equal to rows and coloumn of 3D Matrix
			int m2[2][2];
			int m3[2][2];
			
			//Copying Values From 3D Array To 2D Arrays
			
			for(i=0;i<=2;i++)
			{
				for(j=0;j<=1;j++)
				{
					for(k=0;k<=1;k++)
					{
					      if(i==0)     //when 1st matrix
						  {
						  	m1[j][k]=matrix1[i][j][k];
						  }	
						 else if(i==1)
						  {
						  	m2[j][k]=matrix1[i][j][k];
						  }	
						  else
						  {
						  	m3[j][k]=matrix1[i][j][k];
						  }
					}
				}
			}
			
			std::cout<<"First 2D Matrix is "<<std::endl;
			
			for(int i=0;i<=1;i++)
			{
				for(int j=0;j<=1;j++)
				{
					std::cout<<m1[i][j]<<" ";
				}
				std::cout<<std::endl;
			}
			
			std::cout<<"Second 2D Matrix is "<<std::endl;
			
			for(int i=0;i<=1;i++)
			{
				for(int j=0;j<=1;j++)
				{
					std::cout<<m2[i][j]<<" ";
				}
				std::cout<<std::endl;
			}
		    
		    std::cout<<"Third 2D Matrix is "<<std::endl;
			
			for(int i=0;i<=1;i++)
			{
				for(int j=0;j<=1;j++)
				{
					std::cout<<m3[i][j]<<" ";
				}
				std::cout<<std::endl;
			}
		}
};


class TwoDToThreeArray
{
	public:
		int i,j,k;
		void TwoArray()     //Converting 2D Arrays into One 3D Array
		{
			int mat1[2][2];
			int mat2[2][2];
			int mat3[2][2];
			
			std::cout<<"Enter Values For 1st Matrix"<<std::endl;
			for(i=0;i<=1;i++)
			{
				for(j=0;j<=1;j++)
				{
					std::cout<<"Enter Number ";
					std::cin>>mat1[i][j];
				}
			}
			
			std::cout<<"Values For 1st Matrix Are"<<std::endl;
			for(i=0;i<=1;i++)
			{
				for(j=0;j<=1;j++)
				{
					std::cout<<mat1[i][j]<<" ";
				}
				std::cout<<std::endl;
			}
			std::cout<<std::endl;
			
			std::cout<<"Enter Values For 2nd Matrix"<<std::endl;
			for(i=0;i<=1;i++)
			{
				for(j=0;j<=1;j++)
				{
					std::cout<<"Enter Number ";
					std::cin>>mat2[i][j];
				}
			}
			
			std::cout<<"Values For 2nd Matrix Are"<<std::endl;
			for(i=0;i<=1;i++)
			{
				for(j=0;j<=1;j++)
				{
					std::cout<<mat2[i][j]<<" ";
				}
				std::cout<<std::endl;
			}
			std::cout<<std::endl;
			
			std::cout<<"Enter Values For 3rd Matrix"<<std::endl;
			for(i=0;i<=1;i++)
			{
				for(j=0;j<=1;j++)
				{
					std::cout<<"Enter Number ";
					std::cin>>mat3[i][j];
				}
			}
			
			std::cout<<"Values For 3rd Matrix Are"<<std::endl;
			for(i=0;i<=1;i++)
			{
				for(j=0;j<=1;j++)
				{
					std::cout<<mat3[i][j]<<" ";
				}
				std::cout<<std::endl;
			}
			std::cout<<std::endl;
			
			std::cout<<"Now I am created a 3D Array "<<std::endl;
			int matrix[3][2][2];
			//Copying Values From 2D Array To 3D Arrays
			
			for(i=0;i<=2;i++)
			{
				for(j=0;j<=1;j++)
				{
					for(k=0;k<=1;k++)
					{
					      if(i==0)
						  {
						  	matrix[i][j][k]=mat1[j][k];
						  }	
						 else if(i==1)
						  {
						    matrix[i][j][k]=mat2[j][k];
						  }	
						  else
						  {
						   	matrix[i][j][k]=mat3[j][k];
						  }
					}
				}
			}
			
			std::cout<<"The 3D Matrix is "<<std::endl;
			
			for(i=0;i<=2;i++)
			{
				for(j=0;j<=1;j++)
				{
					for(k=0;k<=1;k++)
					{
						std::cout<<matrix[i][j][k]<<" ";
					}
					std::cout<<std::endl;
				}
				std::cout<<std::endl;
			}
			
		}
		
		
};

class ThreeDToOne     ///converting 3D Array into 1D Array
{
	public:
	int i,j,k;
	void OneArray()
	{
		int matrix1[3][2][2];
			
			for(i=0;i<=2;i++)
			{
				std::cout<<"Enter Value For "<<i<<" Matrix"<<std::endl;
				for(j=0;j<=1;j++)
				{
					for(k=0;k<=1;k++)
					{
						std::cout<<"Enter Number ";
						std::cin>>matrix1[i][j][k];
					}
				}
				std::cout<<std::endl;
			}
			
			std::cout<<"Three D Matrices "<<std::endl;
			for(i=0;i<=2;i++)
			{
				for(j=0;j<=1;j++)
				{
					for(k=0;k<=1;k++)
					{
						std::cout<<matrix1[i][j][k]<<" ";
					}
					std::cout<<std::endl;
				}
				std::cout<<std::endl;
			}
			
			
			int TwoMatrix1[2][2];   
			int TwoMatrix2[2][2];
			int TwoMatrix3[2][2];
			
			//Copying Values From 3D Array To 2D Arrays
			
			for(i=0;i<=2;i++)
			{
				for(j=0;j<=1;j++)
				{
					for(k=0;k<=1;k++)
					{
					      if(i==0)
						  {
						  	TwoMatrix1[j][k]=matrix1[i][j][k];
						  }	
						 else if(i==1)
						  {
						  	TwoMatrix2[j][k]=matrix1[i][j][k];
						  }	
						  else
						  {
						  	TwoMatrix3[j][k]=matrix1[i][j][k];
						  }
					}
				}
			}
			
			std::cout<<"First 2D Matrix is "<<std::endl;
			
			for(int i=0;i<=1;i++)
			{
				for(int j=0;j<=1;j++)
				{
					std::cout<<TwoMatrix1[i][j]<<" ";
				}
				std::cout<<std::endl;
			}
			
			std::cout<<"Second 2D Matrix is "<<std::endl;
			
			for(int i=0;i<=1;i++)
			{
				for(int j=0;j<=1;j++)
				{
					std::cout<<TwoMatrix2[i][j]<<" ";
				}
				std::cout<<std::endl;
			}
		    
		    std::cout<<"Third 2D Matrix is "<<std::endl;
			
			for(int i=0;i<=1;i++)
			{
				for(int j=0;j<=1;j++)
				{
					std::cout<<TwoMatrix3[i][j]<<" ";
				}
				std::cout<<std::endl;
			}
			std::cout<<std::endl;
			std::cout<<std::endl;
			
			
			
			//converting TwoD into OneD Array
			
			int OneMatrix1[4];
			int OneMatrix2[4];
			int OneMatrix3[4];
			int index = 0;
			
			for(int i=0;i<=1;i++)
			{
				for(int j=0;j<=1;j++)
				{
					OneMatrix1[index++] = TwoMatrix1[i][j];
                }
			}
			
			index=0;
			for(int i=0;i<=1;i++)
			{
				for(int j=0;j<=1;j++)
				{
					OneMatrix2[index++] = TwoMatrix2[i][j];
                }
			}
			
			index=0;
			for(int i=0;i<=1;i++)
			{
				for(int j=0;j<=1;j++)
				{
					OneMatrix3[index++] = TwoMatrix3[i][j];
                }
			}
			
			
			std::cout<<"First 1D Matrix is "<<std::endl;
			for(int i=0;i<=3;i++)
			{
				
				std::cout<<OneMatrix1[i]<<" ";
			}
			    std::cout<<std::endl;
			
			std::cout<<"Second 1D Matrix is "<<std::endl;
			
			for(int i=0;i<=3;i++)
			{
				
			    std::cout<<OneMatrix2[i]<<" ";
			}
				std::cout<<std::endl;
		    
		    std::cout<<"Third 1D Matrix is "<<std::endl;
			
			for(int i=0;i<=3;i++)
			{
					std::cout<<OneMatrix3[i]<<" ";
			}
				std::cout<<std::endl;
	}
};


class OneDToThree
{
	public:
	int i,j,k;
	void OneArray()
	{
		int onematrix1[4];
		int onematrix2[4];
		int onematrix3[4];
	
	for(int i=0;i<=3;i++)
	{
		std::cout<<"Enter Number ";
		std::cin>>onematrix1[i];
	}
	
	std::cout<<"The Value Of Matrix1 Are................."<<std::endl;
	for(int i=0;i<=3;i++)
	{
		std::cout<<onematrix1[i]<<" ";
	}
	std::cout<<std::endl;
	
	for(int i=0;i<=3;i++)
	{
		std::cout<<"Enter Number ";
		std::cin>>onematrix2[i];
	}
	
	std::cout<<"The Value Of Matrix2 Are................."<<std::endl;
	for(int i=0;i<=3;i++)
	{
		std::cout<<onematrix2[i]<<" ";
	}
	std::cout<<std::endl;
	
	for(int i=0;i<=3;i++)
	{
		std::cout<<"Enter Number ";
		std::cin>>onematrix3[i];
	}
	
	std::cout<<"The Value Of Matrix3 Are................."<<std::endl;
	for(int i=0;i<=3;i++)
	{
		std::cout<<onematrix3[i]<<" ";
	}
	std::cout<<std::endl;
	
	std::cout<<"Now We Convert OneD Array into TwoD Array"<<std::endl;
	
	        int TwoMatrix1[2][2];   
			int TwoMatrix2[2][2];
			int TwoMatrix3[2][2];
			int index=0;
			
			for(int i=0;i<=1;i++)
			{
				for(int j=0;j<=1;j++)
				{
					 TwoMatrix1[i][j]=onematrix1[index++];
                }
			}
			
			index=0;
			for(int i=0;i<=1;i++)
			{
				for(int j=0;j<=1;j++)
				{
					 TwoMatrix2[i][j]=onematrix2[index++];
                }
			}
			
			index=0;
			for(int i=0;i<=1;i++)
			{
				for(int j=0;j<=1;j++)
				{
					 TwoMatrix3[i][j]=onematrix3[index++];
                }
			}
			
			std::cout<<"First 2D Matrix is "<<std::endl;
			
			for(int i=0;i<=1;i++)
			{
				for(int j=0;j<=1;j++)
				{
					std::cout<<TwoMatrix1[i][j]<<" ";
				}
				std::cout<<std::endl;
			}
			
			std::cout<<"Second 2D Matrix is "<<std::endl;
			
			for(int i=0;i<=1;i++)
			{
				for(int j=0;j<=1;j++)
				{
					std::cout<<TwoMatrix2[i][j]<<" ";
				}
				std::cout<<std::endl;
			}
		    
		    std::cout<<"Third 2D Matrix is "<<std::endl;
			
			for(int i=0;i<=1;i++)
			{
				for(int j=0;j<=1;j++)
				{
					std::cout<<TwoMatrix3[i][j]<<" ";
				}
				std::cout<<std::endl;
			}
			std::cout<<std::endl;
			std::cout<<std::endl;
			
			std::cout<<"Now We Convert 2D Array into 3D Array"<<std::endl;
			
			int matrix1[3][2][2];
			
			for(i=0;i<=2;i++)
			{
				for(j=0;j<=1;j++)
				{
					for(k=0;k<=1;k++)
					{
					      if(i==0)
						  {
						  	matrix1[i][j][k]=TwoMatrix1[j][k];
						  }	
						 else if(i==1)
						  {
						  	matrix1[i][j][k]=TwoMatrix2[j][k];
						  }	
						  else
						  {
						  	matrix1[i][j][k]=TwoMatrix3[j][k];
						  }
					}
				}
			}
			
			std::cout<<"Three D Matrices "<<std::endl;
			for(i=0;i<=2;i++)
			{
				for(j=0;j<=1;j++)
				{
					for(k=0;k<=1;k++)
					{
						std::cout<<matrix1[i][j][k]<<" ";
					}
					std::cout<<std::endl;
				}
				std::cout<<std::endl;
			}
		
	}  //functionend
	
};

class ThreeToOneDirect
{
     public:	
     int i,j,k;
	void OneArray()
	{
		int matrix[3][2][2];
			
			for(i=0;i<=2;i++)
			{
				std::cout<<"Enter Value For "<<i<<" Matrix"<<std::endl;
				for(j=0;j<=1;j++)
				{
					for(k=0;k<=1;k++)
					{
						std::cout<<"Enter Number ";
						std::cin>>matrix[i][j][k];
					}
				}
				std::cout<<std::endl;
			}
			
			std::cout<<"Three D Matrices "<<std::endl;
			for(i=0;i<=2;i++)
			{
				for(j=0;j<=1;j++)
				{
					for(k=0;k<=1;k++)
					{
						std::cout<<matrix[i][j][k]<<" ";
					}
					std::cout<<std::endl;
				}
				std::cout<<std::endl;
			}
			
			
			
			int matrix1[4];
			int matrix2[4];
			int matrix3[4];
			int index=0;
			
			std::cout<<"Converting 3D Matrix into 1D Matrix"<<std::endl;
			
			for(i=0;i<=2;i++)
			{
				index=0;
				for(j=0;j<=1;j++)
				{
					for(k=0;k<=1;k++)
					{
					      if(i==0)
						  {
						  	matrix1[index++]=matrix[i][j][k];
						  }	
						 else if(i==1)
						  {
						  	matrix2[index++]=matrix[i][j][k];
						  	
						  }	
						  else
						  {
						  	matrix3[index++]=matrix[i][j][k];
						  }
					}
				}
			}
			
			
			
			std::cout<<"First 1D Matrix is "<<std::endl;
			for(int i=0;i<=3;i++)
			{
				
				std::cout<<matrix1[i]<<" ";
			}
			    std::cout<<std::endl;
			
			std::cout<<"Second 1D Matrix is "<<std::endl;
			
			for(int i=0;i<=3;i++)
			{
				
			    std::cout<<matrix2[i]<<" ";
			}
				std::cout<<std::endl;
		    
		    std::cout<<"Third 1D Matrix is "<<std::endl;
			
			for(int i=0;i<=3;i++)
			{
					std::cout<<matrix3[i]<<" ";
			}
				std::cout<<std::endl;
		}
};

int main()
{
//	OneDArray obj1;
//	obj1.OneArray();
//	ThreeDToTwoArray obj2;
//	obj2.ThreeArray();
//  TwoDToThreeArray obj3;
//  obj3.TwoArray();
//  ThreeDToOne obj4;
//  obj4.OneArray();
//  OneDToThree obj5;
//  obj5.OneArray();
    ThreeToOneDirect obj6;
    obj6.OneArray();
    return 0;
}
