// run.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#pragma comment(lib, "D:\\install\\python310\\libs\\python310_d.lib")
#include "Python.h"

//ref
//https://blog.csdn.net/zong596568821xp/article/details/115690713

int main(int argc, wchar_t** argv)
{
	// 1、初始化python接口  
	Py_Initialize();
	if (!Py_IsInitialized()) {
		std::cout << "python init fail" << std::endl;
		return 0;
	}
	// 2、初始化python系统文件路径，保证可以访问到 .py文件
	PyRun_SimpleString("import sys");
	PyRun_SimpleString("sys.path.append('./')");

	// 3、调用python文件名，不用写后缀
	PyObject* pModule = PyImport_ImportModule("myrun");
	if (pModule == NULL) {
		std::cout << "module not found" << std::endl;
		return 1;
	}
	// 4、调用函数
	PyObject* pFunc = PyObject_GetAttrString(pModule, "myprint");
	if (!pFunc || !PyCallable_Check(pFunc)) {
		std::cout << "not found function myprint" << std::endl;
		return 0;
	}
	// 
	PyObject_CallObject(pFunc, NULL);
	// 5、结束python接口初始化
	Py_Finalize();
	return 0;
}
