//
// trilib.h: header file for loading triangles from an Alias triangle file
//
#ifndef TRILIB_H
#define TRILIB_H

#define MAXTRIANGLES 2048

typedef struct {
  vec3_t verts[3];
} triangle_t;

void LoadTriangleList( char *filename, triangle_t **pptri, int *numtriangles );

#endif  // TRILIB_H
