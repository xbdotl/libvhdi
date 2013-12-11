/*
 * Error functions
 *
 * Copyright (c) 2012-2013, Joachim Metz <joachim.metz@gmail.com>
 *
 * Refer to AUTHORS for acknowledgements.
 *
 * This software is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This software is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this software.  If not, see <http://www.gnu.org/licenses/>.
 */

#if !defined( _PYVHDI_ERROR_H )
#define _PYVHDI_ERROR_H

#include <common.h>
#include <types.h>

#include "pyvhdi_libcerror.h"
#include "pyvhdi_python.h"

#define PYVHDI_ERROR_FORMAT_STRING_SIZE		128
#define PYVHDI_ERROR_STRING_SIZE		512

#if defined( __cplusplus )
extern "C" {
#endif

void pyvhdi_error_raise(
      PyObject *exception_object,
      const char *format_string,
      const char *function,
      libcerror_error_t *error );

#if defined( __cplusplus )
}
#endif

#endif
