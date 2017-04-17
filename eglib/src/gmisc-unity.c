/*
* gmisc.c: Misc functions with no place to go (right now)
*
* Author:
*   Aaron Bockover (abockover@novell.com)
*
* (C) 2006 Novell, Inc.
*
* Permission is hereby granted, free of charge, to any person obtaining
* a copy of this software and associated documentation files (the
* "Software"), to deal in the Software without restriction, including
* without limitation the rights to use, copy, modify, merge, publish,
* distribute, sublicense, and/or sell copies of the Software, and to
* permit persons to whom the Software is furnished to do so, subject to
* the following conditions:
*
* The above copyright notice and this permission notice shall be
* included in all copies or substantial portions of the Software.
*
* THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
* EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
* MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
* NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE
* LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION
* OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION
* WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
*/
﻿#ifdef PLATFORM_UNITY

#include <stdlib.h>
#include <glib.h>

const gchar *
g_getenv(const gchar *variable)
{

}

gboolean
g_setenv(const gchar *variable, const gchar *value, gboolean overwrite)
{
}

void
g_unsetenv(const gchar *variable)
{
}

gchar*
g_win32_getlocale(void)
{
}

gboolean
g_path_is_absolute(const char *filename)
{
}

const gchar *
g_get_home_dir(void)
{
}

const char *
g_get_user_name(void)
{
}

#include "Path-c-api.h"

static const char *tmp_dir;

const gchar *
g_get_tmp_dir(void)
{
    if (tmp_dir == NULL)
        tmp_dir = il2cpp_os_Path_GetTempPath();

    return tmp_dir;
}

#endif // PLATFORM_UNITY
