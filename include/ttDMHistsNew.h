#ifndef ttDMHistsNew_H
#define ttDMHistsNew_H

#include "SFrameTools/include/AnalysisModule.h"

/**
 *   ttDM class for booking and filling histograms, the new version using AnalysisModule mechanisms.
 */

class ttDMHistsNew: public Hists {
public:
    // use the same constructor arguments as Hists for forwarding:
    ttDMHistsNew(Context & ctx, const string & dirname);

    virtual void fill(EventCalc & ev);
};


#endif
