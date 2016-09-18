/*
 * sample_nodelet_class.h
 *
 *  Created on: 2016/09/18
 *      Author: cryborg21
 */
#ifndef SAMPLE_NODELET_CLASS_SRC_SAMPLE_NODELET_CLASS_H_
#define SAMPLE_NODELET_CLASS_SRC_SAMPLE_NODELET_CLASS_H_
#include <nodelet/nodelet.h>

namespace sample_nodelet_ns
{
class SampleNodeletClass : public nodelet::Nodelet
{
public:
    SampleNodeletClass()
    {
    	ROS_INFO("SampleNodeletClass Constructor");
    }

    ~SampleNodeletClass()
    {
    	ROS_INFO("SampleNodeletClass Destructor");
    }

    virtual void onInit();
};
} // namespace sample_nodelet_ns

#endif /* SAMPLE_NODELET_CLASS_SRC_SAMPLE_NODELET_CLASS_H_ */
