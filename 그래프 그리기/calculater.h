typedef struct node{        ///parent,left child,right child, data, whats calculater, position
    struct node* l;
    struct node* r;
    double data;
    int calc;
    int index;
}nd;

double calculater(double arcs,char *str);
int buildTree(char *str);
double solveEquation(double x,double y);
nd returnTree();
