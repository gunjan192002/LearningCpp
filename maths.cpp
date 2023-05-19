
#include<iostream>
#include<math.h>
#include<vector>
#include<iomanip>


using namespace std ;
int main() {
    int n;
    cout<< "Its is Gunjan Agrawal 21115047"<<endl;
    cout << "Enter the number equations ";
    cin >> n;
    double a[n][n+1];
    cout << "Enter the matrix A in order coefficients,b1 and so on " << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n+1; j++) {
            cin >> a[i][j];
        }
    }
    int places ;
    double x[n], y[n];
    double tolerance;
    int maxIterations;
    cout << "Enter the value upto decimal places you want iterations to be : ";
    cin >> places;
    cout << "Enter the number of maximium iterations possible: ";
    cin >> maxIterations;
    tolerance = 10^(-places);
    int iter = 0;
    double error;
    do {
        iter++;
        for (int i = 0; i < n; i++) {
            y[i] = x[i];
            x[i] = a[i][n] / a[i][i];
            for (int j = 0; j < n; j++) {
                if (j == i) continue;
                x[i] -= a[i][j] / a[i][i] * x[j];
            }
        }
        error = 0.0;
        for (int i = 0; i < n; i++) {
            error +=    abs(x[i] - y[i]);
        }
    } while (error > tolerance && iter < maxIterations);
        cout << "Solution found in " << iter << " iterations:" <<   endl;
        for (int i = 0; i < n; i++) {
            cout << "x[" << i+1 << "] = " <<    setprecision(7) << x[i] <<  endl;
        }
    
    return 0;
}