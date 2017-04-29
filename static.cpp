# include <iostream>
using namespace std;
class CRectangle
{
private:
	int w, h;
	static int nTotalArea;//静态成员变量
	static int nTotalNumber;
public:
	CRectangle(CRectangle & r);//复制构造函数
	CRectangle(int w_, int h_);
	~CRectangle();
	static void PrintTotal();//静态成员函数
};
//构造函数
CRectangle::CRectangle(int w_, int h_)
{
	w = w_;
	h = h_;
	nTotalNumber ++;
	nTotalArea += w * h;
}
//析构函数
CRectangle::~CRectangle()
{
	nTotalNumber --;
	nTotalArea -= w*h;
}
//复制构造函数
CRectangle::CRectangle(CRectangle & r)
{
	w=r.w; h=r.h;
	nTotalNumber++;
	nTotalArea += w*h;
}

void CRectangle::PrintTotal()
{
	cout << nTotalNumber << "," << nTotalArea << endl;
}
//对静态成员变量进行声明，初始化
int CRectangle::nTotalNumber = 0;
int CRectangle::nTotalArea = 0;

int main()
{
	CRectangle r1(3,3), r2(2,2);
	//cout << CRectangle::nTotalNumber;//wrong,私有
	CRectangle::PrintTotal();
	r1.PrintTotal();
	return 0;
}
