#ifndef LINMATH_H
#define LINMATH_H

#include <math.h>
#include <string.h>

#ifdef LINMATH_NO_INLINE
#define LINMATH_H_FUNC static
#else
#define LINMATH_H_FUNC static inline
#endif

#define LINMATH_H_DEFINE_VEC(N) LINMATH_H_DEFINE_VEC_TYPE(N, float) 
#define LINMATH_H_DEFINE_VEC_TYPE(N,T) LINMATH_H_DEFINE_VEC_TYPE_PREFIX(N, T, )

#define sqrtd(x) sqrt(x)

#define LINMATH_H_DEFINE_VEC_SET(T,P) \
    /** @brief Set bidimensional vector values. \
	  r = [x,y] \
      @param[out] r Output vector \
      @param[in] x First component \
      @param[in] y Second component \
    */ \
    LINMATH_H_FUNC void vec2##P##_set(vec2##P r, const T x, const T y) \
    { \
        r[0] = x; \
        r[1] = y; \
    } \
    /** @brief Set tridimensional vector values. \
	  r = [x,y,z] \
      @param[out] r Output vector \
      @param[in] x First component \
      @param[in] y Second component \
      @param[in] z Third component \
    */ \
    LINMATH_H_FUNC void vec3##P##_set(vec3##P r, const T x, const T y, const T z) \
    { \
        r[0] = x; \
        r[1] = y; \
        r[2] = z; \
    } \
    /** @brief Set 4dimensional vector values. \
	  r = [x,y,z,w] \
      @param[out] r Output vector \
      @param[in] x First component \
      @param[in] y Second component \
      @param[in] z Third component \
      @param[in] w Fourth component \
    */ \
    LINMATH_H_FUNC void vec4##P##_set(vec4##P r, const T x, const T y, const T z, const T w) \
    { \
        r[0] = x; \
        r[1] = y; \
        r[2] = z; \
        r[3] = w; \
    } \
    LINMATH_H_FUNC void vec2##P##_copy(vec2##P r, const vec2##P s) \
    { \
        r[0] = s[0]; \
        r[1] = s[1]; \
    } \
    LINMATH_H_FUNC void vec3##P##_copy(vec3##P r, const vec3##P s) \
    { \
        r[0] = s[0]; \
        r[1] = s[1]; \
        r[2] = s[2]; \
    } \
    LINMATH_H_FUNC void vec4##P##_copy(vec4##P r, const vec4##P s) \
    { \
        r[0] = s[0]; \
        r[1] = s[1]; \
        r[2] = s[2]; \
        r[3] = s[3]; \
    } \
    LINMATH_H_FUNC void vec4##P##_from_vec3(vec4##P r, const vec3##P s) \
    { \
        r[0] = s[0]; \
        r[1] = s[1]; \
        r[2] = s[2]; \
        r[3] = 0.; \
    } \
    LINMATH_H_FUNC void vec3##P##_from_vec4(vec3##P r, const vec4##P s) \
    { \
        r[0] = s[0]; \
        r[1] = s[1]; \
        r[2] = s[2]; \
    } \

#define LINMATH_H_DEFINE_VEC_TYPE_PREFIX(N,T,P)  \
    /** @brief Vector datatype. \
    */ \
	typedef T vec##N##P[N]; \
    /** @brief Vector invert. \
	  r = -a \
      @param[out] r Result \
      @param[in]  a Vector to invert \
    */ \
	LINMATH_H_FUNC void vec##N##P##_inverted(vec##N##P r, const vec##N##P a) \
	{ \
		int i; \
		for(i=0; i<N; ++i) \
		  r[i] = -a[i]; \
	} \
    /** @brief In-place vector invert. \
	  a = -a \
      @param[in,out] a Vector to invert \
    */ \
	LINMATH_H_FUNC void vec##N##P##_invert(vec##N##P a) \
	{ \
		int i; \
		for(i=0; i<N; ++i) \
		  a[i] = -a[i]; \
	} \
    /** @brief Add two vectors. \
	  r = a + b \
      @param[out] r Result \
      @param[in] a First parcel \
      @param[in] b Second parcel \
    */ \
	LINMATH_H_FUNC void vec##N##P##_added(vec##N##P r, const vec##N##P a,const vec##N##P b) \
	{ \
		int i; \
		for(i=0; i<N; ++i) \
		  r[i] = a[i] + b[i]; \
	} \
    /** @brief In-place add vector. \
	  a += b \
      @param[in,out] a First parcel and result\
      @param[in] b Second parcel\
     */ \
	LINMATH_H_FUNC void vec##N##P##_add(vec##N##P a,const vec##N##P b) \
	{ \
		int i; \
		for(i=0; i<N; ++i) \
		  a[i] += b[i]; \
	} \
	/** @brief Subtract two vectors. \
	  r = a - b \
      @param[out] r Difference \
      @param[in] a Minuend \
      @param[in] b Subtrahend \
     */ \
	LINMATH_H_FUNC void vec##N##P##_subed(vec##N##P r, const vec##N##P a, const vec##N##P b) \
	{ \
		int i; \
		for(i=0; i<N; ++i) \
		  r[i] = a[i] - b[i]; \
	} \
	/** @brief In-place subtract vector.  a -= b \
      @param[in,out] a Minuend and difference\
      @param[in] b Subtrahend\
     */ \
	LINMATH_H_FUNC void vec##N##P##_sub(vec##N##P a, const vec##N##P b) \
	{ \
		int i; \
		for(i=0; i<N; ++i) \
		  a[i] -= b[i]; \
	} \
	LINMATH_H_FUNC void vec##N##P##_scaled(vec##N##P r, const vec##N##P v, const T s) \
	{ \
		int i; \
		for(i=0; i<N; ++i) \
		  r[i] = v[i] * s; \
	} \
	LINMATH_H_FUNC void vec##N##P##_scale(vec##N##P v, const T s) \
	{ \
		int i; \
		for(i=0; i<N; ++i) \
		  v[i] *= s; \
	} \
	LINMATH_H_FUNC T vec##N##P##_dot(const vec##N##P a, const vec##N##P b) \
	{ \
		T p = 0.##P; \
		int i; \
		for(i=0; i<N; ++i) \
		  p += b[i]*a[i]; \
		return p; \
	} \
	LINMATH_H_FUNC void vec##N##P##_reflected(vec##N##P r, const vec##N##P v, const vec##N##P n)\
	{\
		T p  = 2.##P*vec##N##P##_dot(v, n);\
		int i;\
		for(i=0; i<N; ++i)\
		  r[i] = v[i] - p*n[i];\
	}\
	LINMATH_H_FUNC void vec##N##P##_reflect(vec##N##P v, const vec##N##P n)\
	{\
		T p  = 2.##P*vec##N##P##_dot(v, n);\
		int i;\
		for(i=0;i<N;++i)\
		  v[i] -= p*n[i];\
	}\
	LINMATH_H_FUNC T vec##N##P##_len(const vec##N##P v) \
	{ \
		return sqrt##P(vec##N##P##_dot(v,v)); \
	} \
	LINMATH_H_FUNC float vec##N##P##_len2(const vec##N##P v) \
	{ \
		return vec##N##P##_dot(v,v); \
	} \
	LINMATH_H_FUNC void vec##N##P##_normalized(vec##N##P r,const vec##N##P v) \
	{ \
		T k = 1.##P / vec##N##P##_len(v); \
		vec##N##P##_scaled(r, v, k); \
	} \
	LINMATH_H_FUNC void vec##N##P##_normalize(vec##N##P v) \
	{ \
		T k = 1.##P / vec##N##P##_len(v); \
		vec##N##P##_scale(v, k); \
	} \
	LINMATH_H_FUNC void vec##N##P##_min(vec##N##P r, const vec##N##P a, const vec##N##P b) \
	{ \
		int i; \
		for(i=0; i<N; ++i) \
		r[i] = a[i]<b[i] ? a[i] : b[i]; \
	} \
	LINMATH_H_FUNC void vec##N##P##_max(vec##N##P r, const  vec##N##P a,const vec##N##P b) \
	{ \
		int i; \
		for(i=0; i<N; ++i) \
		r[i] = a[i]>b[i] ? a[i] : b[i]; \
	} \


LINMATH_H_DEFINE_VEC(2)
LINMATH_H_DEFINE_VEC(3)
LINMATH_H_DEFINE_VEC(4)

LINMATH_H_DEFINE_VEC_TYPE_PREFIX(2,double,d)
LINMATH_H_DEFINE_VEC_TYPE_PREFIX(3,double,d)
LINMATH_H_DEFINE_VEC_TYPE_PREFIX(4,double,d)

LINMATH_H_DEFINE_VEC_TYPE_PREFIX(2,float,f)
LINMATH_H_DEFINE_VEC_TYPE_PREFIX(3,float,f)
LINMATH_H_DEFINE_VEC_TYPE_PREFIX(4,float,f)

LINMATH_H_DEFINE_VEC_SET(double,d)
LINMATH_H_DEFINE_VEC_SET(float,f)
LINMATH_H_FUNC double vec2_cross(vec2 a, vec2 b)
{
	// The cross product is only defined in a three-dimensional Euclidean space.
	// Return the magnitude of 3D cross product.
	return a[0]*b[1] - a[1]*b[0];
}

LINMATH_H_FUNC void vec3_cross(vec3 r, const vec3 a, const vec3 b)
{
	r[0] = a[1]*b[2] - a[2]*b[1];
	r[1] = a[2]*b[0] - a[0]*b[2];
	r[2] = a[0]*b[1] - a[1]*b[0];
}
LINMATH_H_FUNC void vec4_cross(vec4 r, const vec4 a, const vec4 b)
{
	r[0] = a[1]*b[2] - a[2]*b[1];
	r[1] = a[2]*b[0] - a[0]*b[2];
	r[2] = a[0]*b[1] - a[1]*b[0];
	r[3] = 1.f;
}

/**
 * @brief 4x4 Matrix data type
 */
typedef float mat4x4[4][4];

/**
 * @brief mat4x4_make_identity M = Identity Matrix
 * @param[out] M
 */
LINMATH_H_FUNC void mat4x4_make_identity(mat4x4 M)
{
	memset(M,0,16*sizeof(float));
	int i, j;
	for(i=0,j=0; i<4; ++i,++j)
		M[i][j] =1.0f;
}

LINMATH_H_FUNC void mat4x4_make_translation(mat4x4 M,
										   const float x,const float y,const float z)
{
	mat4x4_make_identity(M);
	M[3][0] = x;
	M[3][1] = y;
	M[3][2] = z;
}

LINMATH_H_FUNC void mat4x4_make_scaling(mat4x4 M,
									   const float x,const float y,const float z)
{
	mat4x4_make_identity(M);
	M[0][0] = x;
	M[1][1] = y;
	M[2][2] = z;
}

LINMATH_H_FUNC void mat4x4_make_rotation(mat4x4 M,
										const float x,const float y,const float z, const float angle_rad)
{
	const float cA = cosf(angle_rad);
	const float c = 1.0f-cA;
	vec3 T;
	vec3 t = {x,y,z};
	vec3_normalize(t);
	vec3_scaled(T,t,c);
	const float sA = sinf(angle_rad);

	M[0][0]= T[0]*t[0]+cA;
	M[0][1]= T[0]*t[1]+t[2]*sA;
	M[0][2]= T[0]*t[2]-t[1]*sA;
	M[0][3]= 0.0f;

	M[1][0]= T[1]*t[0]-t[2]*sA;
	M[1][1]= T[1]*t[1]+cA;
	M[1][2]= T[1]*t[2]+t[0]*sA;
	M[1][3]= 0.0f;

	M[2][0]= T[2]*t[0]+t[1]*sA;
	M[2][1]= T[2]*t[1]-t[0]*sA;
	M[2][2]= T[2]*t[2]+cA;
	M[2][3]= 0.0f;

	M[3][0]= 0.0f;
	M[3][1]= 0.0f;
	M[3][2]= 0.0f;
	M[3][3]= 1.0f;
}

LINMATH_H_FUNC void mat4x4_copy(mat4x4 M, const mat4x4 N)
{
	memcpy(M,N,sizeof(float)*16); // this should be faster!
}
LINMATH_H_FUNC void mat4x4_row(vec4 r, const mat4x4 M, int i)
{
	int k;
	for(k=0; k<4; ++k)
		r[k] = M[k][i];
}
LINMATH_H_FUNC void mat4x4_col(vec4 r,const mat4x4 M, int i)
{
	memcpy(r,M[i],sizeof(float)*4); // this should be faster!
}
LINMATH_H_FUNC void mat4x4_transposed(mat4x4 M,const mat4x4 N)
{
	int i, j;
	for(j=0; j<4; ++j)
		for(i=0; i<4; ++i)
			M[i][j] = N[j][i];
}
/**
 * @brief Matrix 4x4 addition R = A + B
 * @param[out] R Addition
 * @param[in] A First parcel
 * @param[in] B Second Parce
 */
LINMATH_H_FUNC void mat4x4_added(mat4x4 R,const mat4x4 A,const mat4x4 B)
{
	float* r = &(R[0][0]);
	const float* a = (float*)A;
	const float* b = (float*)B;
	int i;
	for(i= 0 ; i<16;i++)
	{
		r[i] = a[i]+b[i];
	}
}
/**
 * @brief In-Place matrix 4x4 addition A+=B
 * @param[in,out] A First parcel and addition
 * @param[in] B Second parcel
 */
LINMATH_H_FUNC void mat4x4_add(mat4x4 A,const mat4x4 B)
{
	float* a = (float*)A;
	const float* b = (float*)B;
	int i;
	for(i= 0 ; i<16;i++)
	{
		a[i]+=b[i];
	}
}

/**
 * @brief Matrix 4x4 Subtraction M = A-B
 * @param[out] M Difference
 * @param[in] A Minuend
 * @param[in] B Subtratend
 */
LINMATH_H_FUNC void mat4x4_subed(mat4x4 M,const mat4x4 A,const mat4x4 B)
{
	float* r = (float*)M;
	const float* a = (float*)A;
	const float* b = (float*)B;
	int i;
	for(i= 0 ; i<16;i++)
	{
		r[i] = a[i]-b[i];
	}
}
/**
 * @brief In-place matrix 4x4 Subtraction A -= B
 * @param[in,out] A Minuend and difference
 * @param[in] B Subtratend
 */
LINMATH_H_FUNC void mat4x4_sub(mat4x4 A,const mat4x4 B)
{
	float* a = (float*)A;
	const float* b = (float*)B;
	int i;
	for(i= 0 ; i<16;i++)
	{
		a[i]-=b[i];

	}
}

/**
 * @brief Matrix 4x4 scale M = A*k
 * @param[out] M Scaled matrix
 * @param[in] A Original matrix
 * @param[in] k Scale factor
 */
LINMATH_H_FUNC void mat4x4_muled_scalar(mat4x4 M,const mat4x4 A,const float k)
{
	float* r = (float*)M;
	const float* a = (float*)A;

	int i;
	for(i= 0 ; i<16;i++)
	{
		r[i] = a[i]*k;
	}
}

/**
 * @brief In-place matrix 4x4 scale M = M*k
 * @param[in,out] M Matrix
 * @param[in] k Scale factor
 */
LINMATH_H_FUNC void mat4x4_mul_scalar(mat4x4 M,const float k)
{
	float* m = (float*)M;

	int i;
	for(i= 0 ; i<16;i++)
	{
		m[i]*=k;
	}
}

/**
 * @brief Matrix 4x4 anisotropic scale M = A*((x,0,0,0)(0,y,0,0)(0,0,z,0)(0,0,0,1))
 * @param[out] M Scaled matrix
 * @param[in]  A Original matrix
 * @param[in]  x Scale factor in x axis
 * @param[in]  y Scale factor in y axis
 * @param[in]  z Scale factor in z axis
 */
LINMATH_H_FUNC void mat4x4_scaled(mat4x4 M,const mat4x4 A,
								 const float x,const  float y,const float z)
{
	int i;
	vec4_scaled(M[0], A[0], x);
	vec4_scaled(M[1], A[1], y);
	vec4_scaled(M[2], A[2], z);
	for(i = 0; i < 4; ++i)
	{
		M[3][i] = A[3][i];
	}
}

/**
 * @brief In-plca matrix 4x4 anisotropic scale M *= ((x,0,0,0)(0,y,0,0)(0,0,z,0)(0,0,0,1))
 * @param[in,out] M Matrix
 * @param[in]  x Scale factor in x axis
 * @param[in]  y Scale factor in y axis
 * @param[in]  z Scale factor in z axis
 */
LINMATH_H_FUNC void mat4x4_scale(mat4x4 M,
								const float x,const  float y,const float z)
{
	vec4_scale(M[0], x);
	vec4_scale(M[1], y);
	vec4_scale(M[2], z);
}

/**
 * @brief Matrix 4x4 multiplication R = A*B;
 * @param[in,out] R Product matrix
 * @param[in] A	First factor matrix
 * @param[in] B Second factor matrix
 */
LINMATH_H_FUNC void mat4x4_mult(mat4x4 R, const mat4x4 A, const mat4x4 B)
{
	int k, r, c;
	for(c=0; c<4; ++c) for(r=0; r<4; ++r) {
		R[c][r] = 0.f;
		for(k=0; k<4; ++k)
			R[c][r]  += A[k][r] * B[c][k];
	}
}

/**
 * @brief mat4x4_mul_vec4 r = M*v
 * @param[out] r
 * @param[in] M
 * @param[in] v
 */
LINMATH_H_FUNC void mat4x4_mul_vec4(vec4 r,const mat4x4 M, const vec4 v)
{
	int i, j;
	for(j=0; j<4; ++j) {
		r[j] = 0.f;
		for(i=0; i<4; ++i)
			r[j] += M[i][j] * v[i];
	}
}

/**
 * @brief mat4x4_translate M = M translated by x,y,z
 * @param[out] M
 * @param[in] x
 * @param[in] y
 * @param[in] z
 */
LINMATH_H_FUNC void mat4x4_translate(mat4x4 M,
									const float x,const float y,const float z)
{
	vec4 t = {x, y, z, 0};
	vec4 r;
	int i;
	for (i = 0; i < 4; ++i) {
		mat4x4_row(r, M, i);
		M[3][i] += vec4_dot(r, t);
	}
}

/**
 * @brief mat4x4_translated R = M translated by x,y,z
 * @param[out] R Translated matrix
 * @param[in]  M Original matrix
 * @param[in]  x x coord of tanslation vector
 * @param[in]  y y coord of tanslation vector
 * @param[in]  z z coord of tanslation vector
 */
LINMATH_H_FUNC void mat4x4_translated(mat4x4 R,const mat4x4 M, const float x,const float y,const float z)
{
	mat4x4_copy(R,M);
	mat4x4_translate(R,x,y,z);
}

/**
 * @brief mat4x4_from_vec3_mult R = a^T * b
 * @param[out] R
 * @param[in] a
 * @param[in] b
 */
LINMATH_H_FUNC void mat4x4_from_vec3_mult(mat4x4 R,const vec3 a,const vec3 b)
{
	int i, j;
	mat4x4_make_identity(R);
	for(i=0; i<3; ++i)
		for(j=0; j<3; ++j)
			R[i][j] = a[i] * b[j];

}
/**
 * @brief mat4x4_from_vec3_mult R = a^T * b
 * @param[out] R
 * @param[in] a
 * @param[in] b
 */
LINMATH_H_FUNC void mat4x4_from_vec4_mult(mat4x4 R,const vec4 a,const vec4 b)
{
	int i, j;
	for(i=0; i<4; ++i)
		for(j=0; j<4; ++j)
			R[i][j] = a[i] * b[j];
}

LINMATH_H_FUNC void mat4x4_rotated(mat4x4 R, const mat4x4 M,
								  const float x,const float y,const float z,
								  float angle_rad)
{
	mat4x4 Q;
	mat4x4_make_rotation(Q,x,y,z,angle_rad);
	mat4x4_mult(R,M,Q);
}
LINMATH_H_FUNC void mat4x4_rotated_X(mat4x4 R,const mat4x4 M,
									const float angle_rad)
{
	float s = sinf(angle_rad);
	float c = cosf(angle_rad);
	mat4x4 Q = {
		{1.f, 0.f, 0.f, 0.f},
		{0.f,   c,   s, 0.f},
		{0.f,  -s,   c, 0.f},
		{0.f, 0.f, 0.f, 1.f}
	};
	mat4x4_mult(R, M, Q);
}
LINMATH_H_FUNC void mat4x4_rotated_Y(mat4x4 R,const mat4x4 M,
									const float angle_rad)
{
	float s = sinf(angle_rad);
	float c = cosf(angle_rad);
	mat4x4 Q = {
		{   c, 0.f,   s, 0.f},
		{ 0.f, 1.f, 0.f, 0.f},
		{  -s, 0.f,   c, 0.f},
		{ 0.f, 0.f, 0.f, 1.f}
	};
	mat4x4_mult(R, M, Q);
}
LINMATH_H_FUNC void mat4x4_rotated_Z(mat4x4 R,const mat4x4 M,
									const float angle_rad)
{
	float s = sinf(angle_rad);
	float c = cosf(angle_rad);
	mat4x4 Q = {
		{   c,   s, 0.f, 0.f},
		{  -s,   c, 0.f, 0.f},
		{ 0.f, 0.f, 1.f, 0.f},
		{ 0.f, 0.f, 0.f, 1.f}
	};
	mat4x4_mult(R, M, Q);
}

/**@brief mat4x4_inverse R = M^-1
 * @param[out] R
 * @param[in] M
 */
LINMATH_H_FUNC void mat4x4_inverse(mat4x4 R,const mat4x4 M)
{
	float s[6];
	float c[6];
	s[0] = M[0][0]*M[1][1] - M[1][0]*M[0][1];
	s[1] = M[0][0]*M[1][2] - M[1][0]*M[0][2];
	s[2] = M[0][0]*M[1][3] - M[1][0]*M[0][3];
	s[3] = M[0][1]*M[1][2] - M[1][1]*M[0][2];
	s[4] = M[0][1]*M[1][3] - M[1][1]*M[0][3];
	s[5] = M[0][2]*M[1][3] - M[1][2]*M[0][3];

	c[0] = M[2][0]*M[3][1] - M[3][0]*M[2][1];
	c[1] = M[2][0]*M[3][2] - M[3][0]*M[2][2];
	c[2] = M[2][0]*M[3][3] - M[3][0]*M[2][3];
	c[3] = M[2][1]*M[3][2] - M[3][1]*M[2][2];
	c[4] = M[2][1]*M[3][3] - M[3][1]*M[2][3];
	c[5] = M[2][2]*M[3][3] - M[3][2]*M[2][3];

	/* Assumes it is invertible */
	float idet = 1.0f/( s[0]*c[5]-s[1]*c[4]+s[2]*c[3]+s[3]*c[2]-s[4]*c[1]+s[5]*c[0]);

	R[0][0] = ( M[1][1] * c[5] - M[1][2] * c[4] + M[1][3] * c[3]) * idet;
	R[0][1] = (-M[0][1] * c[5] + M[0][2] * c[4] - M[0][3] * c[3]) * idet;
	R[0][2] = ( M[3][1] * s[5] - M[3][2] * s[4] + M[3][3] * s[3]) * idet;
	R[0][3] = (-M[2][1] * s[5] + M[2][2] * s[4] - M[2][3] * s[3]) * idet;

	R[1][0] = (-M[1][0] * c[5] + M[1][2] * c[2] - M[1][3] * c[1]) * idet;
	R[1][1] = ( M[0][0] * c[5] - M[0][2] * c[2] + M[0][3] * c[1]) * idet;
	R[1][2] = (-M[3][0] * s[5] + M[3][2] * s[2] - M[3][3] * s[1]) * idet;
	R[1][3] = ( M[2][0] * s[5] - M[2][2] * s[2] + M[2][3] * s[1]) * idet;

	R[2][0] = ( M[1][0] * c[4] - M[1][1] * c[2] + M[1][3] * c[0]) * idet;
	R[2][1] = (-M[0][0] * c[4] + M[0][1] * c[2] - M[0][3] * c[0]) * idet;
	R[2][2] = ( M[3][0] * s[4] - M[3][1] * s[2] + M[3][3] * s[0]) * idet;
	R[2][3] = (-M[2][0] * s[4] + M[2][1] * s[2] - M[2][3] * s[0]) * idet;

	R[3][0] = (-M[1][0] * c[3] + M[1][1] * c[1] - M[1][2] * c[0]) * idet;
	R[3][1] = ( M[0][0] * c[3] - M[0][1] * c[1] + M[0][2] * c[0]) * idet;
	R[3][2] = (-M[3][0] * s[3] + M[3][1] * s[1] - M[3][2] * s[0]) * idet;
	R[3][3] = ( M[2][0] * s[3] - M[2][1] * s[1] + M[2][2] * s[0]) * idet;
}
LINMATH_H_FUNC void mat4x4_orthonormalized(mat4x4 R,const mat4x4 M)
{
	mat4x4_copy(R, M);
	float s = 1.;
	vec3 h;

	vec3_normalize(R[2]);

	s = vec3_dot(R[1], R[2]);
	vec3_scaled(h, R[2], s);
	vec3_sub(R[1], h);
	vec3_normalize(R[2]);

	s = vec3_dot(R[1], R[2]);
	vec3_scaled(h, R[2], s);
	vec3_sub(R[1], h);
	vec3_normalize(R[1]);

	s = vec3_dot(R[0], R[1]);
	vec3_scaled(h, R[1], s);
	vec3_sub(R[0], h);
	vec3_normalize(R[0]);
}

LINMATH_H_FUNC void mat4x4_make_frustum(mat4x4 M,
									   const float l,
									   const float r,
									   const float b,
									   const float t,
									   const float n,
									   const float f)
{
	M[0][0] = 2.f*n/(r-l);
	M[0][1] = M[0][2] = M[0][3] = 0.f;

	M[1][1] = 2.*n/(t-b);
	M[1][0] = M[1][2] = M[1][3] = 0.f;

	M[2][0] = (r+l)/(r-l);
	M[2][1] = (t+b)/(t-b);
	M[2][2] = -(f+n)/(f-n);
	M[2][3] = -1.f;

	M[3][2] = -2.f*(f*n)/(f-n);
	M[3][0] = M[3][1] = M[3][3] = 0.f;
}
LINMATH_H_FUNC void mat4x4_make_ortho(mat4x4 M,
									 const float l,
									 const float r,
									 const float b,
									 const float t,
									 const float n,
									 const float f)
{
	M[0][0] = 2.f/(r-l);
	M[0][1] = M[0][2] = M[0][3] = 0.f;

	M[1][1] = 2.f/(t-b);
	M[1][0] = M[1][2] = M[1][3] = 0.f;

	M[2][2] = -2.f/(f-n);
	M[2][0] = M[2][1] = M[2][3] = 0.f;

	M[3][0] = -(r+l)/(r-l);
	M[3][1] = -(t+b)/(t-b);
	M[3][2] = -(f+n)/(f-n);
	M[3][3] = 1.f;
}
LINMATH_H_FUNC void mat4x4_make_perspective(mat4x4 R,
        const float y_fov,
        const float aspect,
        const float n,
        const float f)
{
	/* NOTE: Degrees are an unhandy unit to work with.
	 * linmath.h uses radians for everything! */
	float const a = 1.f / tanf(y_fov / 2.f);

	R[0][0] = a / aspect;
	R[0][1] = 0.f;
	R[0][2] = 0.f;
	R[0][3] = 0.f;

	R[1][0] = 0.f;
	R[1][1] = a;
	R[1][2] = 0.f;
	R[1][3] = 0.f;

	R[2][0] = 0.f;
	R[2][1] = 0.f;
	R[2][2] = -((f + n) / (f - n));
	R[2][3] = -1.f;

	R[3][0] = 0.f;
	R[3][1] = 0.f;
	R[3][2] = -((2.f * f * n) / (f - n));
	R[3][3] = 0.f;
}

LINMATH_H_FUNC void mat4x4_make_look_at(mat4x4 R,
            const vec3 eye,
            const vec3 center,
            const vec3 up)
{
	/* Adapted from Android's OpenGL Matrix.java.                        */
	/* See the OpenGL GLUT documentation for gluLookAt for a description */
	/* of the algorithm. We implement it in a straightforward way:       */

	/* TODO: The negation of of can be spared by swapping the order of
	 *       operands in the following cross products in the right way. */
	vec3 f;
	vec3_subed(f, center, eye);
	vec3_normalize(f);

	vec3 s;
	vec3_cross(s, f, up);
	vec3_normalize(s);

	vec3 t;
	vec3_cross(t, s, f);

	R[0][0] =  s[0];
	R[0][1] =  t[0];
	R[0][2] = -f[0];
	R[0][3] =   0.f;

	R[1][0] =  s[1];
	R[1][1] =  t[1];
	R[1][2] = -f[1];
	R[1][3] =   0.f;

	R[2][0] =  s[2];
	R[2][1] =  t[2];
	R[2][2] = -f[2];
	R[2][3] =   0.f;

	R[3][0] = -1.0f * vec3_dot(s,eye);
	R[3][1] = -1.0f * vec3_dot(t,eye);
	R[3][2] =  1.0f * vec3_dot(f,eye);
	R[3][3] =  1.f;
}
/*
LINMATH_H_FUNC void mat4x4_make_look_at(mat4x4 R,
									   const float ex,
									   const float ey,
									   const float ez,

									   const float cx,
									   const float cy,
									   const float cz,

									   const float ux,
									   const float uy,
									   const float uz)
{
	vec3 e = {ex,ey,ez};
	vec3 c = {cx,cy,cz};
	vec3 u = {ux,uy,uz};

	mat4x4_make_look_at(R,e,c,u);
}

*/

/**
 * @brief Quaternion data type
 * @param [0] = w : Real coefficient
 * @param [1] = x : Coefficient of the i complex vector
 * @param [2] = y : Coefficient of the j complex vector
 * @param [3] = z : Coefficient of the k complex vector
 *
 * A quaternion is a four-dimensional number used to represent 3D rotations.
 * This implementation uses scalar-first convention: (w, x, y, z).
 */
typedef float quat[4];

/**
 * @brief Set quaternion components.
 *
 * Initializes a quaternion using scalar-first convention (w, x, y, z).
 *
 * @param[out] q Quaternion to initialize
 * @param[in]  w Scalar component
 * @param[in]  x X component (imaginary i)
 * @param[in]  y Y component (imaginary j)
 * @param[in]  z Z component (imaginary k)
 */
LINMATH_H_FUNC void quat_set(quat q, const float w, const float x, const float y, const float z)
{
	q[0] = w;
	q[1] = x;
	q[2] = y;
	q[3] = z;
}

/**
 * @brief Set quaternion from scalar and vector part.
 *
 * @param[out] q Quaternion to initialize
 * @param[in]  w Scalar component
 * @param[in]  xyz Vector part (x,y,z)
 */
LINMATH_H_FUNC void quat_set_vec(quat q, const float w, const vec3 xyz)
{
	q[0] = w;
	q[1] = xyz[0];
	q[2] = xyz[1];
	q[3] = xyz[2];
}

/**
 * @brief Set quaternion to identity.
 *
 * Identity quaternion represents no rotation.
 *
 * @param[out] q Quaternion set to (1,0,0,0)
 */
LINMATH_H_FUNC void quat_make_identity(quat q)
{
	q[1] = q[2] = q[3] = 0.0f;
	q[0] = 1.0f;
}

/**
 * @brief Create quaternion from Euler angles.
 *
 * Converts roll, pitch, yaw (radians) into a quaternion.
 * Rotation order: Z (yaw), Y (pitch), X (roll).
 *
 * @param[out] q Result quaternion
 * @param[in]  roll Rotation around X axis (rad)
 * @param[in]  pitch Rotation around Y axis (rad)
 * @param[in]  yaw Rotation around Z axis (rad)
 */
LINMATH_H_FUNC void quat_make_from_euler(quat q,
										const float roll,
										const float pitch,
										const float yaw)
{
	float t0 = cosf(yaw * 0.5f);
	float t1 = sinf(yaw * 0.5f);
	float t2 = cosf(roll * 0.5f);
	float t3 = sinf(roll * 0.5f);
	float t4 = cosf(pitch * 0.5f);
	float t5 = sinf(pitch * 0.5f);

	q[1] = t0 * t3 * t4 - t1 * t2 * t5;
	q[2] = t0 * t2 * t5 + t1 * t3 * t4;
	q[3] = t1 * t2 * t4 - t0 * t3 * t5;
	q[0] = t0 * t2 * t4 + t1 * t3 * t5;
}

/**
 * @brief Create quaternion from Euler vector.
 *
 * @param[out] q Result quaternion
 * @param[in]  rpy Vector (roll, pitch, yaw)
 */
LINMATH_H_FUNC void quat_make_from_euler_vec(quat q, const vec3 rpy)
{
	quat_make_from_euler(q, rpy[0], rpy[1], rpy[2]);
}

/**
 * @brief Create quaternion from axis-angle.
 *
 * Axis is normalized internally.
 *
 * @param[out] r Result quaternion
 * @param[in]  x Axis X
 * @param[in]  y Axis Y
 * @param[in]  z Axis Z
 * @param[in]  angle Rotation angle (rad)
 */
LINMATH_H_FUNC void quat_make_from_rotation(quat r,
										   const float x,
										   const float y,
										   const float z,
										   const float angle)
{
	vec3 v = {x,y,z};
	vec3_normalize(v);

	float S = sinf(angle * 0.5f);
	r[1] = v[0] * S;
	r[2] = v[1] * S;
	r[3] = v[2] * S;
	r[0] = cosf(angle * 0.5f);
}

/**
 * @brief Create quaternion from axis-angle vector.
 *
 * @param[out] r Result quaternion
 * @param[in]  axis Rotation axis
 * @param[in]  angle Rotation angle (rad)
 */
LINMATH_H_FUNC void quat_make_from_rotation_vec(quat r,
												const vec3 axis,
												const float angle)
{
	quat_make_from_rotation(r, axis[0], axis[1], axis[2], angle);
}

/**
 * @brief Convert quaternion to Euler angles.
 *
 * Outputs roll, pitch, yaw (radians).
 * Input quaternion should be normalized.
 *
 * @param[out] rpy Output vector
 * @param[in]  q Input quaternion
 */
LINMATH_H_FUNC void quat_to_euler(vec3 rpy, const quat q)
{
	float ysqr = q[2] * q[2];
	float t0 = -2.0f * (ysqr + q[3] * q[3]) + 1.0f;
	float t1 = +2.0f * (q[1] * q[2] - q[0] * q[3]);
	float t2 = -2.0f * (q[1] * q[3] + q[0] * q[2]);
	float t3 = +2.0f * (q[2] * q[3] - q[0] * q[1]);
	float t4 = -2.0f * (q[1] * q[1] + ysqr) + 1.0f;

	t2 = t2 > 1.0f ? 1.0f : t2;
	t2 = t2 < -1.0f ? -1.0f : t2;

	rpy[0] = atan2f(t3, t4);
	rpy[1] = asinf(t2);
	rpy[2] = atan2f(t1, t0);
}

/**
 * @brief Add two quaternions (out-of-place).
 */
LINMATH_H_FUNC void quat_added(quat r,const quat a,const quat b)
{
	for(int i=0;i<4;++i) r[i]=a[i]+b[i];
}

/**
 * @brief Add quaternion in-place.
 */
LINMATH_H_FUNC void quat_add(quat a,const quat b)
{
	for(int i=0;i<4;++i) a[i]+=b[i];
}

/**
 * @brief Subtract two quaternions (out-of-place).
 */
LINMATH_H_FUNC void quat_subed(quat r,const quat a,const quat b)
{
	for(int i=0;i<4;++i) r[i]=a[i]-b[i];
}

/**
 * @brief Subtract quaternion in-place.
 */
LINMATH_H_FUNC void quat_sub(quat a,const quat b)
{
	for(int i=0;i<4;++i) a[i]-=b[i];
}

/**
 * @brief Quaternion multiplication (Hamilton product).
 */
LINMATH_H_FUNC void quat_muled(quat r,const quat a,const quat b)
{
	r[1]=a[0]*b[1]+a[1]*b[0]+a[2]*b[3]-a[3]*b[2];
	r[2]=a[0]*b[2]+a[2]*b[0]+a[3]*b[1]-a[1]*b[3];
	r[3]=a[0]*b[3]+a[3]*b[0]+a[1]*b[2]-a[2]*b[1];
	r[0]=a[0]*b[0]-a[1]*b[1]-a[2]*b[2]-a[3]*b[3];
}

/**
 * @brief Multiply quaternion by scalar (out-of-place).
 */
LINMATH_H_FUNC void quat_muled_scalar(quat r,const quat v,const float s)
{
	for(int i=0;i<4;++i) r[i]=v[i]*s;
}

/**
 * @brief Multiply quaternion by scalar in-place.
 */
LINMATH_H_FUNC void quat_mul_scalar(quat r,const float s)
{
	for(int i=0;i<4;++i) r[i]*=s;
}

/**
 * @brief Dot product between quaternions.
 */
LINMATH_H_FUNC float quat_dot(const quat a,const quat b)
{
	float p=0.f;
	for(int i=0;i<4;++i) p+=b[i]*a[i];
	return p;
}

/**
 * @brief Conjugate quaternion (out-of-place).
 */
LINMATH_H_FUNC void quat_conjugated(quat r,const quat q)
{
	for(int i=1;i<4;++i) r[i]=-q[i];
	r[0]=q[0];
}

/**
 * @brief Conjugate quaternion in-place.
 */
LINMATH_H_FUNC void quat_conjugate(quat q)
{
	for(int i=1;i<4;++i) q[i]*=-1.0f;
}

#define quat_normalized vec4_normalized
#define quat_normalize vec4_normalize

/**
 * @brief Rotate a 3D vector using quaternion.
 */
LINMATH_H_FUNC void quat_mul_vec3(vec3 r,const quat q,const vec3 v)
{
	vec3 a,b;
	const vec3 qv={q[1],q[2],q[3]};
	vec3_cross(a,qv,v);
	vec3_cross(b,qv,a);
	for(int i=0;i<3;i++)
		r[i]=v[i]+((a[i]*q[0])+b[i])*2.0f;
}

/**
 * @brief Rotate a 4D vector using quaternion.
 */
LINMATH_H_FUNC void quat_mul_vec4(vec4 r,const quat q,const vec4 v)
{
	vec3 a,b;
	const vec3 qv={q[1],q[2],q[3]};
	vec3_cross(a,qv,v);
	vec3_cross(b,qv,a);
	for(int i=0;i<3;i++)
		r[i]=v[i]+((a[i]*q[0])+b[i])*2.0f;
	r[3]=v[3];
}

/**
 * @brief Convert quaternion to 4x4 rotation matrix.
 */
LINMATH_H_FUNC void quat_to_mat4x4(mat4x4 M,const quat q)
{
	float xx=q[1]*q[1], xy=q[1]*q[2], xz=q[1]*q[3], xw=q[1]*q[0];
	float yy=q[2]*q[2], yz=q[2]*q[3], yw=q[2]*q[0];
	float zz=q[3]*q[3], zw=q[3]*q[0];

	M[0][0]=1-2*(yy+zz); M[0][1]=2*(xy+zw); M[0][2]=2*(xz-yw); M[0][3]=0;
	M[1][0]=2*(xy-zw); M[1][1]=1-2*(xx+zz); M[1][2]=2*(yz+xw); M[1][3]=0;
	M[2][0]=2*(xz+yw); M[2][1]=2*(yz-xw); M[2][2]=1-2*(xx+yy); M[2][3]=0;
	M[3][0]=M[3][1]=M[3][2]=0; M[3][3]=1;
}

/**
 * @brief Create quaternion from rotation matrix.
 */
LINMATH_H_FUNC void quat_make_from_mat4x4(quat q,const mat4x4 M)
{
	float r=0.f;
	int perm[]={0,1,2,0,1},*p=perm;

	for(int i=0;i<3;i++){
		float m=M[i][i];
		if(m<r) continue;
		m=r; p=&perm[i];
	}

	r=sqrtf(1.f+M[p[0]][p[0]]-M[p[1]][p[1]]-M[p[2]][p[2]]);
	if(r<1e-6){ q[0]=1; q[1]=q[2]=q[3]=0; return; }

	q[0]=r/2.f;
	q[1]=(M[p[0]][p[1]]-M[p[1]][p[0]])/(2*r);
	q[2]=(M[p[2]][p[0]]-M[p[0]][p[2]])/(2*r);
	q[3]=(M[p[2]][p[1]]-M[p[1]][p[2]])/(2*r);
}

#endif
