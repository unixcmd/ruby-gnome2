/* -*- c-file-style: "ruby"; indent-tabs-mode: nil -*- */
/*
 *  Copyright (C) 2012  Ruby-GNOME2 Project Team
 *
 *  This library is free software; you can redistribute it and/or
 *  modify it under the terms of the GNU Lesser General Public
 *  License as published by the Free Software Foundation; either
 *  version 2.1 of the License, or (at your option) any later version.
 *
 *  This library is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 *  Lesser General Public License for more details.
 *
 *  You should have received a copy of the GNU Lesser General Public
 *  License along with this library; if not, write to the Free Software
 *  Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 *  MA  02110-1301  USA
 */

#ifndef RB_GI_TYPES_H
#define RB_GI_TYPES_H

#define GI_TYPE_CALLABLE_INFO        (gi_callable_info_get_type())
#define GI_TYPE_FUNCTION_INFO        (gi_function_info_get_type())
#define GI_TYPE_REGISTERED_TYPE_INFO (gi_registered_type_info_get_type())
#define GI_TYPE_STRUCT_INFO          (gi_struct_info_get_type())
#define GI_TYPE_ENUM_INFO            (gi_enum_info_get_type())
#define GI_TYPE_FLAGS_INFO           (gi_flags_info_get_type())
#define GI_TYPE_OBJECT_INFO          (gi_object_info_get_type())
#define GI_TYPE_INTERFACE_INFO       (gi_interface_info_get_type())
#define GI_TYPE_VALUE_INFO           (gi_value_info_get_type())
#define GI_TYPE_VFUNC_INFO           (gi_vfunc_info_get_type())
#define GI_TYPE_PROPERTY_INFO        (gi_property_info_get_type())
#define GI_TYPE_FIELD_INFO           (gi_field_info_get_type())
#define GI_TYPE_ARG_INFO             (gi_arg_info_get_type())
#define GI_TYPE_TYPE_INFO            (gi_type_info_get_type())

GType gi_callable_info_get_type(void);
GType gi_function_info_get_type(void);
GType gi_registered_type_info_get_type(void);
GType gi_struct_info_get_type(void);
GType gi_enum_info_get_type(void);
GType gi_flags_info_get_type(void);
GType gi_object_info_get_type(void);
GType gi_interface_info_get_type(void);
GType gi_value_info_get_type(void);
GType gi_vfunc_info_get_type(void);
GType gi_property_info_get_type(void);
GType gi_field_info_get_type(void);
GType gi_arg_info_get_type(void);
GType gi_type_info_get_type(void);


#endif
