#include <iostream>
#include <time.h>
#include <dlfcn.h>

using namespace std;
typedef int (__stdcall *f_funci)();
int main()
{
    while (1)
    {
        int c;
        int m;

        cout <<"1. Work with Matrix"<< endl;
        cout <<"2. Work with Array"<< endl;
        cout <<"0. Exit"<< endl;

        cin>> c;

        if (c == 1)
        {
            void *lib = dlopen("C:/Univirsity/temp3_1/libmatrix.so", RTLD_LAZY);
            int **(*create)() = dlsym(lib, "create");
            void (*print)(int**) = dlsym(lib, "print");
            void (*f_1)(int**) = dlsym(lib, "f_1");

            int **A = (*create)();

            cout <<" Matrix"<< endl;
            (*print)(A);

             m = (*f_1)(A);

            cout <<" Matrix"<< endl;
            (*print)(A);
            cout << endl <<"Answer: "<< m << endl;
            free(A);
            dlclose(lib);

            return 0;
        }
        else if (c == 2)
        {
            void *lib = dlopen("C:/Univirsity/temp3_1/libarray.so", RTLD_LAZY);
            int **(*create)() = dlsym(lib, "create");
            void (*print)(int*) = dlsym(lib, "print");
            void (*f_1)(int*) = dlsym(lib, "f_1");

            int *arr = create();

            cout <<" Array"<< endl;
            (*print)(arr);

            m = (*f_1)(arr);

            pcout <<" Array"<< endl;
            (*print)(arr);
            cout << endl <<"Answer: "<< m << endl;
            free(arr);
            dlclose(lib);

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
