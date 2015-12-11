
#ifdef WIN32
#	define DEFINE_API_IMPORT __declspec( dllimport )		
#else											
#  define DEFINE_API_IMPORT								
#endif					

#ifdef WIN32
#	define DEFINE_API_EXPORT __declspec( dllexport )		
#else											
#  define DEFINE_API_EXPORT								
#endif			

#ifdef Math_EXPORTS
#define MATH_API DEFINE_API_EXPORT
#else
#define MATH_API DEFINE_API_IMPORT
#endif