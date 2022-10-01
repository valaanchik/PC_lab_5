#include "array.h"


int *create()
{
    int *arr = new int (N);
        for (int j = 0; j < N; j++) arr[j] = rand () % 100 - 50;
return arr;
}
int f_1(int *arr)
{
    int k = -51, sum = 0;
    for (int i = 0; i < N; ++i)
       {
            if (arr [i]> k && arr[i] < 0) k = arr[i];
        }

    for (int i = 0; i < N; ++i)
        {
            if (arr [i] == k) sum += arr[i];
        }
    return sum;

};
void print(int *arr)
{
    for (int i = 0; i < N; ++i)   cout << arr[i]<< " ";

}
