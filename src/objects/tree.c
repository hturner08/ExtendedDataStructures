#include "tree.h"


struct tree_s{
  Node *root;
  size_t   size;
  size_t   capacity;
}
void tree_destroy_cb(Tree *tree, void (*cb) (void*))
{
    tree_destroy_cb(stack->v, cb);
    free(stack);
}
