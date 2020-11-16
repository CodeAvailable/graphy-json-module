#include "graphyJsonModule.h"

namespace graphyJsonModule
{
#ifdef _WIN32
	long _stdcall test()
#elif linux
	long test()
#endif
	{
        return 1;
	}
}
