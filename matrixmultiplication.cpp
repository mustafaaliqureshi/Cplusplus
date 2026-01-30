#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	const int N = 2; // for 2x2 matrix size
    int a[N][N], b[N][N], c[N][N];
	for(int i=0; i<N; i++)
	{
		for(int j=0; j<N; ++j)
		{
			cout << "Enter element a[" << (i+1) << "][" << (j+1) << "]: ";
			cin >> a[i][j];
			cout << "Enter element b[" << (i+1) << "][" << (j+1) << "]: ";
			cin >> b[i][j];
		}
	}
    for(int i=0; i<N; i++)
    {
        for(int j=0; j<N; ++j)
        {
            c[i][j] = 0;
            for(int k=0; k<N; k++)
            {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }
    for(int i=0; i<N; i++)
    {
        for(int j=0; j<N; ++j) //sahi tariqa 0 na start e 2d array la
        {
            //cout << c[i][j] << " ";
			cout << setw(6) << c[i][j]; //for better formatting
        }
        cout << endl;
    }
    return 0;
}