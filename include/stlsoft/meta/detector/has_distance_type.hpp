/* /////////////////////////////////////////////////////////////////////////
 * File:        stlsoft/meta/detector/has_distance_type.hpp (originally MTBase.h, ::SynesisStl)
 *
 * Purpose:     Definition of the has_distance_type member type detector.
 *
 * Created:     19th November 1998
 * Updated:     11th January 2017
 *
 * Home:        http://stlsoft.org/
 *
 * Copyright (c) 1998-2017, Matthew Wilson and Synesis Software
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are
 * met:
 *
 * - Redistributions of source code must retain the above copyright notice,
 *   this list of conditions and the following disclaimer.
 * - Redistributions in binary form must reproduce the above copyright
 *   notice, this list of conditions and the following disclaimer in the
 *   documentation and/or other materials provided with the distribution.
 * - Neither the name(s) of Matthew Wilson and Synesis Software nor the
 *   names of any contributors may be used to endorse or promote products
 *   derived from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS
 * IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO,
 * THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR
 * PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR
 * CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,
 * EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
 * PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR
 * PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF
 * LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING
 * NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
 * SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *
 * ////////////////////////////////////////////////////////////////////// */


/** \file stlsoft/meta/detector/has_distance_type.hpp
 *
 * \brief [C++ only] Definition of the stlsoft::has_distance_type member
 *   type detector class template
 *   (\ref group__library__Metaprogramming "Metaprogramming" Library).
 */

#ifndef STLSOFT_INCL_STLSOFT_META_DETECTOR_HPP_HAS_DISTANCE_TYPE
#define STLSOFT_INCL_STLSOFT_META_DETECTOR_HPP_HAS_DISTANCE_TYPE

#ifndef STLSOFT_DOCUMENTATION_SKIP_SECTION
# define STLSOFT_VER_STLSOFT_META_DETECTOR_HPP_HAS_DISTANCE_TYPE_MAJOR      4
# define STLSOFT_VER_STLSOFT_META_DETECTOR_HPP_HAS_DISTANCE_TYPE_MINOR      0
# define STLSOFT_VER_STLSOFT_META_DETECTOR_HPP_HAS_DISTANCE_TYPE_REVISION   4
# define STLSOFT_VER_STLSOFT_META_DETECTOR_HPP_HAS_DISTANCE_TYPE_EDIT       136
#endif /* !STLSOFT_DOCUMENTATION_SKIP_SECTION */

/* /////////////////////////////////////////////////////////////////////////
 * includes
 */

#ifndef STLSOFT_INCL_STLSOFT_H_STLSOFT
# include <stlsoft/stlsoft.h>
#endif /* !STLSOFT_INCL_STLSOFT_H_STLSOFT */
#ifdef STLSOFT_TRACE_INCLUDE
# pragma message(__FILE__)
#endif /* STLSOFT_TRACE_INCLUDE */

#ifndef STLSOFT_INCL_STLSOFT_META_HPP_CAPABILITIES
# include <stlsoft/meta/capabilities.hpp>
#endif /* !STLSOFT_INCL_STLSOFT_META_HPP_CAPABILITIES */
#ifndef STLSOFT_INCL_STLSOFT_META_HPP_N_TYPES
# include <stlsoft/meta/n_types.hpp>
#endif /* !STLSOFT_INCL_STLSOFT_META_HPP_N_TYPES */

/* /////////////////////////////////////////////////////////////////////////
 * namespace
 */

#ifndef STLSOFT_NO_NAMESPACE
namespace stlsoft
{
#endif /* STLSOFT_NO_NAMESPACE */

/* /////////////////////////////////////////////////////////////////////////
 * classes
 */

template <ss_typename_param_k T>
one_t has_distance_type_function(...);

template <ss_typename_param_k T>
eleven_t has_distance_type_function(ss_typename_type_k T::distance_type const volatile *);

/** traits type used to determine whether a given type has a member \c distance_type
 *
 * \ingroup group__library__Metaprogramming
 */
template <ss_typename_param_k T>
struct has_distance_type
{
    typedef T   test_type;

private:
    static T    t;
public:

    enum { value = sizeof(has_distance_type_function<T>(0)) == sizeof(eleven_t) };
};

#ifndef STLSOFT_DOCUMENTATION_SKIP_SECTION

STLSOFT_TEMPLATE_SPECIALISATION
struct has_distance_type<void>
{
    typedef void    test_type;

    enum { value = 0 };
};

#endif /* !STLSOFT_DOCUMENTATION_SKIP_SECTION */


/* ////////////////////////////////////////////////////////////////////// */

#ifndef STLSOFT_NO_NAMESPACE
} /* namespace stlsoft */
#endif /* STLSOFT_NO_NAMESPACE */

/* ////////////////////////////////////////////////////////////////////// */

#endif /* !STLSOFT_INCL_STLSOFT_META_DETECTOR_HPP_HAS_DISTANCE_TYPE */

/* ///////////////////////////// end of file //////////////////////////// */