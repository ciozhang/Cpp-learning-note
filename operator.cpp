#include <iostream>
#include <cstring>
using namespace std;

class String {
private:
char * str;
public:

String () : str(NULL) { } //构造函数, 初始化str为NULL
const char * c_str() { return str; }
String & operator = (const String & s);
~String( );
};

String & String::operator = (const String & s){
if(str == s.str) return * this;
if(str) delete [] str;
if(s.str) { //s.str不为NULL才会执行拷贝
str = new char[strlen(s.str)+1];
strcpy( str,s.str);
}
else
str = NULL;
return * this;
}

