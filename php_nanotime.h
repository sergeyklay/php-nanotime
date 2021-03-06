#ifndef PHP_NANOTIME_H
#define PHP_NANOTIME_H

#ifdef HAVE_CONFIG_H
#include "config.h"
#endif

#include <php.h>

#ifdef HAVE_NANOTIME

#define PHP_NANOTIME_NAME "nanotime"
#define PHP_NANOTIME_VERSION "1.0.0"
#define PHP_NANOTIME_AUTHOR "The nanotime team and contributors"
#define PHP_NANOTIME_DESCRIPTION "PHP bindings for libnanotime for nanosecond precision timestamps."

PHP_MINFO_FUNCTION(nanotime);
PHP_FUNCTION(nanotime_second);
PHP_FUNCTION(nanotime_time);

#include <php_ini.h>
#include <SAPI.h>
#include <ext/standard/info.h>
#include <Zend/zend_extensions.h>

extern zend_module_entry nanotime_module_entry;
#define phpext_nanotime_ptr &nanotime_module_entry

#ifdef ZTS
#include "TSRM.h"
#endif

#endif /* PHP_HAVE_NANOTIME */

#endif /* PHP_NANOTIME_H */
