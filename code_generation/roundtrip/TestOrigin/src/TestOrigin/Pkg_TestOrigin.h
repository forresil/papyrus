#ifndef PKG_TESTORIGIN
#define PKG_TESTORIGIN

/************************************************************
 Pkg_TestOrigin package header
 ************************************************************/

#include <string>

#ifndef _IN_
#define _IN_
#endif
#ifndef _OUT_
#define _OUT_
#endif
#ifndef _INOUT_
#define _INOUT_
#endif

/* Package dependency header include                        */

namespace TestOrigin {

using std::__cxx11::string;

// Types defined within the package

/**
 * 
 */
enum Status {
	/**
	 * 
	 */
	ON,
	/**
	 * 
	 */
	OFF
};
} // of namespace TestOrigin

/************************************************************
 End of Pkg_TestOrigin package header
 ************************************************************/

#endif
