    #include <iostream>
    #include <iomanip>

    using namespace std;

/*

*/

int main()
{
    cout << "Pattern A" << endl;

    for (int row=0; row <10; row++)
    {
        for(int col = 0; col <= row; col++)
        {
            cout << "*";
        }
        cout << endl;
    }

    cout << endl << endl;

    cout << "Pattern B" << endl;

    for(int row=10; row>0; row--)
    {
        for(int col=0; col < row; col++)
        {
            cout << "*";
        }
            cout << endl;
    }
    cout << endl << endl;

    cout << "Pattern C" << endl;

    for(int row=0; row<10; row++)
    {
        for(int space =0; space < 9 - row; space++)
        {
            cout << " ";
        }
        for(int col=0; col <= row; col++)
        {
            cout << "*";
        }
        cout << endl;
    }

    cout << endl << endl;

    cout << "Pattern D" << endl;

    for (int row=10; row > 0; row--)
    {
        for(int space=10; space > row; space--)
        {
            cout << " ";
        }
        for(int col=0; col < row; col++)
        {
            cout << "*";
        }
        cout << endl;
    }

    cout << endl << endl;
    return 0;
}
