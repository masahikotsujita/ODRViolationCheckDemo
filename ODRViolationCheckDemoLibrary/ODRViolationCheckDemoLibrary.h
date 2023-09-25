#ifndef ODRVIOLATIONCHECKDEMOLIBRARY_ODRVIOLATIONCHECKDEMOLIBRARY_H
#define ODRVIOLATIONCHECKDEMOLIBRARY_ODRVIOLATIONCHECKDEMOLIBRARY_H
#include <cstdio>

namespace ODRViolationCheckDemoLibrary
{

class ODRViolationCheckDemoLibrary
{
public:
void HelloWorld()
	{
#ifdef ODRVIOLATIONCHECKDEMO_FLAG
		printf("Hero World!!\n");
#else
		printf("Hello world!\n");
#endif
	}

	void HelloWorld2();

};

}

#endif // ODRVIOLATIONCHECKDEMOLIBRARY_ODRVIOLATIONCHECKDEMOLIBRARY_H
