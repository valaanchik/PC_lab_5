#include <iostream>
#include <time.h>
#include <windows.h>


using namespace std;
typedef int (__stdcall *f_funci)();
int main()
{

while (1)
{
int c;
cout <<"1. Work with Matrix"<< endl;
cout <<"2. Work with Array"<< endl;
cout <<"0. Exit"<< endl;

cin>> c;
if (c == 1)
{
int m;
void *lib = LoadLibrary("C:/Univirsity/temp3_1/libmatrix.so");
int **(*create)() = (int** (*)())GetProcAddress((HINSTANCE)lib, "create");
void (*print)(int**)= (void (*)(int**))GetProcAddress((HINSTANCE)lib, "print");
int (*f_1)(int**) = (int (*)(int**))GetProcAddress((HINSTANCE)lib, "f_1");
int **A = (*create)();
cout <<" Matrix "<< endl;
(*print)(A);
m=(*f_1)(A);
cout <<" Matrix"<< endl;
(*print)(A);
cout << endl <<"Answer: "<< m << endl;
free(A);
FreeLibrary((HINSTANCE)lib);
system("pause");
return 0;
}
else if (c == 2)
{

int m;
void *lib = LoadLibrary("C:/Univirsity/temp3_1/libarray.so");
int **(*create)() = (int** (*)())GetProcAddress((HINSTANCE)lib, "create");
void (*print)(int*) = (void (*)(int*))GetProcAddress((HINSTANCE)lib, "print");
int (*f_1)(int*) =(int (*)(int*)) GetProcAddress((HINSTANCE)lib, "f_1");
int *arr =*create();
cout <<" Array"<< endl;
(*print)(arr);
m=(*f_1)(arr);
cout <<" Array"<< endl;
(*print)(arr);
cout << endl <<"Answer: "<< m << endl;
free(arr);
FreeLibrary((HINSTANCE)lib);
return 0;
}
else if (c == 0)
{
return 0;
}
else
{
cout <<" Repeat "<< endl;
}
}
}
