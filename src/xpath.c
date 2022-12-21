#include <libxml/xpath.h>
#include <Rdefines.h>
#include <R_ext/Error.h>

SEXP
R_XPathNodeEval()
{
#ifdef HAS_XPATH_NODE_EVAL
    void *p = &xmlXPathNodeEval;
#else
    Rf_error("No xmlXPathNodeEval in this version of libxml2");
#endif
    return(R_NilValue);
}
