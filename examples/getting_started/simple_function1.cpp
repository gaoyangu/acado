/*
 *    This file is part of ACADO Toolkit.
 *
 *    ACADO Toolkit -- A Toolkit for Automatic Control and Dynamic Optimization.
 *    Copyright (C) 2008-2014 by Boris Houska, Hans Joachim Ferreau,
 *    Milan Vukov, Rien Quirynen, KU Leuven.
 *    Developed within the Optimization in Engineering Center (OPTEC)
 *    under supervision of Moritz Diehl. All rights reserved.
 *
 *    ACADO Toolkit is free software; you can redistribute it and/or
 *    modify it under the terms of the GNU Lesser General Public
 *    License as published by the Free Software Foundation; either
 *    version 3 of the License, or (at your option) any later version.
 *
 *    ACADO Toolkit is distributed in the hope that it will be useful,
 *    but WITHOUT ANY WARRANTY; without even the implied warranty of
 *    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 *    Lesser General Public License for more details.
 *
 *    You should have received a copy of the GNU Lesser General Public
 *    License along with ACADO Toolkit; if not, write to the Free Software
 *    Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA
 *
 */



 /**
 *    \file   examples/getting_started/simple_function1.cpp
 *    \author Boris Houska, Hans Joachim Ferreau
 *    \date   2009
 */

#include <acado_toolkit.hpp>


int main( ){

    USING_NAMESPACE_ACADO


    DifferentialState x;
    IntermediateState z;
    TIME              t;
    Function          f;

    z = 0.5*x + 1.0    ;

    f << exp(x) + t    ;
    f << exp(z+exp(z)) ;

    printf("the dimension of f is %d   \n",  f.getDim() );
    printf("f depends on  %d  states   \n",  f.getNX () );
    printf("f depends on  %d  controls \n",  f.getNU () );

    if( f.isConvex() == BT_TRUE )
        printf("all components of function f are convex. \n");


    return 0;
}


