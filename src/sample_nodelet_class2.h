/*
 * sample_nodelet_class2.h
 *
 *  Created on: 2016/09/18
 *      Author: cryborg21
 */
#ifndef SAMPLE_NODELET_CLASS_SRC_SAMPLE_NODELET_CLASS2_H_
#define SAMPLE_NODELET_CLASS_SRC_SAMPLE_NODELET_CLASS2_H_
#include <nodelet/nodelet.h>

namespace sample_nodelet_ns
{
class SampleNodeletClass2 : public nodelet::Nodelet
{
public:
    SampleNodeletClass2();
    ~SampleNodeletClass2();

    virtual void onInit();
};
} // namespace sample_nodelet_ns

#endif /* SAMPLE_NODELET_CLASS_SRC_SAMPLE_NODELET_CLASS2_H_ */
