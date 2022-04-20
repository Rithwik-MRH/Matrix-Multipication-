2#include<iostream>
using namespace std;
int main()
{
    int a[MAX][MAX],b[MAX][MAX],mul[MAX][MAX],ra,ca,rb,cb,i,j,k;
    cout <<"enter rows for matrix a=";
    cin >> ra;
    cout <<"enter columns for matrix a=";
    cin >> ca;
    cout <<"enter the elements of matrix a=\n";
    for (i=0;i<ra;i++)
    {
        for (j=0;j<ca;j++)
        {
            cin >> a[i][j];
        }
    }
    cout <<"enter rows for matrix b=";
    cin >> rb;
    cout <<"enter columns for matrix b=";
    cin >>cb;
    cout <<"enter the elements for matrix b=\n";
    for (i=0;i<rb;i++)
    {
        for (j=0;j<cb;j++)
        {
            cin >> b[i][j];
        }
    }
    if(ca != rb)
    {
        cout << "Matrices cannot be multiplied as number of columns of 1st matrix are not equal to number of rows of 2nd matrix.";
    }
    else{
    for (i=0;i<rb;i++)
    {
        for(j=0;j<ca;j++)
        {
            mul[i][j]=0;
            for(k=0;k<ca;k++)
            {
                mul[i][j]+=a[i][k]*a[k][j];
            }
        }
    }
    }
    for (i=0;i<rb;i++)
    {
        for (j=0;j<ca;j++)
        {
            cout << mul[i][j]<<" ";
        }
        cout << "\n";
    }
    return 0;
}