#include<iostream>
using namespace std;

bool isSafe(int board[][10],int i,int j, int n){
    //you can check for column
    for(int row=0;row<i;row++){
        if(board[row][j]==1){
            return false;
        }
    }

    //check for left diagonal
    int x=i;
    int y=j;
    while(x>=0 && y>=0){
        if(board[x][y]==1){
            return false;
        }
        x--;
        y--;
    }
    //for left diagonal
    x=i;
    y=j;
    while(x>=0 && y<n){
        if(board[x][y]==1){
            return false;
        }
        x--;
        y++;
    }

    //the position is now safe, column and diagonals
    return true;
}


bool solveNQueen(int board[][10],int i,int n){
   //base case
   if(i==n){
    //you have to successfully placed queens in n rows (0...n-1)
    //print the board
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(board[i][j]==1){
                cout<<"Q ";
            }
            else{
                cout<<"_ ";
            }
        }
        cout<<endl;
    }
    cout<<endl;
    return false; //false implies it will search for another config now. i.e. we get all the possible ans
      //agar return truekrenge to sirf 1 ans aega, but here multiple ans are possible
   }
   //rec case
   //try toplace the queen in the current row and call on the remaining part which will be solved by reccursiom
   for(int j=0;j<n;j++){
    //check if the queen is safe or not, i.e no queen in its left,right diagonal and that column
   if(isSafe(board,i,j,n)){
      //place the queen assuming i j is right position
      board[i][j]=1;
      bool nextQueenRakhPaye= solveNQueen(board,i+1,n);
      if(nextQueenRakhPaye){
        return true;
      }
      //means i,j is not right position
      board[i][j]=0; //backtracking krli
     }
   }
   //you have tried for all positions in a row, but couldnt place a queen in that row
   return false;

}

int main(){
    int n;
    cin>>n;
  
    int board[10][10]={0};
    solveNQueen(board,0,n);
    return 0;
}