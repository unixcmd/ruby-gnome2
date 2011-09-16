/* -*- c-file-style: "ruby" -*- */
/*
 * Ruby/GIO: a Ruby binding of gio-2.0.x.
 * Copyright (C) 2008-2009  Ruby-GNOME2 Project Team
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 */

#include "gio2.h"

#define _SELF(value) G_THEMED_ICON(RVAL2GOBJ(value))

/* TODO: Is this unnecessarily complicated? */
static VALUE
themedicon_initialize(int argc, VALUE *argv, VALUE self)
{
        VALUE iconnames, with_default_fallbacks;
        GIcon *icon;

        rb_scan_args(argc, argv, "11", &iconnames, &with_default_fallbacks);

        if (TYPE(iconnames) != T_ARRAY) {
                const char *iconname = RVAL2CSTR(iconnames);

                icon = RVAL2CBOOL(with_default_fallbacks) ?
                        g_themed_icon_new_with_default_fallbacks(iconname) :
                        g_themed_icon_new(iconname);

                G_INITIALIZE(self, icon);

                return Qnil;
        }

        if (argc > 1)
                rb_raise(rb_eArgError,
                         "only one argument allowed when first argument is an Array");

        icon = g_themed_icon_new_from_names(RVAL2STRV_DUP(iconnames), -1);

        G_INITIALIZE(self, icon);

        return Qnil;
}

static VALUE
themedicon_prepend_name(VALUE self, VALUE iconname)
{
        g_themed_icon_prepend_name(_SELF(self), RVAL2CSTR(iconname));

        return self;
}

static VALUE
themedicon_append_name(VALUE self, VALUE iconname)
{
        g_themed_icon_append_name(_SELF(self), RVAL2CSTR(iconname));

        return self;
}

void
Init_gthemedicon(VALUE glib)
{
        VALUE themedicon = G_DEF_INTERFACE(G_TYPE_THEMED_ICON, "ThemedIcon", glib);

        rb_define_method(themedicon, "initialize", themedicon_initialize, -1);
        rb_define_method(themedicon, "prepend_name", themedicon_prepend_name, 1);
        rb_define_method(themedicon, "append_name", themedicon_append_name, 1);
}
