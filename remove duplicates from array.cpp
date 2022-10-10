#include<iostream>
using namespace std;
int removeDuplicates(int array[], int p)
{
    if (p==0 || p==1)
    return p;
    int temp[p];
    int k = 0;
    for (int i=0; i<p-1; i++)
    if (array[i] != array[i+1])
    temp[k++] = array[i];
    temp[k++] = array[p-1];
    for (int i=0; i<k; i++)
    array[i] = temp[i];
    return k;
}

int main()
{
    int array[] = {1, 2, 2, 3, 4, 4, 4, 5, 5, 6, 7, 7, 8, 8, 8, 9, 9 ,11, 10};
    int p = sizeof(array) / sizeof(array[0]);
    p = removeDuplicates(array, p);
    for (int i=0; i<p; i++)
    cout << array[i] << " ";
    return 0;
}