#include <iostream>
#include<Eigen/Dense>

using namespace std;
using namespace Eigen;

int main(){
	// define 3x3 matrix of floats and set its entries to zero -explicit declaration
	Matrix <float, 3, 3> matrixA;
	matrixA.setZero();
	cout << matrixA <<endl;
}
