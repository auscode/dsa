#include <iostream>
#include <vector>
using namespace std;


void createMatrix(vector<vector<int>> &matrixC,int r,int c){
    matrixC.resize(r,vector<int>(c));
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout<<"["<<i<<"]"<<"["<<j<<"]: ";
            cin>>matrixC[i][j];
        }
    }
    cout<<endl;
}
void printMatrix(const vector<vector<int>> &matrixP){
   for(int i=0;i<matrixP.size();i++){
        for(int j=0;j<matrixP[i].size();j++){
            std::cout<<matrixP[i][j]<<" ";
        }
        cout<<"\n";
    }
    cout<<endl;
}

void add(const vector<vector<int>> &A, const vector<vector<int>> &B ){
    vector<vector<int>> res (A.size(),vector<int>(B.size(),0));
    cout<<"A + B: \n";
    for(int i =0;i<A.size();i++){
        for(int j =0;j<B.size();j++){
            int sum = A[i][j] + B[i][j];
            res[i][j] = sum;
        }
    }
    printMatrix(res);
}

void sub(const vector<vector<int>> &A, const vector<vector<int>> &B ){
    vector<vector<int>> res (A.size(),vector<int>(B.size(),0));
    cout<<"A - B: \n";
    for(int i =0;i<A.size();i++){
        for(int j =0;j<B.size();j++){
            int dif = A[i][j] - B[i][j];
            res[i][j] = dif;
        }
    }
    printMatrix(res);
}
void mul(const vector<vector<int>> &A, const vector<vector<int>> &B ){
    vector<vector<int>> res (A.size(),vector<int>(B.size(),0));
    cout<<"A * B: \n";
    for(int i =0;i<A.size();i++){
        for(int j =0;j<B.size();j++){
            int cros = A[i][j] * B[i][j];
            res[i][j] = cros;
        }
    }
    printMatrix(res);
}

void trans(const vector<vector<int>> &T){
    vector<vector<int>> res(T[0].size(),vector<int>(T.size()));

    for(int i=0;i<res.size();i++){
        for(int j=0;j<res[i].size();j++){
            res[i][j] = T[j][i];
        }
    }
    printMatrix(res);
}


void exited(){
    cout<<"Exiting... Goodbye!"<<endl;
    cout<<"=== Demo Complete ==="<<endl;
}

void calculateMatrix(){
    int row{},col{};
    cout<<"Enter number of rows: ";
    cin>>row;
    cout<<"Enter number of columns: ";
    cin>>col;
    
    vector<vector<int>> matrixA;
    cout<<"Enter elements for Matrix A:\n";
    createMatrix(matrixA,row,col);
    
    vector<vector<int>> matrixB;
    cout<<"Enter elements for Matrix B:\n";
    createMatrix(matrixB,row,col);

    cout<<"Matrix A: \n";
    printMatrix(matrixA);
    cout<<"Matrix B: \n";
    printMatrix(matrixB);

    int input{0};
    while(true){
        std::cout<<"--------------------------------------\n";
        std::cout<<"Select an operation:\n";
        std::cout<<"1. Addition (+)\n";
        std::cout<<"2. Subtraction (-)\n";
        std::cout<<"3. Multiplication (*)\n";
        std::cout<<"4. Transpose of A \n";
        std::cout<<"5. Transpose of B\n";
        std::cout<<"6. Exit\n";
        std::cout<<"--------------------------------------\n";
        std::cout<<"Enter your choice: ";
        std::cin>>input;
        switch(input){
            case 1:
                add(matrixA,matrixB);
                break;
            case 2:
                sub(matrixA,matrixB);
                break;
            case 3:
                mul(matrixA,matrixB);
                break;
            case 4:
                cout<<"Transpose of A:\n";
                trans(matrixA);
                break;
            case 5:
                cout<<"Transpose of B:\n";
                trans(matrixB);
                break;
            case 6:
                exited();
                return;
            default:
                std::cout << "Invalid choice! Try again.\n";
        }

    }
    return;
}

int main (){
    cout<<"=== Matrix Operations Demo ===\n";

    calculateMatrix();

    return 0;
}