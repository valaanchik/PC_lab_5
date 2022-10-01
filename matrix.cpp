#include "matrix.h"


int **create()
{
    int **arr;
     *arr = new int (N);
    for (int i = 0; i < N; i++) arr[i] = new int[M];

    for (int i = 0; i < N; ++i){
        for (int j = 0; j < M; j++)
            arr[i][j] = rand () % 100 - 50;}
    return arr;
}
int f_1(int **arr)
{
    int k = -51, sum = 0;
    for (int i = 0; i < N; ++i)
        for (int j = 0; j < M; ++j)
        {
            if (arr [i][j] > k && arr[i][j] < 0)
                k = arr[i][j];
        }

    for (int i = 0; i < N; ++i)
        for (int j = 0; j < M; ++j)
        {
            if (arr [i][j] == k) sum += arr[i][j];
        }
    return sum;

};
void print(int **arr)
{
    for (int i = 0; i < N; ++i)
{
        for (int j = 0; j < M; j++)
          cout << arr[i][j] << " ";
  cout << endl;
}
}
