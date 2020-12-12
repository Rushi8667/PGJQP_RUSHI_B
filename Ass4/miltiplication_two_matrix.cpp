#include<iostream>
using namespace std;
class add_matrix{
	int m, n, p, q, i, j, A[5][5], B[5][5], C[5][5];
	public:
		void accept();
		void display();
};
void add_matrix::accept()
{
	cout << "Enter rows and column of matrix A : ";
    cin >> m >> n;
    cout << "Enter rows and column of matrix B : ";
    cin >> p >> q; 
    if ((m != p) && (n != q))
    {
        cout << "Matrices cannot be added!";
        exit(0);
    }	
    cout << "Enter elements of matrix A : ";
    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++)
            cin >> A[i][j];
	cout << "Enter elements of matrix B : ";
    for (i = 0; i < p; i++)
        for (j = 0; j < q; j++)
            cin >> B[i][j];
}
void add_matrix::display()
{
	for (i = 0; i < m; i++)
        for (j = 0; j < n; j++)
            C[i][j] = A[i][j] * B[i][j];
    cout << "Sum of matrices\n";
    for (i = 0; i < m; i++)
    {    for (j = 0; j < n; j++)
            cout << C[i][j] << "  ";	
        cout << "\n";
    }
}
int main()
{
	add_matrix matrix;
	matrix.accept();
	matrix.display();
}


