//Given m*n matrix with some cells as blocked,u have to-
//1) Find path from sec to destination
//2) Count the num of paths from src to dest
// 3) Print all possible paths
//Given that rat can move only in forward and downward direction

#include<iostream>
using namespace std;

bool ratInMaze(char maze[10][10], int soln[][10],int i,int j,int m, int n){ //i & j are the coordinates of current pos 
   //base case
if(i==m && j==n){
    soln[m][n]=1;
   //print the path
   for(int i=0;i<=m;i++){
    for(int j=0;j<=n;j++){
        cout<<soln[i][j]<<" ";
    }
    cout<<endl;
   }
   cout<<endl;
   return true;
   }

if(i>m or j>n){   //implies hum maze ke bahar chale gaye
    return false;
}

if(maze[i][j]=='X'){
    return false;
}
//assume that the path exists through the current cell
soln[i][j]=1;

bool rightSuccess=ratInMaze(maze,soln,i,j+1,m,n);
bool downSuccess=ratInMaze(maze,soln,i+1,j,m,n);

//backtracking
//rec call ke baad vale code vapas jane vale hote
 soln[i][j]=0;

if(rightSuccess || downSuccess){
    return true;
}
else return false;

}


int main(){
    char maze[10][10]={
    "0000",
    "00X0",
    "000X",
    "0X00",      
    };

int soln[10][10]={0};
int m=4;int n=4;

bool ans= ratInMaze(maze,soln,0,0,m-1,n-1);
if(ans==false){
    cout<<"path doesn't exist!  "<<endl;
}
    return 0;
}