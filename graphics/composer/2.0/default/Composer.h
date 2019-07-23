/*
* Copyright (C) 2015 The Android Open Source Project
* Copyright (C) 2018 GlobalLogic
*
* Licensed under the Apache License, Version 2.0 (the "License");
* you may not use this file except in compliance with the License.
* You may obtain a copy of the License at
*
*      http://www.apache.org/licenses/LICENSE-2.0
*
* Unless required by applicable law or agreed to in writing, software
* distributed under the License is distributed on an "AS IS" BASIS,
* WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
* See the License for the specific language governing permissions and
* limitations under the License.
*/

#pragma once

#include <vendor/renesas/graphics/composer/2.0/IComposer.h>
#include <hidl/MQDescriptor.h>
#include <hidl/Status.h>

namespace vendor {
namespace renesas {
namespace graphics {
namespace composer {
namespace V2_0 {
namespace implementation {

using ::android::hardware::hidl_array;
using ::android::hardware::hidl_memory;
using ::android::hardware::hidl_string;
using ::android::hardware::hidl_vec;
using ::android::hardware::Return;
using ::android::hardware::Void;
using ::android::sp;

struct Composer : public IComposer {
    // Methods from ::android::hardware::graphics::composer::V2_1::IComposer follow.
    Return<void> getCapabilities(getCapabilities_cb _hidl_cb) override;
    Return<void> dumpDebugInfo(dumpDebugInfo_cb _hidl_cb) override;
    Return<void> createClient(createClient_cb _hidl_cb) override;

    // Methods from ::android::hardware::graphics::composer::V2_3::IComposer follow.
    Return<void> createClient_2_3(createClient_2_3_cb _hidl_cb) override;

    // Methods from ::vendor::renesas::graphics::composer::V2_0::IComposer follow.
    Return<::android::hardware::graphics::composer::V2_1::Error> setEVSCameraData(const hidl_handle& buffer, int8_t currDisplay) override;
    Return<uint32_t> getDisplayHeight() override;
    Return<uint32_t> getDisplayWidth() override;

    // Methods from ::android::hidl::base::V1_0::IBase follow.

};

// FIXME: most likely delete, this is only for passthrough implementations
// extern "C" IComposer* HIDL_FETCH_IComposer(const char* name);

}  // namespace implementation
}  // namespace V2_0
}  // namespace composer
}  // namespace graphics
}  // namespace renesas
}  // namespace vendor
