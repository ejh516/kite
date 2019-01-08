/****************************************************************/
/*                                                              */
/*  Copyright (C) 2018, M. Andelkovic, L. Covaci, A. Ferreira,  */
/*                    S. M. Joao, J. V. Lopes, T. G. Rappoport  */
/*                                                              */
/****************************************************************/

#include <stdio.h>		
#include <stdlib.h>
#include <iostream>
#include <fstream>
#include <functional>
#include <cmath>
#include <math.h>
#include <Eigen/Dense>
#include <complex>
#include <string>
#include <omp.h>


#define outcol "\033[1;31m"
#define outres "\033[0m"

#ifndef DEBUG
#define DEBUG 0
#endif
#define debug1 0

#ifndef VERBOSE
#define VERBOSE 1
#endif

// The first scale is 1/2pi and corresponds to the conductance quantum per spin e^2/h
// The second scale is the universal conductivity of graphene e^2/4h_bar
#define scale1 0.159154943
#define scale2 0.25
#define unit_scale 0.159154943

#ifdef VERBOSE
	#if VERBOSE==1
		#define verbose_message(VAR) std::cout<<VAR<<std::flush
	#else
		#define verbose_message(VAR) 
	#endif
#else
	#define verbose_message(VAR) 
#endif

#ifdef DEBUG
	#if DEBUG==1
		#define debug_message(VAR) std::cout << outcol << VAR << outres << std::flush
		#define verbose_message(VAR) std::cout<<VAR<<std::flush
	#else
		#define debug_message(VAR) 
	#endif
#else
	#define debug_message(VAR) 
#endif
