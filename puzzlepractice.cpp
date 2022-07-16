#include<bits/stdc++>
using namespace std;
int N =3;

struct Node{

    Node* parent;
    int level;
    int cost;
    int x,y;
    int mat[N][N]
}

Node* newNode(int intial[N][N],int x,int y,int newX,int newY,int level, NOde* parent  )
{
    Node* node = new node;
    node -> parent=parent;
    memcpy(node -> mat,mat,sizeof node->mat);
    swap(node->mat[x][y],node->mat[newX][newY]);
    node->cost = INT_MAX;
    node->level=0
    node->x=newX;
    node->y=newY;
    return node;
}

int calculateCost(int initial[N][N],int final[N][N]){

    int count;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(intial[i][j] && intial[N][N]!=final[N][N]){
                count+=1;
            }
        }
    }
    return count;



}

bool isSafe(int x,int y){
    return(x>=0 && x<N && y>=0 && y<N)
}

struct comp{
    bool operator(const Node* lhs,const Node* rhs) const{
        return (lhs->cost + lhs->level) > (rhs->cost + rhs->level);
    }
}

void printMatrix(int mat[N][N]):
{
    for(int i=0; i<3;i++){
        for(int j=0;j<3;j++){
            cout<<mat[i][j];
        }
        cout<<endl;
    }
}

void printPath(Node* root){
    if(root == NULL){
        return;
    }
    printPath(root->parent);
    printMatrix(root->mat);
    cout<<endl;
}

int row[] = { 1, 0, -1, 0 };
int col[] = { 0, -1, 0, 1 };


void solve(int initial[N][N],int x,int y,int final[N][N]){

    priority_queue<Node*,vector<Node*>,comp> pq;
    Node* root = newNode(initial,x,y,x,y,0,NULL);
    root->cost = calculateCost(initial,final);
    pq.push(root);
    while(!pq.empty()){

        Node* min = pq.top();
        pq.pop();

        if(min->cost==0){
            printPath(min);
            return;
        }

        for(int i=0;i<4;i++){
            if(isSafe(min->x+row[i],min->y+col[i]))
            {
                Node* child = newNode(min->mat,min->x,min->y,min->x+row[i],min->y+col[i],min->level+1,min);
                child->cost=calculateCost(child->mat,final);
                pq.push(child);
            }
        }




    }






}

int main{

    int intial[N][N]={
        {1,2,3},
        {5,6,0},
        {7,8,4}
    }

    int final[N][N]={
        {1,2,3},
        {5,8,6},
        {0,7,4}
    }

    int x = 1;
    int y = 2;
    solve(initial,x,y,final)
    return 0;

}