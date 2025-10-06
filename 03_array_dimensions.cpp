// Array dimensions

// array[] : 1 dimension
// array[row][col] : 2 dimension
// array[layer][row][col] : 3 dimension

#include <iostream>
using namespace std;

int main()
{

    cout << "--------1D Array--------" << endl;

    int arr1[5] = {1, 2, 3, 4, 5};

    int arr_len = sizeof(arr1)/sizeof(arr1[0]);

    // print
    for (int i = 0; i < arr_len; i++)
    {
        cout << arr1[i] << " ";
    }



    cout << endl;
    cout << "--------2D Array--------" << endl;
    
    // array[rows][colums]
    int arr2[3][4] = {
        {11, 12, 13, 14},
        {15, 16, 17, 18},
        {19, 20, 21, 22}};

        // count rows and columns
    int rows = sizeof(arr2) / sizeof(arr2[0]);
    int cols = sizeof(arr2[0]) / sizeof(arr2[0][0]);
    
    for (int a = 0; a < rows; a++)
    {
        for (int b = 0; b < cols; b++)
        {
            cout << arr2[a][b] << " ";
        }
        cout << endl;
        
    }
    
    
    
    cout << "--------3D Array--------" << endl;
    
    // array[layers][rows][colums]
    int arr3[2][3][4] = {
        {
            {1, 2, 3, 4},
            {5, 6, 7, 8},
            {9, 10, 11, 12}
        },
        {
            {13, 14, 15, 16},
            {17, 18, 19, 20},
            {21, 22, 23, 24}
        }
    };

    // no of layers, rows, columns
    int layers = sizeof(arr3) / sizeof(arr3[0]);
    int rows3d = sizeof(arr3[0]) / sizeof(arr3[0][0]);
    int cols3d = sizeof(arr3[0][0]) / sizeof(arr3[0][0][0]);
    
    // print 3d array
    
    for (int i = 0; i < layers; i++)
    {
        cout << "Layer " << i+1 << endl;
        for (int j = 0; j < rows3d; j++)
        {
            for (int k = 0; k < cols3d; k++)
            {
                cout << arr3[i][j][k] << " ";
            }
            cout << endl;
        }
        cout << endl;
        
    }
    
    return 0;
}