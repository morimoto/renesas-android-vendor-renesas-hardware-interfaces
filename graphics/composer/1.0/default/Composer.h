#ifndef VENDOR_RENESAS_GRAPHICS_COMPOSER_V1_0_COMPOSER_H
#define VENDOR_RENESAS_GRAPHICS_COMPOSER_V1_0_COMPOSER_H

#include <vendor/renesas/graphics/composer/1.0/IComposer.h>
#include <hidl/MQDescriptor.h>
#include <hidl/Status.h>

namespace vendor {
namespace renesas {
namespace graphics {
namespace composer {
namespace V1_0 {
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

    // Methods from ::vendor::renesas::graphics::composer::V1_0::IComposer follow.
    Return<::android::hardware::graphics::composer::V2_1::Error> setEVSCameraData(const hidl_handle& buffer, int8_t currDisplay) override;
    Return<uint32_t> getDisplayHeight() override;
    Return<uint32_t> getDisplayWidth() override;

    // Methods from ::android::hidl::base::V1_0::IBase follow.

};

// FIXME: most likely delete, this is only for passthrough implementations
// extern "C" IComposer* HIDL_FETCH_IComposer(const char* name);

}  // namespace implementation
}  // namespace V1_0
}  // namespace composer
}  // namespace graphics
}  // namespace renesas
}  // namespace vendor

#endif  // VENDOR_RENESAS_GRAPHICS_COMPOSER_V1_0_COMPOSER_H
