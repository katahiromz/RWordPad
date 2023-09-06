#include <windows.h>
#include <stdlib.h>
#include <strsafe.h>
#include <wine/debug.h>

int wine_dbg_printf( const char *format, ... )
{
    return 0;
}

const char *wine_dbg_sprintf( const char *format, ... )
{
    return "";
}

int ros_dbg_log(enum __wine_debug_class cls, struct __wine_debug_channel *channel,
                const char *file, const char *func, const int line, const char *format, ...)
{
    return 0;
}
