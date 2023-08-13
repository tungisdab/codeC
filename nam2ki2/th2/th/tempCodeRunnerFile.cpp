void addNode(node *root, int d, char w){
    if (w=='L')
        root->l= new node(d);
    else
        root->r= new node(d);
}