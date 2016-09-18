/*
 * sample_nodelet_class.cpp
 *
 *  Created on: 2016/09/18
 *      Author: cryborg21
 */
#include "sample_nodelet_class.h"
#include <pluginlib/class_list_macros.h>
PLUGINLIB_EXPORT_CLASS(sample_nodelet_ns::SampleNodeletClass, nodelet::Nodelet)

namespace sample_nodelet_ns
{
void SampleNodeletClass::onInit()
{
    NODELET_INFO("SampleNodeletClass - %s", __FUNCTION__);
}
} // namespace sample_nodelet_ns
