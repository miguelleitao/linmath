/** 
@brief Vector datatype.     */ typedef float vec2[2]; /** 
@brief Vector invert. 	  r = -a       @param[out] r Result       @param[in]  a Vector to invert     */ 
static inline void vec2_inverted(vec2 r, const vec2 a) { int i; for(i=0; i<2; ++i) r[i] = -a[i]; } /** 
@brief In-place vector invert. 	  a = -a       @param[in,out] a Vector to invert     */ 
static inline void vec2_invert(vec2 a) { int i; for(i=0; i<2; ++i) a[i] = -a[i]; } /** 
@brief Add two vectors. 	  r = a + b       @param[out] r Result       @param[in] a First parcel       @param[in] b Second parcel     */ 
static inline void vec2_added(vec2 r, const vec2 a,const vec2 b) { int i; for(i=0; i<2; ++i) r[i] = a[i] + b[i]; } /** 
@brief In-place add vector. 	  a += b       @param[in,out] a First parcel and result      @param[in] b Second parcel     */ 
static inline void vec2_add(vec2 a,const vec2 b) { int i; for(i=0; i<2; ++i) a[i] += b[i]; } /** 
@brief Subtract two vectors. 	  r = a - b       @param[out] r Difference       @param[in] a Minuend       @param[in] b Subtrahend      */ 
static inline void vec2_subed(vec2 r, const vec2 a, const vec2 b) { int i; for(i=0; i<2; ++i) r[i] = a[i] - b[i]; } /** 
@brief In-place subtract vector.  a -= b       @param[in,out] a Minuend and difference      @param[in] b Subtrahend     */ 
static inline void vec2_sub(vec2 a, const vec2 b) { int i; for(i=0; i<2; ++i) a[i] -= b[i]; } 
static inline void vec2_scaled(vec2 r, const vec2 v, const float s) { int i; for(i=0; i<2; ++i) r[i] = v[i] * s; } 
static inline void vec2_scale(vec2 v, const float s) { int i; for(i=0; i<2; ++i) v[i] *= s; } 
static inline float vec2_dot(const vec2 a, const vec2 b) { float p = 0.; int i; for(i=0; i<2; ++i) p += b[i]*a[i]; return p; } 
static inline void vec2_reflected(vec2 r, const vec2 v, const vec2 n) { float p = 2.*vec2_dot(v, n); int i; for(i=0; i<2; ++i) r[i] = v[i] - p*n[i]; } 
static inline void vec2_reflect(vec2 v, const vec2 n) { float p = 2.*vec2_dot(v, n); int i; for(i=0;i<2;++i) v[i] -= p*n[i]; } 
static inline float vec2_len(const vec2 v) { return sqrt(vec2_dot(v,v)); } 
static inline float vec2_len2(const vec2 v) { return vec2_dot(v,v); } 
static inline void vec2_normalized(vec2 r,const vec2 v) { float k = 1. / vec2_len(v); vec2_scaled(r, v, k); } 
static inline void vec2_normalize(vec2 v) { float k = 1. / vec2_len(v); vec2_scale(v, k); } 
static inline void vec2_min(vec2 r, const vec2 a, const vec2 b) { int i; for(i=0; i<2; ++i) r[i] = a[i]<b[i] ? a[i] : b[i]; } 
static inline void vec2_max(vec2 r, const vec2 a,const vec2 b) { int i; for(i=0; i<2; ++i) r[i] = a[i]>b[i] ? a[i] : b[i]; }
/** 
@brief Vector datatype.     */ typedef float vec3[3]; /** 
@brief Vector invert. 	  r = -a       @param[out] r Result       @param[in]  a Vector to invert     */ 
static inline void vec3_inverted(vec3 r, const vec3 a) { int i; for(i=0; i<3; ++i) r[i] = -a[i]; } /** 
@brief In-place vector invert. 	  a = -a       @param[in,out] a Vector to invert     */ 
static inline void vec3_invert(vec3 a) { int i; for(i=0; i<3; ++i) a[i] = -a[i]; } /** 
@brief Add two vectors. 	  r = a + b       @param[out] r Result       @param[in] a First parcel       @param[in] b Second parcel     */ 
static inline void vec3_added(vec3 r, const vec3 a,const vec3 b) { int i; for(i=0; i<3; ++i) r[i] = a[i] + b[i]; } /** 
@brief In-place add vector. 	  a += b       @param[in,out] a First parcel and result      @param[in] b Second parcel     */ 
static inline void vec3_add(vec3 a,const vec3 b) { int i; for(i=0; i<3; ++i) a[i] += b[i]; } /** 
@brief Subtract two vectors. 	  r = a - b       @param[out] r Difference       @param[in] a Minuend       @param[in] b Subtrahend      */ 
static inline void vec3_subed(vec3 r, const vec3 a, const vec3 b) { int i; for(i=0; i<3; ++i) r[i] = a[i] - b[i]; } /** 
@brief In-place subtract vector.  a -= b       @param[in,out] a Minuend and difference      @param[in] b Subtrahend     */ 
static inline void vec3_sub(vec3 a, const vec3 b) { int i; for(i=0; i<3; ++i) a[i] -= b[i]; } 
static inline void vec3_scaled(vec3 r, const vec3 v, const float s) { int i; for(i=0; i<3; ++i) r[i] = v[i] * s; } 
static inline void vec3_scale(vec3 v, const float s) { int i; for(i=0; i<3; ++i) v[i] *= s; } 
static inline float vec3_dot(const vec3 a, const vec3 b) { float p = 0.; int i; for(i=0; i<3; ++i) p += b[i]*a[i]; return p; } 
static inline void vec3_reflected(vec3 r, const vec3 v, const vec3 n) { float p = 2.*vec3_dot(v, n); int i; for(i=0; i<3; ++i) r[i] = v[i] - p*n[i]; } 
static inline void vec3_reflect(vec3 v, const vec3 n) { float p = 2.*vec3_dot(v, n); int i; for(i=0;i<3;++i) v[i] -= p*n[i]; } 
static inline float vec3_len(const vec3 v) { return sqrt(vec3_dot(v,v)); } 
static inline float vec3_len2(const vec3 v) { return vec3_dot(v,v); } 
static inline void vec3_normalized(vec3 r,const vec3 v) { float k = 1. / vec3_len(v); vec3_scaled(r, v, k); } 
static inline void vec3_normalize(vec3 v) { float k = 1. / vec3_len(v); vec3_scale(v, k); } 
static inline void vec3_min(vec3 r, const vec3 a, const vec3 b) { int i; for(i=0; i<3; ++i) r[i] = a[i]<b[i] ? a[i] : b[i]; } 
static inline void vec3_max(vec3 r, const vec3 a,const vec3 b) { int i; for(i=0; i<3; ++i) r[i] = a[i]>b[i] ? a[i] : b[i]; }
/** 
@brief Vector datatype.     */ typedef float vec4[4]; /** 
@brief Vector invert. 	  r = -a       @param[out] r Result       @param[in]  a Vector to invert     */ 
static inline void vec4_inverted(vec4 r, const vec4 a) { int i; for(i=0; i<4; ++i) r[i] = -a[i]; } /** 
@brief In-place vector invert. 	  a = -a       @param[in,out] a Vector to invert     */ 
static inline void vec4_invert(vec4 a) { int i; for(i=0; i<4; ++i) a[i] = -a[i]; } /** 
@brief Add two vectors. 	  r = a + b       @param[out] r Result       @param[in] a First parcel       @param[in] b Second parcel     */ 
static inline void vec4_added(vec4 r, const vec4 a,const vec4 b) { int i; for(i=0; i<4; ++i) r[i] = a[i] + b[i]; } /** 
@brief In-place add vector. 	  a += b       @param[in,out] a First parcel and result      @param[in] b Second parcel     */ 
static inline void vec4_add(vec4 a,const vec4 b) { int i; for(i=0; i<4; ++i) a[i] += b[i]; } /** 
@brief Subtract two vectors. 	  r = a - b       @param[out] r Difference       @param[in] a Minuend       @param[in] b Subtrahend      */ 
static inline void vec4_subed(vec4 r, const vec4 a, const vec4 b) { int i; for(i=0; i<4; ++i) r[i] = a[i] - b[i]; } /** 
@brief In-place subtract vector.  a -= b       @param[in,out] a Minuend and difference      @param[in] b Subtrahend     */ 
static inline void vec4_sub(vec4 a, const vec4 b) { int i; for(i=0; i<4; ++i) a[i] -= b[i]; } 
static inline void vec4_scaled(vec4 r, const vec4 v, const float s) { int i; for(i=0; i<4; ++i) r[i] = v[i] * s; } 
static inline void vec4_scale(vec4 v, const float s) { int i; for(i=0; i<4; ++i) v[i] *= s; } 
static inline float vec4_dot(const vec4 a, const vec4 b) { float p = 0.; int i; for(i=0; i<4; ++i) p += b[i]*a[i]; return p; } 
static inline void vec4_reflected(vec4 r, const vec4 v, const vec4 n) { float p = 2.*vec4_dot(v, n); int i; for(i=0; i<4; ++i) r[i] = v[i] - p*n[i]; } 
static inline void vec4_reflect(vec4 v, const vec4 n) { float p = 2.*vec4_dot(v, n); int i; for(i=0;i<4;++i) v[i] -= p*n[i]; } 
static inline float vec4_len(const vec4 v) { return sqrt(vec4_dot(v,v)); } 
static inline float vec4_len2(const vec4 v) { return vec4_dot(v,v); } 
static inline void vec4_normalized(vec4 r,const vec4 v) { float k = 1. / vec4_len(v); vec4_scaled(r, v, k); } 
static inline void vec4_normalize(vec4 v) { float k = 1. / vec4_len(v); vec4_scale(v, k); } 
static inline void vec4_min(vec4 r, const vec4 a, const vec4 b) { int i; for(i=0; i<4; ++i) r[i] = a[i]<b[i] ? a[i] : b[i]; } 
static inline void vec4_max(vec4 r, const vec4 a,const vec4 b) { int i; for(i=0; i<4; ++i) r[i] = a[i]>b[i] ? a[i] : b[i]; }
/** 
@brief Vector datatype.     */ typedef double vec2d[2]; /** 
@brief Vector invert. 	  r = -a       @param[out] r Result       @param[in]  a Vector to invert     */ 
static inline void vec2d_inverted(vec2d r, const vec2d a) { int i; for(i=0; i<2; ++i) r[i] = -a[i]; } /** 
@brief In-place vector invert. 	  a = -a       @param[in,out] a Vector to invert     */ 
static inline void vec2d_invert(vec2d a) { int i; for(i=0; i<2; ++i) a[i] = -a[i]; } /** 
@brief Add two vectors. 	  r = a + b       @param[out] r Result       @param[in] a First parcel       @param[in] b Second parcel     */ 
static inline void vec2d_added(vec2d r, const vec2d a,const vec2d b) { int i; for(i=0; i<2; ++i) r[i] = a[i] + b[i]; } /** 
@brief In-place add vector. 	  a += b       @param[in,out] a First parcel and result      @param[in] b Second parcel     */ 
static inline void vec2d_add(vec2d a,const vec2d b) { int i; for(i=0; i<2; ++i) a[i] += b[i]; } /** 
@brief Subtract two vectors. 	  r = a - b       @param[out] r Difference       @param[in] a Minuend       @param[in] b Subtrahend      */ 
static inline void vec2d_subed(vec2d r, const vec2d a, const vec2d b) { int i; for(i=0; i<2; ++i) r[i] = a[i] - b[i]; } /** 
@brief In-place subtract vector.  a -= b       @param[in,out] a Minuend and difference      @param[in] b Subtrahend     */ 
static inline void vec2d_sub(vec2d a, const vec2d b) { int i; for(i=0; i<2; ++i) a[i] -= b[i]; } 
static inline void vec2d_scaled(vec2d r, const vec2d v, const double s) { int i; for(i=0; i<2; ++i) r[i] = v[i] * s; } 
static inline void vec2d_scale(vec2d v, const double s) { int i; for(i=0; i<2; ++i) v[i] *= s; } 
static inline double vec2d_dot(const vec2d a, const vec2d b) { double p = 0.d; int i; for(i=0; i<2; ++i) p += b[i]*a[i]; return p; } 
static inline void vec2d_reflected(vec2d r, const vec2d v, const vec2d n) { double p = 2.d*vec2d_dot(v, n); int i; for(i=0; i<2; ++i) r[i] = v[i] - p*n[i]; } 
static inline void vec2d_reflect(vec2d v, const vec2d n) { double p = 2.d*vec2d_dot(v, n); int i; for(i=0;i<2;++i) v[i] -= p*n[i]; } 
static inline double vec2d_len(const vec2d v) { return sqrt(vec2d_dot(v,v)); } 
static inline float vec2d_len2(const vec2d v) { return vec2d_dot(v,v); } 
static inline void vec2d_normalized(vec2d r,const vec2d v) { double k = 1.d / vec2d_len(v); vec2d_scaled(r, v, k); } 
static inline void vec2d_normalize(vec2d v) { double k = 1.d / vec2d_len(v); vec2d_scale(v, k); } 
static inline void vec2d_min(vec2d r, const vec2d a, const vec2d b) { int i; for(i=0; i<2; ++i) r[i] = a[i]<b[i] ? a[i] : b[i]; } 
static inline void vec2d_max(vec2d r, const vec2d a,const vec2d b) { int i; for(i=0; i<2; ++i) r[i] = a[i]>b[i] ? a[i] : b[i]; }
/** 
@brief Vector datatype.     */ typedef double vec3d[3]; /** 
@brief Vector invert. 	  r = -a       @param[out] r Result       @param[in]  a Vector to invert     */ 
static inline void vec3d_inverted(vec3d r, const vec3d a) { int i; for(i=0; i<3; ++i) r[i] = -a[i]; } /** 
@brief In-place vector invert. 	  a = -a       @param[in,out] a Vector to invert     */ 
static inline void vec3d_invert(vec3d a) { int i; for(i=0; i<3; ++i) a[i] = -a[i]; } /** 
@brief Add two vectors. 	  r = a + b       @param[out] r Result       @param[in] a First parcel       @param[in] b Second parcel     */ 
static inline void vec3d_added(vec3d r, const vec3d a,const vec3d b) { int i; for(i=0; i<3; ++i) r[i] = a[i] + b[i]; } /** 
@brief In-place add vector. 	  a += b       @param[in,out] a First parcel and result      @param[in] b Second parcel     */ 
static inline void vec3d_add(vec3d a,const vec3d b) { int i; for(i=0; i<3; ++i) a[i] += b[i]; } /** 
@brief Subtract two vectors. 	  r = a - b       @param[out] r Difference       @param[in] a Minuend       @param[in] b Subtrahend      */ 
static inline void vec3d_subed(vec3d r, const vec3d a, const vec3d b) { int i; for(i=0; i<3; ++i) r[i] = a[i] - b[i]; } /** 
@brief In-place subtract vector.  a -= b       @param[in,out] a Minuend and difference      @param[in] b Subtrahend     */ 
static inline void vec3d_sub(vec3d a, const vec3d b) { int i; for(i=0; i<3; ++i) a[i] -= b[i]; } 
static inline void vec3d_scaled(vec3d r, const vec3d v, const double s) { int i; for(i=0; i<3; ++i) r[i] = v[i] * s; } 
static inline void vec3d_scale(vec3d v, const double s) { int i; for(i=0; i<3; ++i) v[i] *= s; } 
static inline double vec3d_dot(const vec3d a, const vec3d b) { double p = 0.d; int i; for(i=0; i<3; ++i) p += b[i]*a[i]; return p; } 
static inline void vec3d_reflected(vec3d r, const vec3d v, const vec3d n) { double p = 2.d*vec3d_dot(v, n); int i; for(i=0; i<3; ++i) r[i] = v[i] - p*n[i]; } 
static inline void vec3d_reflect(vec3d v, const vec3d n) { double p = 2.d*vec3d_dot(v, n); int i; for(i=0;i<3;++i) v[i] -= p*n[i]; } 
static inline double vec3d_len(const vec3d v) { return sqrt(vec3d_dot(v,v)); } 
static inline float vec3d_len2(const vec3d v) { return vec3d_dot(v,v); } 
static inline void vec3d_normalized(vec3d r,const vec3d v) { double k = 1.d / vec3d_len(v); vec3d_scaled(r, v, k); } 
static inline void vec3d_normalize(vec3d v) { double k = 1.d / vec3d_len(v); vec3d_scale(v, k); } 
static inline void vec3d_min(vec3d r, const vec3d a, const vec3d b) { int i; for(i=0; i<3; ++i) r[i] = a[i]<b[i] ? a[i] : b[i]; } 
static inline void vec3d_max(vec3d r, const vec3d a,const vec3d b) { int i; for(i=0; i<3; ++i) r[i] = a[i]>b[i] ? a[i] : b[i]; }
/** 
@brief Vector datatype.     */ typedef double vec4d[4]; /** 
@brief Vector invert. 	  r = -a       @param[out] r Result       @param[in]  a Vector to invert     */ 
static inline void vec4d_inverted(vec4d r, const vec4d a) { int i; for(i=0; i<4; ++i) r[i] = -a[i]; } /** 
@brief In-place vector invert. 	  a = -a       @param[in,out] a Vector to invert     */ 
static inline void vec4d_invert(vec4d a) { int i; for(i=0; i<4; ++i) a[i] = -a[i]; } /** 
@brief Add two vectors. 	  r = a + b       @param[out] r Result       @param[in] a First parcel       @param[in] b Second parcel     */ 
static inline void vec4d_added(vec4d r, const vec4d a,const vec4d b) { int i; for(i=0; i<4; ++i) r[i] = a[i] + b[i]; } /** 
@brief In-place add vector. 	  a += b       @param[in,out] a First parcel and result      @param[in] b Second parcel     */ 
static inline void vec4d_add(vec4d a,const vec4d b) { int i; for(i=0; i<4; ++i) a[i] += b[i]; } /** 
@brief Subtract two vectors. 	  r = a - b       @param[out] r Difference       @param[in] a Minuend       @param[in] b Subtrahend      */ 
static inline void vec4d_subed(vec4d r, const vec4d a, const vec4d b) { int i; for(i=0; i<4; ++i) r[i] = a[i] - b[i]; } /** 
@brief In-place subtract vector.  a -= b       @param[in,out] a Minuend and difference      @param[in] b Subtrahend     */ 
static inline void vec4d_sub(vec4d a, const vec4d b) { int i; for(i=0; i<4; ++i) a[i] -= b[i]; } 
static inline void vec4d_scaled(vec4d r, const vec4d v, const double s) { int i; for(i=0; i<4; ++i) r[i] = v[i] * s; } 
static inline void vec4d_scale(vec4d v, const double s) { int i; for(i=0; i<4; ++i) v[i] *= s; } 
static inline double vec4d_dot(const vec4d a, const vec4d b) { double p = 0.d; int i; for(i=0; i<4; ++i) p += b[i]*a[i]; return p; } 
static inline void vec4d_reflected(vec4d r, const vec4d v, const vec4d n) { double p = 2.d*vec4d_dot(v, n); int i; for(i=0; i<4; ++i) r[i] = v[i] - p*n[i]; } 
static inline void vec4d_reflect(vec4d v, const vec4d n) { double p = 2.d*vec4d_dot(v, n); int i; for(i=0;i<4;++i) v[i] -= p*n[i]; } 
static inline double vec4d_len(const vec4d v) { return sqrt(vec4d_dot(v,v)); } 
static inline float vec4d_len2(const vec4d v) { return vec4d_dot(v,v); } 
static inline void vec4d_normalized(vec4d r,const vec4d v) { double k = 1.d / vec4d_len(v); vec4d_scaled(r, v, k); } 
static inline void vec4d_normalize(vec4d v) { double k = 1.d / vec4d_len(v); vec4d_scale(v, k); } 
static inline void vec4d_min(vec4d r, const vec4d a, const vec4d b) { int i; for(i=0; i<4; ++i) r[i] = a[i]<b[i] ? a[i] : b[i]; } 
static inline void vec4d_max(vec4d r, const vec4d a,const vec4d b) { int i; for(i=0; i<4; ++i) r[i] = a[i]>b[i] ? a[i] : b[i]; }
/** 
@brief Vector datatype.     */ typedef float vec2f[2]; /** 
@brief Vector invert. 	  r = -a       @param[out] r Result       @param[in]  a Vector to invert     */ 
static inline void vec2f_inverted(vec2f r, const vec2f a) { int i; for(i=0; i<2; ++i) r[i] = -a[i]; } /** 
@brief In-place vector invert. 	  a = -a       @param[in,out] a Vector to invert     */ 
static inline void vec2f_invert(vec2f a) { int i; for(i=0; i<2; ++i) a[i] = -a[i]; } /** 
@brief Add two vectors. 	  r = a + b       @param[out] r Result       @param[in] a First parcel       @param[in] b Second parcel     */ 
static inline void vec2f_added(vec2f r, const vec2f a,const vec2f b) { int i; for(i=0; i<2; ++i) r[i] = a[i] + b[i]; } /** 
@brief In-place add vector. 	  a += b       @param[in,out] a First parcel and result      @param[in] b Second parcel     */ 
static inline void vec2f_add(vec2f a,const vec2f b) { int i; for(i=0; i<2; ++i) a[i] += b[i]; } /** 
@brief Subtract two vectors. 	  r = a - b       @param[out] r Difference       @param[in] a Minuend       @param[in] b Subtrahend      */ 
static inline void vec2f_subed(vec2f r, const vec2f a, const vec2f b) { int i; for(i=0; i<2; ++i) r[i] = a[i] - b[i]; } /** 
@brief In-place subtract vector.  a -= b       @param[in,out] a Minuend and difference      @param[in] b Subtrahend     */ 
static inline void vec2f_sub(vec2f a, const vec2f b) { int i; for(i=0; i<2; ++i) a[i] -= b[i]; } 
static inline void vec2f_scaled(vec2f r, const vec2f v, const float s) { int i; for(i=0; i<2; ++i) r[i] = v[i] * s; } 
static inline void vec2f_scale(vec2f v, const float s) { int i; for(i=0; i<2; ++i) v[i] *= s; } 
static inline float vec2f_dot(const vec2f a, const vec2f b) { float p = 0.f; int i; for(i=0; i<2; ++i) p += b[i]*a[i]; return p; } 
static inline void vec2f_reflected(vec2f r, const vec2f v, const vec2f n) { float p = 2.f*vec2f_dot(v, n); int i; for(i=0; i<2; ++i) r[i] = v[i] - p*n[i]; } 
static inline void vec2f_reflect(vec2f v, const vec2f n) { float p = 2.f*vec2f_dot(v, n); int i; for(i=0;i<2;++i) v[i] -= p*n[i]; } 
static inline float vec2f_len(const vec2f v) { return sqrtf(vec2f_dot(v,v)); } 
static inline float vec2f_len2(const vec2f v) { return vec2f_dot(v,v); } 
static inline void vec2f_normalized(vec2f r,const vec2f v) { float k = 1.f / vec2f_len(v); vec2f_scaled(r, v, k); } 
static inline void vec2f_normalize(vec2f v) { float k = 1.f / vec2f_len(v); vec2f_scale(v, k); } 
static inline void vec2f_min(vec2f r, const vec2f a, const vec2f b) { int i; for(i=0; i<2; ++i) r[i] = a[i]<b[i] ? a[i] : b[i]; } 
static inline void vec2f_max(vec2f r, const vec2f a,const vec2f b) { int i; for(i=0; i<2; ++i) r[i] = a[i]>b[i] ? a[i] : b[i]; }
/** 
@brief Vector datatype.     */ typedef float vec3f[3]; /** 
@brief Vector invert. 	  r = -a       @param[out] r Result       @param[in]  a Vector to invert     */ 
static inline void vec3f_inverted(vec3f r, const vec3f a) { int i; for(i=0; i<3; ++i) r[i] = -a[i]; } /** 
@brief In-place vector invert. 	  a = -a       @param[in,out] a Vector to invert     */ 
static inline void vec3f_invert(vec3f a) { int i; for(i=0; i<3; ++i) a[i] = -a[i]; } /** 
@brief Add two vectors. 	  r = a + b       @param[out] r Result       @param[in] a First parcel       @param[in] b Second parcel     */ 
static inline void vec3f_added(vec3f r, const vec3f a,const vec3f b) { int i; for(i=0; i<3; ++i) r[i] = a[i] + b[i]; } /** 
@brief In-place add vector. 	  a += b       @param[in,out] a First parcel and result      @param[in] b Second parcel     */ 
static inline void vec3f_add(vec3f a,const vec3f b) { int i; for(i=0; i<3; ++i) a[i] += b[i]; } /** 
@brief Subtract two vectors. 	  r = a - b       @param[out] r Difference       @param[in] a Minuend       @param[in] b Subtrahend      */ 
static inline void vec3f_subed(vec3f r, const vec3f a, const vec3f b) { int i; for(i=0; i<3; ++i) r[i] = a[i] - b[i]; } /** 
@brief In-place subtract vector.  a -= b       @param[in,out] a Minuend and difference      @param[in] b Subtrahend     */ 
static inline void vec3f_sub(vec3f a, const vec3f b) { int i; for(i=0; i<3; ++i) a[i] -= b[i]; } 
static inline void vec3f_scaled(vec3f r, const vec3f v, const float s) { int i; for(i=0; i<3; ++i) r[i] = v[i] * s; } 
static inline void vec3f_scale(vec3f v, const float s) { int i; for(i=0; i<3; ++i) v[i] *= s; } 
static inline float vec3f_dot(const vec3f a, const vec3f b) { float p = 0.f; int i; for(i=0; i<3; ++i) p += b[i]*a[i]; return p; } 
static inline void vec3f_reflected(vec3f r, const vec3f v, const vec3f n) { float p = 2.f*vec3f_dot(v, n); int i; for(i=0; i<3; ++i) r[i] = v[i] - p*n[i]; } 
static inline void vec3f_reflect(vec3f v, const vec3f n) { float p = 2.f*vec3f_dot(v, n); int i; for(i=0;i<3;++i) v[i] -= p*n[i]; } 
static inline float vec3f_len(const vec3f v) { return sqrtf(vec3f_dot(v,v)); } 
static inline float vec3f_len2(const vec3f v) { return vec3f_dot(v,v); } 
static inline void vec3f_normalized(vec3f r,const vec3f v) { float k = 1.f / vec3f_len(v); vec3f_scaled(r, v, k); } 
static inline void vec3f_normalize(vec3f v) { float k = 1.f / vec3f_len(v); vec3f_scale(v, k); } 
static inline void vec3f_min(vec3f r, const vec3f a, const vec3f b) { int i; for(i=0; i<3; ++i) r[i] = a[i]<b[i] ? a[i] : b[i]; } 
static inline void vec3f_max(vec3f r, const vec3f a,const vec3f b) { int i; for(i=0; i<3; ++i) r[i] = a[i]>b[i] ? a[i] : b[i]; }
/** 
@brief Vector datatype.     */ typedef float vec4f[4]; /** 
@brief Vector invert. 	  r = -a       @param[out] r Result       @param[in]  a Vector to invert     */ 
static inline void vec4f_inverted(vec4f r, const vec4f a) { int i; for(i=0; i<4; ++i) r[i] = -a[i]; } /** 
@brief In-place vector invert. 	  a = -a       @param[in,out] a Vector to invert     */ 
static inline void vec4f_invert(vec4f a) { int i; for(i=0; i<4; ++i) a[i] = -a[i]; } /** 
@brief Add two vectors. 	  r = a + b       @param[out] r Result       @param[in] a First parcel       @param[in] b Second parcel     */ 
static inline void vec4f_added(vec4f r, const vec4f a,const vec4f b) { int i; for(i=0; i<4; ++i) r[i] = a[i] + b[i]; } /** 
@brief In-place add vector. 	  a += b       @param[in,out] a First parcel and result      @param[in] b Second parcel     */ 
static inline void vec4f_add(vec4f a,const vec4f b) { int i; for(i=0; i<4; ++i) a[i] += b[i]; } /** 
@brief Subtract two vectors. 	  r = a - b       @param[out] r Difference       @param[in] a Minuend       @param[in] b Subtrahend      */ 
static inline void vec4f_subed(vec4f r, const vec4f a, const vec4f b) { int i; for(i=0; i<4; ++i) r[i] = a[i] - b[i]; } /** 
@brief In-place subtract vector.  a -= b       @param[in,out] a Minuend and difference      @param[in] b Subtrahend     */ 
static inline void vec4f_sub(vec4f a, const vec4f b) { int i; for(i=0; i<4; ++i) a[i] -= b[i]; } 
static inline void vec4f_scaled(vec4f r, const vec4f v, const float s) { int i; for(i=0; i<4; ++i) r[i] = v[i] * s; } 
static inline void vec4f_scale(vec4f v, const float s) { int i; for(i=0; i<4; ++i) v[i] *= s; } 
static inline float vec4f_dot(const vec4f a, const vec4f b) { float p = 0.f; int i; for(i=0; i<4; ++i) p += b[i]*a[i]; return p; } 
static inline void vec4f_reflected(vec4f r, const vec4f v, const vec4f n) { float p = 2.f*vec4f_dot(v, n); int i; for(i=0; i<4; ++i) r[i] = v[i] - p*n[i]; } 
static inline void vec4f_reflect(vec4f v, const vec4f n) { float p = 2.f*vec4f_dot(v, n); int i; for(i=0;i<4;++i) v[i] -= p*n[i]; } 
static inline float vec4f_len(const vec4f v) { return sqrtf(vec4f_dot(v,v)); } 
static inline float vec4f_len2(const vec4f v) { return vec4f_dot(v,v); } 
static inline void vec4f_normalized(vec4f r,const vec4f v) { float k = 1.f / vec4f_len(v); vec4f_scaled(r, v, k); } 
static inline void vec4f_normalize(vec4f v) { float k = 1.f / vec4f_len(v); vec4f_scale(v, k); } 
static inline void vec4f_min(vec4f r, const vec4f a, const vec4f b) { int i; for(i=0; i<4; ++i) r[i] = a[i]<b[i] ? a[i] : b[i]; } 
static inline void vec4f_max(vec4f r, const vec4f a,const vec4f b) { int i; for(i=0; i<4; ++i) r[i] = a[i]>b[i] ? a[i] : b[i]; }
/** 
@brief Set bidimensional vector values. 	  r = [x,y]       @param[out] r Output vector       @param[in] x First component       @param[in] y Second component     */ 
static inline void vec2d_set(vec2d r, const double x, const double y) { r[0] = x; r[1] = y; } /** 
@brief Set tridimensional vector values. 	  r = [x,y,z]       @param[out] r Output vector       @param[in] x First component       @param[in] y Second component       @param[in] z Third component     */ 
static inline void vec3d_set(vec3d r, const double x, const double y, const double z) { r[0] = x; r[1] = y; r[2] = z; } /** 
@brief Set 4dimensional vector values. 	  r = [x,y,z,w]       @param[out] r Output vector       @param[in] x First component       @param[in] y Second component       @param[in] z Third component       @param[in] w Fourth component     */ 
static inline void vec4d_set(vec4d r, const double x, const double y, const double z, const double w) { r[0] = x; r[1] = y; r[2] = z; r[3] = w; } 
static inline void vec2d_copy(vec2d r, const vec2d s) { r[0] = s[0]; r[1] = s[1]; } 
static inline void vec3d_copy(vec3d r, const vec3d s) { r[0] = s[0]; r[1] = s[1]; r[2] = s[2]; } 
static inline void vec4d_copy(vec4d r, const vec4d s) { r[0] = s[0]; r[1] = s[1]; r[2] = s[2]; r[3] = s[3]; } 
static inline void vec4d_from_vec3(vec4d r, const vec3d s) { r[0] = s[0]; r[1] = s[1]; r[2] = s[2]; r[3] = 0.; } 
static inline void vec3d_from_vec4(vec3d r, const vec4d s) { r[0] = s[0]; r[1] = s[1]; r[2] = s[2]; }
/** 
@brief Set bidimensional vector values. 	  r = [x,y]       @param[out] r Output vector       @param[in] x First component       @param[in] y Second component     */ 
static inline void vec2f_set(vec2f r, const float x, const float y) { r[0] = x; r[1] = y; } /** 
@brief Set tridimensional vector values. 	  r = [x,y,z]       @param[out] r Output vector       @param[in] x First component       @param[in] y Second component       @param[in] z Third component     */ 
static inline void vec3f_set(vec3f r, const float x, const float y, const float z) { r[0] = x; r[1] = y; r[2] = z; } /** 
@brief Set 4dimensional vector values. 	  r = [x,y,z,w]       @param[out] r Output vector       @param[in] x First component       @param[in] y Second component       @param[in] z Third component       @param[in] w Fourth component     */ 
static inline void vec4f_set(vec4f r, const float x, const float y, const float z, const float w) { r[0] = x; r[1] = y; r[2] = z; r[3] = w; } 
static inline void vec2f_copy(vec2f r, const vec2f s) { r[0] = s[0]; r[1] = s[1]; } 
static inline void vec3f_copy(vec3f r, const vec3f s) { r[0] = s[0]; r[1] = s[1]; r[2] = s[2]; } 
static inline void vec4f_copy(vec4f r, const vec4f s) { r[0] = s[0]; r[1] = s[1]; r[2] = s[2]; r[3] = s[3]; } 
static inline void vec4f_from_vec3(vec4f r, const vec3f s) { r[0] = s[0]; r[1] = s[1]; r[2] = s[2]; r[3] = 0.; } 
static inline void vec3f_from_vec4(vec3f r, const vec4f s) { r[0] = s[0]; r[1] = s[1]; r[2] = s[2]; }

static inline double vec2_cross(vec2 a, vec2 b)
{
 // The cross product is only defined in a three-dimensional Euclidean space.
 // Return the magnitude of 3D cross product.
 return a[0]*b[1] - a[1]*b[0];
}

static inline void vec3_cross(vec3 r, const vec3 a, const vec3 b)
{
 r[0] = a[1]*b[2] - a[2]*b[1];
 r[1] = a[2]*b[0] - a[0]*b[2];
 r[2] = a[0]*b[1] - a[1]*b[0];
}

static inline void vec4_cross(vec4 r, const vec4 a, const vec4 b)
{
 r[0] = a[1]*b[2] - a[2]*b[1];
 r[1] = a[2]*b[0] - a[0]*b[2];
 r[2] = a[0]*b[1] - a[1]*b[0];
 r[3] = 1.f;
}
/**
 * 
@brief 4x4 Matrix data type
 */
typedef float mat4x4[4][4];
/**
 * 
@brief mat4x4_make_identity M = Identity Matrix
 * @param[out] M
 */

static inline void mat4x4_make_identity(mat4x4 M)
{
 memset(M,0,16*sizeof(float));
 int i, j;
 for(i=0,j=0; i<4; ++i,++j)
  M[i][j] =1.0f;
}

static inline void mat4x4_make_translation(mat4x4 M,
             const float x,const float y,const float z)
{
 mat4x4_make_identity(M);
 M[3][0] = x;
 M[3][1] = y;
 M[3][2] = z;
}

static inline void mat4x4_make_scaling(mat4x4 M,
            const float x,const float y,const float z)
{
 mat4x4_make_identity(M);
 M[0][0] = x;
 M[1][1] = y;
 M[2][2] = z;
}

static inline void mat4x4_make_rotation(mat4x4 M,
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

static inline void mat4x4_copy(mat4x4 M, const mat4x4 N)
{
 memcpy(M,N,sizeof(float)*16); // this should be faster!
}

static inline void mat4x4_row(vec4 r, const mat4x4 M, int i)
{
 int k;
 for(k=0; k<4; ++k)
  r[k] = M[k][i];
}

static inline void mat4x4_col(vec4 r,const mat4x4 M, int i)
{
 memcpy(r,M[i],sizeof(float)*4); // this should be faster!
}

static inline void mat4x4_transposed(mat4x4 M,const mat4x4 N)
{
 int i, j;
 for(j=0; j<4; ++j)
  for(i=0; i<4; ++i)
   M[i][j] = N[j][i];
}
/**
 * 
@brief Matrix 4x4 addition R = A + B
 * @param[out] R Addition
 * @param[in] A First parcel
 * @param[in] B Second Parce
 */

static inline void mat4x4_added(mat4x4 R,const mat4x4 A,const mat4x4 B)
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
 * 
@brief In-Place matrix 4x4 addition A+=B
 * @param[in,out] A First parcel and addition
 * @param[in] B Second parcel
 */

static inline void mat4x4_add(mat4x4 A,const mat4x4 B)
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
 * 
@brief Matrix 4x4 Subtraction M = A-B
 * @param[out] M Difference
 * @param[in] A Minuend
 * @param[in] B Subtratend
 */

static inline void mat4x4_subed(mat4x4 M,const mat4x4 A,const mat4x4 B)
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
 * 
@brief In-place matrix 4x4 Subtraction A -= B
 * @param[in,out] A Minuend and difference
 * @param[in] B Subtratend
 */

static inline void mat4x4_sub(mat4x4 A,const mat4x4 B)
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
 * 
@brief Matrix 4x4 scale M = A*k
 * @param[out] M Scaled matrix
 * @param[in] A Original matrix
 * @param[in] k Scale factor
 */

static inline void mat4x4_muled_scalar(mat4x4 M,const mat4x4 A,const float k)
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
 * 
@brief In-place matrix 4x4 scale M = M*k
 * @param[in,out] M Matrix
 * @param[in] k Scale factor
 */

static inline void mat4x4_mul_scalar(mat4x4 M,const float k)
{
 float* m = (float*)M;
 int i;
 for(i= 0 ; i<16;i++)
 {
  m[i]*=k;
 }
}
/**
 * 
@brief Matrix 4x4 anisotropic scale M = A*((x,0,0,0)(0,y,0,0)(0,0,z,0)(0,0,0,1))
 * @param[out] M Scaled matrix
 * @param[in]  A Original matrix
 * @param[in]  x Scale factor in x axis
 * @param[in]  y Scale factor in y axis
 * @param[in]  z Scale factor in z axis
 */

static inline void mat4x4_scaled(mat4x4 M,const mat4x4 A,
         const float x,const float y,const float z)
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
 * 
@brief In-plca matrix 4x4 anisotropic scale M *= ((x,0,0,0)(0,y,0,0)(0,0,z,0)(0,0,0,1))
 * @param[in,out] M Matrix
 * @param[in]  x Scale factor in x axis
 * @param[in]  y Scale factor in y axis
 * @param[in]  z Scale factor in z axis
 */

static inline void mat4x4_scale(mat4x4 M,
        const float x,const float y,const float z)
{
 vec4_scale(M[0], x);
 vec4_scale(M[1], y);
 vec4_scale(M[2], z);
}
/**
 * 
@brief Matrix 4x4 multiplication R = A*B;
 * @param[in,out] R Product matrix
 * @param[in] A	First factor matrix
 * @param[in] B Second factor matrix
 */

static inline void mat4x4_mult(mat4x4 R, const mat4x4 A, const mat4x4 B)
{
 int k, r, c;
 for(c=0; c<4; ++c) for(r=0; r<4; ++r) {
  R[c][r] = 0.f;
  for(k=0; k<4; ++k)
   R[c][r] += A[k][r] * B[c][k];
 }
}
/**
 * 
@brief mat4x4_mul_vec4 r = M*v
 * @param[out] r
 * @param[in] M
 * @param[in] v
 */

static inline void mat4x4_mul_vec4(vec4 r,const mat4x4 M, const vec4 v)
{
 int i, j;
 for(j=0; j<4; ++j) {
  r[j] = 0.f;
  for(i=0; i<4; ++i)
   r[j] += M[i][j] * v[i];
 }
}
/**
 * 
@brief mat4x4_translate M = M translated by x,y,z
 * @param[out] M
 * @param[in] x
 * @param[in] y
 * @param[in] z
 */

static inline void mat4x4_translate(mat4x4 M,
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
 * 
@brief mat4x4_translated R = M translated by x,y,z
 * @param[out] R Translated matrix
 * @param[in]  M Original matrix
 * @param[in]  x x coord of tanslation vector
 * @param[in]  y y coord of tanslation vector
 * @param[in]  z z coord of tanslation vector
 */

static inline void mat4x4_translated(mat4x4 R,const mat4x4 M, const float x,const float y,const float z)
{
 mat4x4_copy(R,M);
 mat4x4_translate(R,x,y,z);
}
/**
 * 
@brief mat4x4_from_vec3_mult R = a^T * b
 * @param[out] R
 * @param[in] a
 * @param[in] b
 */

static inline void mat4x4_from_vec3_mult(mat4x4 R,const vec3 a,const vec3 b)
{
 int i, j;
 mat4x4_make_identity(R);
 for(i=0; i<3; ++i)
  for(j=0; j<3; ++j)
   R[i][j] = a[i] * b[j];
}
/**
 * 
@brief mat4x4_from_vec3_mult R = a^T * b
 * @param[out] R
 * @param[in] a
 * @param[in] b
 */

static inline void mat4x4_from_vec4_mult(mat4x4 R,const vec4 a,const vec4 b)
{
 int i, j;
 for(i=0; i<4; ++i)
  for(j=0; j<4; ++j)
   R[i][j] = a[i] * b[j];
}

static inline void mat4x4_rotated(mat4x4 R, const mat4x4 M,
          const float x,const float y,const float z,
          float angle_rad)
{
 mat4x4 Q;
 mat4x4_make_rotation(Q,x,y,z,angle_rad);
 mat4x4_mult(R,M,Q);
}

static inline void mat4x4_rotated_X(mat4x4 R,const mat4x4 M,
         const float angle_rad)
{
 float s = sinf(angle_rad);
 float c = cosf(angle_rad);
 mat4x4 Q = {
  {1.f, 0.f, 0.f, 0.f},
  {0.f, c, s, 0.f},
  {0.f, -s, c, 0.f},
  {0.f, 0.f, 0.f, 1.f}
 };
 mat4x4_mult(R, M, Q);
}

static inline void mat4x4_rotated_Y(mat4x4 R,const mat4x4 M,
         const float angle_rad)
{
 float s = sinf(angle_rad);
 float c = cosf(angle_rad);
 mat4x4 Q = {
  { c, 0.f, s, 0.f},
  { 0.f, 1.f, 0.f, 0.f},
  { -s, 0.f, c, 0.f},
  { 0.f, 0.f, 0.f, 1.f}
 };
 mat4x4_mult(R, M, Q);
}

static inline void mat4x4_rotated_Z(mat4x4 R,const mat4x4 M,
         const float angle_rad)
{
 float s = sinf(angle_rad);
 float c = cosf(angle_rad);
 mat4x4 Q = {
  { c, s, 0.f, 0.f},
  { -s, c, 0.f, 0.f},
  { 0.f, 0.f, 1.f, 0.f},
  { 0.f, 0.f, 0.f, 1.f}
 };
 mat4x4_mult(R, M, Q);
}
/**
@brief mat4x4_inverse R = M^-1
 * @param[out] R
 * @param[in] M
 */

static inline void mat4x4_inverse(mat4x4 R,const mat4x4 M)
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

static inline void mat4x4_orthonormalized(mat4x4 R,const mat4x4 M)
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

static inline void mat4x4_make_frustum(mat4x4 M,
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

static inline void mat4x4_make_ortho(mat4x4 M,
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

static inline void mat4x4_make_perspective(mat4x4 R,
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

static inline void mat4x4_make_look_at(mat4x4 R,
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
 R[0][0] = s[0];
 R[0][1] = t[0];
 R[0][2] = -f[0];
 R[0][3] = 0.f;
 R[1][0] = s[1];
 R[1][1] = t[1];
 R[1][2] = -f[1];
 R[1][3] = 0.f;
 R[2][0] = s[2];
 R[2][1] = t[2];
 R[2][2] = -f[2];
 R[2][3] = 0.f;
 R[3][0] = -1.0f * vec3_dot(s,eye);
 R[3][1] = -1.0f * vec3_dot(t,eye);
 R[3][2] = 1.0f * vec3_dot(f,eye);
 R[3][3] = 1.f;
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
 * 
@brief Quaternion data type
 * 
@param [0] = w : Real coefficient
 * 
@param [1] = x : Coefficient of the i complex vector
 * 
@param [2] = y : Coefficient of the j complex vector
 * 
@param [3] = z : Coefficient of the k complex vector
 *
 * A quaternion is a four-dimensional number used to represent 3D rotations.
 * This implementation uses scalar-first convention: (w, x, y, z).
 */
typedef float quat[4];
/**
 * 
@brief Set quaternion components.
 *
 * Initializes a quaternion using scalar-first convention (w, x, y, z).
 *
 * @param[out] q Quaternion to initialize
 * @param[in]  w Scalar component
 * @param[in]  x X component (imaginary i)
 * @param[in]  y Y component (imaginary j)
 * @param[in]  z Z component (imaginary k)
 */

static inline void quat_set(quat q, const float w, const float x, const float y, const float z)
{
 q[0] = w;
 q[1] = x;
 q[2] = y;
 q[3] = z;
}
/**
 * 
@brief Set quaternion from scalar and vector part.
 *
 * @param[out] q Quaternion to initialize
 * @param[in]  w Scalar component
 * @param[in]  xyz Vector part (x,y,z)
 */

static inline void quat_set_vec(quat q, const float w, const vec3 xyz)
{
 q[0] = w;
 q[1] = xyz[0];
 q[2] = xyz[1];
 q[3] = xyz[2];
}
/**
 * 
@brief Set quaternion to identity.
 *
 * Identity quaternion represents no rotation.
 *
 * @param[out] q Quaternion set to (1,0,0,0)
 */

static inline void quat_make_identity(quat q)
{
 q[1] = q[2] = q[3] = 0.0f;
 q[0] = 1.0f;
}
/**
 * 
@brief Create quaternion from Euler angles.
 *
 * Converts roll, pitch, yaw (radians) into a quaternion.
 * Rotation order: Z (yaw), Y (pitch), X (roll).
 *
 * @param[out] q Result quaternion
 * @param[in]  roll Rotation around X axis (rad)
 * @param[in]  pitch Rotation around Y axis (rad)
 * @param[in]  yaw Rotation around Z axis (rad)
 */

static inline void quat_make_from_euler(quat q,
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
 * 
@brief Create quaternion from Euler vector.
 *
 * @param[out] q Result quaternion
 * @param[in]  rpy Vector (roll, pitch, yaw)
 */

static inline void quat_make_from_euler_vec(quat q, const vec3 rpy)
{
 quat_make_from_euler(q, rpy[0], rpy[1], rpy[2]);
}
/**
 * 
@brief Create quaternion from axis-angle.
 *
 * Axis is normalized internally.
 *
 * @param[out] r Result quaternion
 * @param[in]  x Axis X
 * @param[in]  y Axis Y
 * @param[in]  z Axis Z
 * @param[in]  angle Rotation angle (rad)
 */

static inline void quat_make_from_rotation(quat r,
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
 * 
@brief Create quaternion from axis-angle vector.
 *
 * @param[out] r Result quaternion
 * @param[in]  axis Rotation axis
 * @param[in]  angle Rotation angle (rad)
 */

static inline void quat_make_from_rotation_vec(quat r,
            const vec3 axis,
            const float angle)
{
 quat_make_from_rotation(r, axis[0], axis[1], axis[2], angle);
}
/**
 * 
@brief Convert quaternion to Euler angles.
 *
 * Outputs roll, pitch, yaw (radians).
 * Input quaternion should be normalized.
 *
 * @param[out] rpy Output vector
 * @param[in]  q Input quaternion
 */

static inline void quat_to_euler(vec3 rpy, const quat q)
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
 * 
@brief Add two quaternions (out-of-place).
 */

static inline void quat_added(quat r,const quat a,const quat b)
{
 for(int i=0;i<4;++i) r[i]=a[i]+b[i];
}
/**
 * 
@brief Add quaternion in-place.
 */

static inline void quat_add(quat a,const quat b)
{
 for(int i=0;i<4;++i) a[i]+=b[i];
}
/**
 * 
@brief Subtract two quaternions (out-of-place).
 */

static inline void quat_subed(quat r,const quat a,const quat b)
{
 for(int i=0;i<4;++i) r[i]=a[i]-b[i];
}
/**
 * 
@brief Subtract quaternion in-place.
 */

static inline void quat_sub(quat a,const quat b)
{
 for(int i=0;i<4;++i) a[i]-=b[i];
}
/**
 * 
@brief Quaternion multiplication (Hamilton product).
 */

static inline void quat_muled(quat r,const quat a,const quat b)
{
 r[1]=a[0]*b[1]+a[1]*b[0]+a[2]*b[3]-a[3]*b[2];
 r[2]=a[0]*b[2]+a[2]*b[0]+a[3]*b[1]-a[1]*b[3];
 r[3]=a[0]*b[3]+a[3]*b[0]+a[1]*b[2]-a[2]*b[1];
 r[0]=a[0]*b[0]-a[1]*b[1]-a[2]*b[2]-a[3]*b[3];
}
/**
 * 
@brief Multiply quaternion by scalar (out-of-place).
 */

static inline void quat_muled_scalar(quat r,const quat v,const float s)
{
 for(int i=0;i<4;++i) r[i]=v[i]*s;
}
/**
 * 
@brief Multiply quaternion by scalar in-place.
 */

static inline void quat_mul_scalar(quat r,const float s)
{
 for(int i=0;i<4;++i) r[i]*=s;
}
/**
 * 
@brief Dot product between quaternions.
 */

static inline float quat_dot(const quat a,const quat b)
{
 float p=0.f;
 for(int i=0;i<4;++i) p+=b[i]*a[i];
 return p;
}
/**
 * 
@brief Conjugate quaternion (out-of-place).
 */

static inline void quat_conjugated(quat r,const quat q)
{
 for(int i=1;i<4;++i) r[i]=-q[i];
 r[0]=q[0];
}
/**
 * 
@brief Conjugate quaternion in-place.
 */

static inline void quat_conjugate(quat q)
{
 for(int i=1;i<4;++i) q[i]*=-1.0f;
}
/**
 * 
@brief Rotate a 3D vector using quaternion.
 */

static inline void quat_mul_vec3(vec3 r,const quat q,const vec3 v)
{
 vec3 a,b;
 const vec3 qv={q[1],q[2],q[3]};
 vec3_cross(a,qv,v);
 vec3_cross(b,qv,a);
 for(int i=0;i<3;i++)
  r[i]=v[i]+((a[i]*q[0])+b[i])*2.0f;
}
/**
 * 
@brief Rotate a 4D vector using quaternion.
 */

static inline void quat_mul_vec4(vec4 r,const quat q,const vec4 v)
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
 * 
@brief Convert quaternion to 4x4 rotation matrix.
 */

static inline void quat_to_mat4x4(mat4x4 M,const quat q)
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
 * 
@brief Create quaternion from rotation matrix.
 */

static inline void quat_make_from_mat4x4(quat q,const mat4x4 M)
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
