#include <bits/stdc++.h>
using namespace std;
bool find3Numbers(int A[], int n, int X)
{
    int l, r;
 
    for (int i = 0; i < n - 2; i++)
    {
 
        for (int j = i + 1; j <n - 1; j++)
        {
 
            for (int k = j + 1; k < n; k++)
            {
                if (A[i] + A[j] + A[k] == X)
                {
                    cout << "Triplet is " << A[i] <<
                        ", " << A[j] << ", " << A[k];
                    return 1;
                }
            }
        }
    }
 
    
    return 0;
}
int main()
{
    int A[] = {1, 4, 45, 6 ,10 ,8};
    int X = 13;
    int n = sizeof(A) / sizeof(A[0]);
    find3Numbers(A,n,X);
    return 0;
}
