#include <Rdefines.h>


#include <libxml/xmlversion.h>

SEXP
R_libxml2_version()
{
    return( ScalarString(mkChar(LIBXML_DOTTED_VERSION)) );
}

SEXP
R_checkLibxml2Version(SEXP val)
{
    return( ScalarLogical() );
}
