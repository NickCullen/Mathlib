
#ifdef _WIN32
#	define DEFINE_API_IMPORT __declspec( dllimport )		
#else											
#  define DEFINE_API_IMPORT								
#endif					

#ifdef _WIN32
#	define DEFINE_API_EXPORT __declspec( dllexport )		
#else											
#  define DEFINE_API_EXPORT								
#endif			

#ifdef VICI_ENGINE
#ifdef Core_EXPORTS
#define MATH_API DEFINE_API_EXPORT
#else
#define MATH_API DEFINE_API_IMPORT
#endif
#else
#ifdef Math_EXPORTS
#define MATH_API DEFINE_API_EXPORT
#else
#define MATH_API DEFINE_API_IMPORT
#endif
#endif
