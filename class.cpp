# include <iostream>
using namespace std;

class Location{
private:
	int x,y;
public:
	//内联函数
	inline void init(int x = 0, int y = 0);
	//函数重载
	void valueX(int val) {x = val;}//若使用了缺省参数，避免二义性
	int valueX(){return x;}
};//分号

//在外部定义类中的init函数
void Location::init(int X, int Y){
	x = X;
	y = Y;
}

int main(){
Location A;//A为对象
A.init(5);
A.valueX(5);
cout << A.valueX();
return 0;
}