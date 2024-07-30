#include<vector>

void moveZerosToLeft(int *arr, int n) 
{
    vector <int> storeNonZero;

    for (int i = 0; i < n; i++) 
    {
        if (arr[i] != 0) 
        {
            storeNonZero.push_back(arr[i]);
        }
    }

    int i = n - 1;
    
    for (int j = storeNonZero.size() - 1; j >= 0; j--) 
    {
        arr[i] = storeNonZero[j];
        i--;
    }

    while (i >= 0) 
    {
        arr[i] = 0;
        i--;
    }
}
