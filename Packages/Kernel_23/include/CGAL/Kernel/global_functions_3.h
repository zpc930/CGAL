// Copyright (c) 2003  Utrecht University (The Netherlands),
// ETH Zurich (Switzerland), Freie Universitaet Berlin (Germany),
// INRIA Sophia-Antipolis (France), Martin-Luther-University Halle-Wittenberg
// (Germany), Max-Planck-Institute Saarbruecken (Germany), RISC Linz (Austria),
// and Tel-Aviv University (Israel).  All rights reserved.
//
// This file is part of CGAL (www.cgal.org); you can redistribute it and/or
// modify it under the terms of the GNU Lesser General Public License as
// published by the Free Software Foundation; version 2.1 of the License.
// See the file LICENSE.LGPL distributed with CGAL.
//
// Licensees holding a valid commercial license may use this file in
// accordance with the commercial license agreement provided with the software.
//
// This file is provided AS IS with NO WARRANTY OF ANY KIND, INCLUDING THE
// WARRANTY OF DESIGN, MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE.
//
// $Source$
// $Revision$ $Date$
// $Name$
//
// Author(s)     : Sylvain Pion
 
#ifndef CGAL_KERNEL_GLOBAL_FUNCTIONS_3_H
#define CGAL_KERNEL_GLOBAL_FUNCTIONS_3_H

// Generic functions calling the kernel functor.

CGAL_BEGIN_NAMESPACE

template <typename K>
inline
typename K::Plane_3
bisector(const typename CGAL_WRAP(K)::Point_3 &p,
         const typename CGAL_WRAP(K)::Point_3 &q, const K &k)
{
  return k.construct_bisector_3_object()(p, q);
}

template <typename K>
inline
typename K::Plane_3
bisector(const typename CGAL_WRAP(K)::Plane_3 &h1,
         const typename CGAL_WRAP(K)::Plane_3 &h2, const K &k)
{
  return k.construct_bisector_3_object()(h1, h2);
}

template <typename K>
inline
typename K::Plane_3
bisector(const Point_3<K> &p, const Point_3<K> &q)
{
  return bisector(p, q, K());
}

template <typename K>
inline
typename K::Plane_3
bisector(const Plane_3<K> &h1, const Plane_3<K> &h2)
{
  return bisector(h1, h2, K());
}

template <typename K>
inline
bool
parallel(const typename CGAL_WRAP(K)::Line_3 &l1,
         const typename CGAL_WRAP(K)::Line_3 &l2, const K &k)
{
  return k.are_parallel_3_object()(l1, l2);
}

template <typename K>
inline
bool
parallel(const typename CGAL_WRAP(K)::Plane_3 &h1,
         const typename CGAL_WRAP(K)::Plane_3 &h2, const K &k)
{
  return k.are_parallel_3_object()(h1, h2);
}

template <typename K>
inline
bool
parallel(const typename CGAL_WRAP(K)::Ray_3 &r1,
         const typename CGAL_WRAP(K)::Ray_3 &r2, const K &k)
{
  return k.are_parallel_3_object()(r1, r2);
}

template <typename K>
inline
bool
parallel(const typename CGAL_WRAP(K)::Segment_3 &s1,
         const typename CGAL_WRAP(K)::Segment_3 &s2, const K &k)
{
  return k.are_parallel_3_object()(s1, s2);
}

CGAL_END_NAMESPACE

#endif  // CGAL_KERNEL_GLOBAL_FUNCTIONS_3_H
