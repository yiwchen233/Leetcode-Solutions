/*
// Definition for a QuadTree node.
class Node {
public:
    bool val;
    bool isLeaf;
    Node* topLeft;
    Node* topRight;
    Node* bottomLeft;
    Node* bottomRight;
    
    Node() {
        val = false;
        isLeaf = false;
        topLeft = NULL;
        topRight = NULL;
        bottomLeft = NULL;
        bottomRight = NULL;
    }
    
    Node(bool _val, bool _isLeaf) {
        val = _val;
        isLeaf = _isLeaf;
        topLeft = NULL;
        topRight = NULL;
        bottomLeft = NULL;
        bottomRight = NULL;
    }
    
    Node(bool _val, bool _isLeaf, Node* _topLeft, Node* _topRight, Node* _bottomLeft, Node* _bottomRight) {
        val = _val;
        isLeaf = _isLeaf;
        topLeft = _topLeft;
        topRight = _topRight;
        bottomLeft = _bottomLeft;
        bottomRight = _bottomRight;
    }
};
*/

class Solution {
public:
    vector<vector<int>> grid;
    Node* construct(vector<vector<int>>& grid) {
        this->grid=grid;
        int n=grid.size();
        return constructTree(0,n,0,n);
    }
    Node *constructTree(int r0, int r1, int c0, int c1){
        for(int i=r0; i<r1; i++)
            for(int j=c0; j<c1; j++)
                if(grid[i][j]!=grid[r0][c0])
                    return new Node(true,false,constructTree(r0,(r0+r1)/2,c0,(c0+c1)/2),constructTree(r0,(r0+r1)/2,(c0+c1)/2,c1),constructTree((r0+r1)/2,r1,c0,(c0+c1)/2),constructTree((r0+r1)/2,r1,(c0+c1)/2,c1));
        return new Node(grid[r0][c0], true);
    }
};
