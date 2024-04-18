#include <iostream>

using namespace std;

int main()
{
    cout << "DMA for 2D array: " << endl;
    /// take row cols
    int r, c;
    cin >> r >> c;
    int **pt = new int*[r]; /// double pointer; new int*[r] for init rows
    for(int i=0; i<r; i++){
        pt[i] = new int[c]; /// init cols as well
    }
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            cin >> pt[i][j];
        }
    }
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
           cout << pt[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
