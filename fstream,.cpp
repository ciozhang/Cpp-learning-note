#include <fstream> // 包含头文件
ofstream outFile(“clients.dat”, ios::out|ios::binary); //打开文件
/*
打开并建立文件的选项
• ios::out 输出到文件, 删除原有内容
• ios::app 输出到文件, 保留原有内容,
 总是在尾部添加
• ios::binary 以二进制文件格式打开文件
*/

//例子: mycopy 程序, 文件拷贝
//用法示例：
//mycopy src.dat dest.dat
//即将 src.dat 拷贝到 dest.dat
//如果 dest.dat 原来就有, 则原来的文件会被覆盖
#include <iostream>
#include <fstream>
using namespace std;
int main(int argc, char * argv[]){
 if(argc != 3) {
 cout << "File name missing!" << endl;
 return 0;
 }
ifstream inFile(argv[1], ios::binary|ios::in); //打开文件用于读
 if(! inFile) {
 cout << “Source file open error.” << endl;
 return 0;
 }
 ofstream outFile(argv[2], ios::binary|ios::out); //打开文件用于写
 if(!outFile) {
 cout << “New file open error.” << endl;
 inFile.close(); //打开的文件一定要关闭
 return 0;
 }
 char c;
 while(inFile.get(c)) //每次读取一个字符
 outFile.put(c); //每次写入一个字符
 outFile.close();
 inFile.close();
 return 0;
}