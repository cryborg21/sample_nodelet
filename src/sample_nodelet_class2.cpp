/*
 * sample_nodelet_class2.cpp
 *
 *  Created on: 2016/09/18
 *      Author: cryborg21
 */
#include "sample_nodelet_class2.h"
#include <nodelet/nodelet.h>
#include <pluginlib/class_list_macros.h>
PLUGINLIB_EXPORT_CLASS(sample_nodelet_ns::SampleNodeletClass2, nodelet::Nodelet)

namespace sample_nodelet_ns
{
void SampleNodeletClass2::onInit()
{
    NODELET_INFO("SampleNodeletClass2 - %s", __FUNCTION__);
}
} // namespace sample_nodelet_ns
