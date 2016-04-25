/*
 * Allocate memory for seismograms used for FWI (PSV problem) 
 *
 * Daniel Koehn
 * Kiel, 24/04/2016
 */

#include "fd.h"

void alloc_seisPSVfwi(int ntr, int ntr_glob, int ns, struct seisPSVfwi *seisPSVfwi){

        /* global variables */
	extern int QUELLTYPB;

	/* local variables */	

   	(*seisPSVfwi).sectionread=matrix(1,ntr_glob,1,ns);
   
   	if((QUELLTYPB==1)||(QUELLTYPB==3)){
      	   (*seisPSVfwi).sectionvxdata=matrix(1,ntr,1,ns);
      	   (*seisPSVfwi).sectionvxdiff=matrix(1,ntr,1,ns);
      	   (*seisPSVfwi).sectionvxdiffold=matrix(1,ntr,1,ns);
   	}
   
   	if((QUELLTYPB==1)||(QUELLTYPB==2)){
      	   (*seisPSVfwi).sectionvydata=matrix(1,ntr,1,ns);
      	   (*seisPSVfwi).sectionvydiff=matrix(1,ntr,1,ns);
      	   (*seisPSVfwi).sectionvydiffold=matrix(1,ntr,1,ns);
   	}
   
   	if(QUELLTYPB==4){
     	   (*seisPSVfwi).sectionpdata=matrix(1,ntr,1,ns);
     	   (*seisPSVfwi).sectionpdiff=matrix(1,ntr,1,ns);
     	   (*seisPSVfwi).sectionpdiffold=matrix(1,ntr,1,ns);
   	} 

}



