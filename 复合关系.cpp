/*
复合关系的使用
为“狗”类设一个“业主”类的对象指针；
为“业主”类设一个“狗”类的对象指针数组。
*/

class CMaster; //CMaster必须提前声明，不能先
//写CMaster类后写Cdog类
class CDog {
 CMaster * pm;
};
class CMaster {
 CDog * dogs[10];
}; 