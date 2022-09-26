#include<iostream>
#include<cmath>
#include<string>

struct CartesianCoordinate{
	float xcoord, ycoord, zcoord;
	
	CartesianCoordinate()
	{
		xcoord=0;
		ycoord=0;
		zcoord=0;
	}
	
	CartesianCoordinate(float x, float y, float z)
	{
		xcoord=x;
		ycoord=y;
		zcoord=z;
	}
};

struct SphericalCoordinate
{
		float radius;                          
	    float phi;
	    float thetha;
	    
	    CylindricalCoordinate()
	    {
	    	radius=0;
	    	phi=0;
	    	thetha=0;
		}
	    CylindricalCoordinate(float r, float p, float t)
	    {
	    	radius=r;
	    	phi=p;
	    	thetha=t;
		}
};

struct CylindricalCoordinate
{
		float radius;                          
	    float theta;
	    float zcoord;
	    
	    CylindricalCoordinate()
	    {
	    	radius=0;
	    	theta=0;
	    	zcoord=0;
		}
	    CylindricalCoordinate(float r, float t, float z)
	    {
	    	radius=r;
	    	theta=t;
	    	zcoord=z;
		}
};

        CylindricalCoordinate CartesianToCylindrical(CartesianCoordinate cartesian_point)  //because we cannot use structure here  without its nama as a data type
        {
	        CylindricalCoordinate cylindrical_point;             //int idrees = 5;    as we not initilaize any thing to point si default constructor is installed
	        cylindrical_point.radius = sqrt(pow(cartesian_point.xcoord,2) + pow(cartesian_point.ycoord,2));
	        cylindrical_point.theta  = atan(cartesian_point.ycoord/cartesian_point.xcoord);
	        cylindrical_point.zcoord = cartesian_point.zcoord;
	        return cylindrical_point;                            //return idrees;  //return sirf structure type ka function ko karaya ga agar
        }  //aur hum void ka function ka andar bi structure ko pass kar d

        void  display(CylindricalCoordinate c)
       {
        	std::cout<<c.radius<<" "<<c.theta<<" "<<c.zcoord<<'\n';
       }  


int main()
{
    CartesianCoordinate v(3.2, 4.6, 5.7);   //passing values in constructor
    CylindricalCoordinate abc = CartesianToCylindrical(v);  //passing values of cartesian to cylindrical coordinate
    display(abc);
	

}
