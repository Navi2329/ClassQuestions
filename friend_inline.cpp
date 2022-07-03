#include <iostream>
using namespace std;

class Cuboid
{
 private:
	float length;
	float breadth;
	float height;
 public:
	void get_dimensions(){
		cin>>length;
		cin>>breadth;
		cin>>height;
	}
	inline float calculate_area(){
		return length*breadth;
	}
	float calculate_surface(){
		return 2*(length*breadth+breadth*height+height*length);
	}
	friend float calculate_volume(Cuboid cub);
};

float calculate_volume(Cuboid cub)
{
	return cub.length*cub.breadth*cub.height;
}

int main()
{
	Cuboid obj;
	obj.get_dimensions();
	cout<<"Area of base:"<<obj.calculate_area()<<"m^2"<<endl;
	cout<<"Total Surface Area:"<<obj.calculate_surface()<<"m^2"<<endl;
	cout<<"Volume:"<<calculate_volume(obj)<<"m^3"<<endl;
	cout<<"Amound of liquid that can be stored="<<100* calculate_volume(obj)<<" litres";
}