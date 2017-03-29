#include<iostream>
using namespace std;

int boxVolnum( int length =1 ,int width = 1 , int height = 1  );

int main()
{

    cout << "The default box  volumes is: " << boxVolnum();

    cout << "\n\nThe volumeof a box with length 10 ,\n" <<"width 1 and height 1 is: " << boxVolnum(10);

    cout << "\n\nThevolume of a box with length 10,\n"  <<"width 5 and height 1 is: " << boxVolnum(10,5);

    cout << "\n\nThevolume of a box with length 10,\n"  <<"width 5 and height 2 is: " << boxVolnum(10,5,2) << endl;


}


int boxVolnum(int a,int b, int c)
{
    return a*b*c;
}
