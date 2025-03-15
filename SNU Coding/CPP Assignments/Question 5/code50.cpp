/*
  Create a class Matrix that represents a 2x2 matrix with private attributes a, b, c, and d. Implement a friend function multiply that takes two Matrix objects as arguments and multiplies them using the matrix multiplication rule. Write a program to create two Matrix objects, set their values, and use the friend function to multiply them and display the result.
*/

#include <iostream>
using namespace std;

class Matrix
{
private:
    int a, b, c, d;

public:
    Matrix()
    {
        a = b = c = d = 0;
    }

    friend Matrix multiply(Matrix m1, Matrix m2);

    void setValues(int a, int b, int c, int d)
    {
        this->a = a;
        this->b = b;
        this->c = c;
        this->d = d;
    }

    void display()
    {
        cout << a << " " << b << endl;
        cout << c << " " << d << endl;
    }
};

Matrix multiply(Matrix m1, Matrix m2)
{
    Matrix result;
    result.a = m1.a * m2.a + m1.b * m2.c;
    result.b = m1.a * m2.b + m1.b * m2.d;
    result.c = m1.c * m2.a + m1.d * m2.c;
    result.d = m1.c * m2.b + m1.d * m2.d;
    return result;
}

int main()
{
    Matrix matrix1, matrix2, result;
    int a, b, c, d;
    cout << "Enter values for the first matrix (a, b, c, d): " << endl;
    cin >> a >> b >> c >> d;
    matrix1.setValues(a, b, c, d);
    cout << "Enter values for the second matrix (a, b, c, d): " << endl;

    cin >> a >> b >> c >> d;
    matrix2.setValues(a, b, c, d);
    result = multiply(matrix1, matrix2);
    cout << "Result of matrix multiplication:" << endl;
    result.display();
    return 0;
}