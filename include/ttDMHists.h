#ifndef ttDMHists_H
#define ttDMHists_H

#include "SFrameTools/include/BaseHists.h"

/**
 *   ttDM class for booking and filling histograms
 *
 *   This class books and fills a collection of histograms.
 *   It should have a unique name, such that the histograms
 *   of multiple instances of this class are ordered in the
 *   output file. 
 *   Always sort your histograms and used methods topically.
 *   This example collection can be used for data and reconstructed
 *   MC events.
 *   
 *   @version $Revision: 1.2 $
 */

class ttDMHists : public BaseHists {

public:
   /// Named constructor
   ttDMHists(const char* name);

   /// Default destructor
   ~ttDMHists();

   void Init();

   void Fill();

   void Finish();

private:

}; // class ttDMHists


#endif // ttDMHists_H
