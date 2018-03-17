#include <stdio.h>

int main()
{

// Unix-like
#ifdef __linux__
	printf("Defined __linux__\n");
#endif

#ifdef __gnu_linux__
	printf("Defined __gnu_linux__\n");
#endif

#ifdef __unix__
        printf("Defined __unix__\n");
#endif

#ifdef __unix
        printf("Defined __unix\n");
#endif

#ifdef __linux
        printf("Defined __linux\n");
#endif

#ifdef linux
        printf("Defined linux\n");
#endif

// Android
#ifdef __ANDROID__
        printf("Defined __ANDROID__\n");

  #ifdef __ANDROID_API__
	printf("Android api level is %d\n", __ANDROID_API__);
  #endif

#endif

// Mac OS
#ifdef __APPLE__
        printf("Defined __APPLE__\n");

  #ifdef TARGET_OS_MAC
	printf("Defined TARGET_OS_MAC\n");
  #endif

  #ifdef TARGET_OS_IPHONE
	printf("Defined TARGET_OS_IPHONE\n");
  #endif

  #ifdef TARGET_IPHONE_SIMULATOR
	printf("Defined TARGET_IPHONE_SIMULATOR\n");
  #endif

#endif

// Windows
#ifdef _WIN16
        printf("Defined _WIN16\n");
#endif

#ifdef _WIN32
        printf("Defined _WIN32\n");
#endif

#ifdef _WIN64
        printf("Defined _WIN64\n");
#endif

#ifdef __WIN32__
	printf("Defined __WIN32__\n");
#endif

#ifdef __WINDOWS__
	printf("Defined __WINDOWS__\n");
#endif

	return 0;
}


