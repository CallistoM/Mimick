/* random_minute_generator.h */
#ifndef RANDOMMINUTEGENERATOR_H_
# define RANDOMMINUTEGENERATOR_H_

# ifdef _MSC_VER
#  ifdef DLL_EXPORT
#   define API __declspec(dllexport)
#  else
#   define API __declspec(dllimport)
#  endif
# else
#  define API
# endif

API void RandomMinuteGenerator_Get(void);

#endif /* !RANDOMMINUTEGENERATOR_H_ */