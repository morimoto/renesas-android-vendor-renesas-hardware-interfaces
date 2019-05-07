#include "Composer.h"

namespace vendor {
namespace renesas {
namespace graphics {
namespace composer {
namespace V1_0 {
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


// Methods from ::vendor::renesas::graphics::composer::V1_0::IComposer follow.
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


// Methods from ::android::hidl::base::V1_0::IBase follow.

//IComposer* HIDL_FETCH_IComposer(const char* /* name */) {
    //return new Composer();
//}
//
}  // namespace implementation
}  // namespace V1_0
}  // namespace composer
}  // namespace graphics
}  // namespace renesas
}  // namespace vendor
