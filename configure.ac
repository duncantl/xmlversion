AC_INIT(DESCRIPTION)

AC_PATH_PROGS(XML_CONFIG, xml2-config)

XML_VERSION=`${XML_CONFIG} --version`


CFLAGS="$CFLAGS `${XML_CONFIG} --cflags`"

AC_SUBST(XML_VERSION)
AC_SUBST(XML_CONFIG)

PKG_CPPFLAGS=""
AC_SUBST(PKG_CPPFLAGS)


AC_COMPILE_IFELSE([AC_LANG_PROGRAM([[
    #include <libxml/xpath.h>
               ]], [[
	       xmlNodePtr node;
	       xmlXPathNodeEval(node, "//", NULL);
	       ]])],[PKG_CPPFLAGS="$PKG_CPPFLAGS -DHAS_XPATH_NODE_EVAL=1";
	       echo "enabling XPathNodeEval";
	       ],[echo "XPathNodeEval not available in this version of libxml2"
	       ])




AC_CONFIG_FILES(src/Makevars R/version.R)
AC_OUTPUT()




