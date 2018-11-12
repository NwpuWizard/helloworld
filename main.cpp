#include <iostream>
#include <ctime>
#include <Eigen/Core>
#include <Eigen/Dense>
#define MATRIX_SIZE 50;

using namespace std;

int main(int argc, char** argv)
{
    Eigen::Matrix<float,2,3> Matrix23;
    Matrix23<<1,2,3,4,5,6;
    cout<<Matrix23<<endl;
    Eigen::Matrix<float,3,2> Matrix32;
    Matrix32<<1,2,3,4,5,6;
    cout<<Matrix32<<endl;
    Eigen::Matrix<float,2,2> Matrix22;
    Matrix22=Matrix23*Matrix32;
    cout<<Matrix22<<endl;
    Eigen::Matrix<float,3,3> Matrix33;
    Matrix33=Matrix32*Matrix23;
    cout<<Matrix33<<endl;
    return 0;
}
