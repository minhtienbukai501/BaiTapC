#include <iostream>
#include <cmath>

using namespace std;

void nhapmang(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "\n Nhap phan tu thu [" << i << "] : ";
        cin >> a[i];
    }
}

void xuatmang(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "  " << a[i];
    }
}

void VTLN_PTLN(int a[], int n)
{
    int min = a[0]; 
    int minIndex = 0; 
    for (int i = 1; i < n; i++)
    {
        if (a[i] < min)
        {
            min = a[i]; 
            minIndex = i; 
        }
    }
    cout << "\n Vi tri nho nhat cua mang la : " << minIndex;
    cout << "\n Phan tu nho nhat cua mang la : " << min;
}

int main()
{
    int n;
    cout << "Nhap so phan tu cua mang: ";
    cin >> n;

    int a[100]; 

    nhapmang(a, n);

    cout << "\n Cac phan tu cua mang la : ";
    xuatmang(a, n);
    VTLN_PTLN(a, n);

    return 0;
}

