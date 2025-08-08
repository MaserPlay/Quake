#ifndef LIGHT_H
#define LIGHT_H

#include "cmdlib.h"
#include "bspfile.h"
#include "mathlib.h"
#include "entities.h"
#include "threads.h"

#define ON_EPSILON 0.1

void LoadNodes( char *file );
qboolean TestLine( vec3_t start, vec3_t stop );

void LightFace( int surfnum );
void LightLeaf( dleaf_t *leaf );

void MakeTnodes();

extern float scaledist;
extern float scalecos;
extern float rangescale;

extern int c_culldistplane, c_proper;

byte *GetFileSpace( int size );
extern byte *filebase;

extern vec3_t bsp_origin;
extern vec3_t bsp_xvector;
extern vec3_t bsp_yvector;

void TransformSample( vec3_t in, vec3_t out );
void RotateSample( vec3_t in, vec3_t out );

extern qboolean extrasamples;

extern float minlights[MAX_MAP_FACES];

#endif  // LIGHT_H
