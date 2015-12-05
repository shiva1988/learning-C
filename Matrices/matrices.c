#include <stdio.h>
#include <stdlib.h>
#include "matrices.h"

// Constructor that initializes matrix in a sensible way
MATRIX new_matrix(const INDEX rows, const INDEX cols) {
  MATRIX m;
  m.rows = rows;
  m.cols = cols;
  m.mat = (VALUE *)calloc(rows * cols, sizeof(VALUE));
  if (m.mat == NULL) {
    fprintf(stderr, "Failed to allocate new_matrix\n");
  }
  return m;
}

void delete_matrix(MATRIX m) {
  // Free memory that was allocated, to avoid memory leak
  free(m.mat);
}

void set(MATRIX *m, const INDEX row, const INDEX col, const VALUE v) {
  // Find the pointer to the block of memory containing 
  // the matrix mat, then jump forward row number of rows
  // and col number of columns.  Inside that block of memory
  // insert the value v.
  if (row < 0 || col < 0 || row >= m->rows || col >= m->cols) {
    fprintf(stderr, "ERROR: indexing matrix outside bounds\n");
    return;
  }
  *(m->mat + (m->cols * row) + col) = v;
}

VALUE get(const MATRIX *m, const INDEX row, const INDEX col) {
  // Find the pointer to the block of memory containing 
  // the matrix mat, then jump forward row number of rows
  // and col number of columns.  Return the value inside.
  if (row < 0 || col < 0 || row >= m->rows || col >= m->cols) {
    fprintf(stderr, "ERROR: indexing matrix outside bounds\n");
    return 0;
  }
  return *(m->mat + m->cols * row + col);
}

MATRIX matprod(MATRIX *a,MATRIX *b){
  MATRIX M=new_matrix(a->rows,b->cols);
  VALUE val;
  INDEX i,j,k,l,s;
  s=a->cols;
  l=b->rows;
  if(s!=l){
    fprintf(stderr,"Product between the given matrices is undefined\n");
    M.cols=0;
    M.rows=0;
  }
  else{
    for(i=0; i<M.rows; i++){
      for(j=0; j<M.cols; j++){
        val=0;
        for(k=0; k<s; k++){
          val=val+get(a,i,k)*get(b,k,j);
        }
        set(&M,i,j,val);
      }
    }
  }
  return M;
}

// Abstraction layer in case implementation of VALUE changes later
void print_value(const VALUE v) {
  printf("%Lf", v);
}

void print_matrix(const MATRIX *m) {
  INDEX r, c, maxr, maxc;
  maxr = m->rows;
  maxc = m->cols;

  printf("Matrix (rows: %d, cols: %d) \n", maxr, maxc);
  for(r=0; r<maxr; r++) {
    for(c=0; c<maxc; c++) {
      // print values of matrix separated by tabs
      // with each row on a separate line
      print_value(get(m, r, c));
      printf(" ");
    }
    puts("");
  }
  puts("");
}
