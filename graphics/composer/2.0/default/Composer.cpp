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

#include "Composer.h"

namespace vendor {
namespace renesas {
namespace graphics {
namespace composer {
namespace V2_0 {
namespace implementation {

// Methods from ::android::hardware::graphics::composer::V2_1::IComposer follow.
Return<void> Composer::getCapabilities(getCapabilities_cb _hidl_cb) {
    // TODO implement
    return Void();
}

Return<void> Composer::dumpDebugInfo(dumpDebugInfo_cb _hidl_cb) {
    // TODO implement
    return Void();
}

Return<void> Composer::createClient(createClient_cb _hidl_cb) {
    // TODO implement
    return Void();
}


// Methods from ::android::hardware::graphics::composer::V2_3::IComposer follow.
Return<void> Composer::createClient_2_3(createClient_2_3_cb _hidl_cb) {
    // TODO implement
    return Void();
}


// Methods from ::vendor::renesas::graphics::composer::V2_0::IComposer follow.
Return<::android::hardware::graphics::composer::V2_1::Error> Composer::setEVSCameraData(const hidl_handle& buffer, int8_t currDisplay) {
    // TODO implement
    return ::android::hardware::graphics::composer::V2_1::Error {};
}

Return<uint32_t> Composer::getDisplayHeight() {
    // TODO implement
    return uint32_t {};
}

Return<uint32_t> Composer::getDisplayWidth() {
    // TODO implement
    return uint32_t {};
}

Return<::android::hardware::graphics::composer::V2_1::Error> Composer::cmsReset(int8_t currDisplay) {
    // TODO implement
    return ::android::hardware::graphics::composer::V2_1::Error {};
}

Return<::android::hardware::graphics::composer::V2_1::Error> Composer::cmsSetLut(const hidl_vec<uint32_t>& buff, int8_t currDisplay) {
    // TODO implement
    return ::android::hardware::graphics::composer::V2_1::Error {};
}

Return<::android::hardware::graphics::composer::V2_1::Error> Composer::cmsSetClu(const hidl_vec<uint32_t>& buff, int8_t currDisplay) {
    // TODO implement
    return ::android::hardware::graphics::composer::V2_1::Error {};
}

Return<void> Composer::cmsGetHgo(int8_t currDisplay, cmsGetHgo_cb _hidl_cb) {
    // TODO implement
    return Void();
}


// Methods from ::android::hidl::base::V1_0::IBase follow.

//IComposer* HIDL_FETCH_IComposer(const char* /* name */) {
    //return new Composer();
//}
//
}  // namespace implementation
}  // namespace V2_0
}  // namespace composer
}  // namespace graphics
}  // namespace renesas
}  // namespace vendor
