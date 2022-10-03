#include <iostream>
using namespace std;
int **createMatrix(int row,int col){ 
    int **array = new int*[col];
    for(int i=0;i<col;i++)
 *(array+i) = new int[row];   
    return array;
}
void printMatrix(int **array,int row,int col){
    for(int i=0;i<col;i++){
        for(int j=0;j<row;j++)
            cout<<"\t"<<*(*(array+i)+j)<<"\t";
        cout<<endl;
    }
}
void readMatrix(int **array,int row,int col){
int q=1;
    for(int i=0;i<col;i++){
        for(int j=0;j<row;j++){
cout<<"Element"<<q<<": ";    q++;    

            cin>>*(*(array+i)+j);}}
}
int **addMatrix(int **array1,int **array2,int row,int col){
    int **sum = createMatrix(row,col);
    for(int i=0;i<col;i++)
        for(int j=0;j<row;j++)
            *(*(sum+i)+j)=*(*(array1+i)+j) + *(*(array2+i)+j);
    return sum;
}
int **diffMatrix(int **array1,int **array2,int row,int col){
    int **diff = createMatrix(row,col);
    for(int i=0;i<col;i++)
        for(int j=0;j<row;j++)
            *(*(diff+i)+j)=*(*(array1+i)+j) - *(*(array2+i)+j);
    return diff;
}
int main() {
    cout<<"Enter row and column of matrix:\t";
    int row,col;
    cin>>row>>col;
    int **matrix1=createMatrix(row,col);
    int **matrix2=createMatrix(row,col);
cout<<"Enter the first matrix element"<<endl;  
    readMatrix(matrix1,row,col);
cout<<"Enter the second matrix element"<<endl;  
    readMatrix(matrix2,row,col);
    int **sum = addMatrix(matrix1,matrix2,row,col);
    int **diff = diffMatrix(matrix1,matrix2,row,col);
    cout<<"Addition of the matrix"<<endl;    
    printMatrix(sum,row,col);
    cout<<"Subtraction of the matrix"<<endl;    
    printMatrix(diff,row,col);

    return 0;
}