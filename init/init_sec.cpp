#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <android-base/properties.h>

#include "log.h"
#include "property_service.h"
#include "util.h"
#include "vendor_init.h"

enum device_variant {
    UNKNOWN = -1,
    G950F,
    G950S,
    G950K,
    G950L,
    G950W8,
    G955F,
    G955S,
    G955K,
    G955L,
    G955W8
};

namespace android {
    namespace init {

        void vendor_load_properties() {
            std::string platform = android::base::GetProperty("ro.board.platform", "");
            std::string bootloader = android::base::GetProperty("ro.bootloader", "");
                device_variant variant = UNKNOWN;

            if (platform != ANDROID_TARGET) {
                return;
            }

            if (bootloader.find("G950F") != std::string::npos) {
                variant = G950F;
            } else if (bootloader.find("G950S") != std::string::npos) {
                variant = G950S;
            } else if (bootloader.find("G950K") != std::string::npos) {
                variant = G950K;
            } else if (bootloader.find("G950L") != std::string::npos) {
                variant = G950L;
            } else if (bootloader.find("G950W8") != std::string::npos) {
                variant = G950W8;
            } else if (bootloader.find("G955F") != std::string::npos) {
                variant = G955F;
            } else if (bootloader.find("G955S") != std::string::npos) {
                variant = G955S;
            } else if (bootloader.find("G955K") != std::string::npos) {
                variant = G955K;
            } else if (bootloader.find("G955L") != std::string::npos) {
                variant = G955L;
            } else if (bootloader.find("G955W8") != std::string::npos) {
                variant = G955W8;
            } else {
                return;
            }

            switch (variant) {
                case G950F:
                    /* dreamltexx */
                    android::base::SetProperty("ro.build.fingerprint", "samsung/dreamltexx/dreamlte:7.0/NRD90M/G950FXXU1AQH3:user/release-keys");
                    android::base::SetProperty("description", "dreamltexx-user 7.0 NRD90M G950FXXU1AQH3 release-keys");
                    android::base::SetProperty("model", "SM-G950F");
                    android::base::SetProperty("device", "dreamltexx");
                    break;
                case G950S:
                    /* dreamlteskt */
                    android::base::SetProperty("fingerprint", "samsung/dreamlteskt/dreamlte:7.0/NRD90M/G950SXXU1AQH3:user/release-keys");
                    android::base::SetProperty("description", "dreamlteskt-user 7.0 NRD90M G950SXXU1AQH3 release-keys");
                    android::base::SetProperty("model", "SM-G950S");
                    android::base::SetProperty("device", "dreamlteskt");
                    break;
                case G950K:
                    /* dreamltektt */
                    android::base::SetProperty("fingerprint", "samsung/dreamltektt/dreamlte:7.0/NRD90M/G950KXXU1AQH3:user/release-keys");
                    android::base::SetProperty("description", "dreamltektt-user 7.0 NRD90M G950KXXU1AQH3 release-keys");
                    android::base::SetProperty("model", "SM-G950K");
                    android::base::SetProperty("device", "dreamltektt");
                    break;
                case G950L:
                    /* dreamltelgt */
                    android::base::SetProperty("fingerprint", "samsung/dreamltelgt/dreamlte:7.0/NRD90M/G950LXXU1AQH3:user/release-keys");
                    android::base::SetProperty("description", "dreamltelgt-user 7.0 NRD90M G950LXXU1AQH3 release-keys");
                    android::base::SetProperty("model", "SM-G950L");
                    android::base::SetProperty("device", "dreamltelgt");
                    break;
                case G950W8:
                    /* dreamltebmc */
                    android::base::SetProperty("fingerprint", "samsung/dreamltebmc/dreamlte:7.0/NRD90M/G950W8XXU1AQH3:user/release-keys");
                    android::base::SetProperty("description", "dreamltebmc-user 7.0 NRD90M G950W8XXU1AQH3 release-keys");
                    android::base::SetProperty("model", "SM-G950W8");
                    android::base::SetProperty("device", "dreamltebmc");
                    break;
                case G955F:
                    /* dream2ltexx */
                    android::base::SetProperty("fingerprint", "samsung/dream2ltexx/dream2lte:7.0/NRD90M/G955FXXU1AQH3:user/release-keys");
                    android::base::SetProperty("description", "dream2ltexx-user 7.0 NRD90M G955FXXU1AQH3 release-keys");
                    android::base::SetProperty("model", "SM-G955F");
                    android::base::SetProperty("device", "dream2ltexx");
                    break;
                case G955S:
                    /* dream2lteskt */
                    android::base::SetProperty("fingerprint", "samsung/dream2lteskt/dream2lte:7.0/NRD90M/G955SXXU1AQH3:user/release-keys");
                    android::base::SetProperty("description", "dream2lteskt-user 7.0 NRD90M G955SXXU1AQH3 release-keys");
                    android::base::SetProperty("model", "SM-G955S");
                    android::base::SetProperty("device", "dream2lteskt");
                    break;
                case G955K:
                    /* dream2ltektt */
                    android::base::SetProperty("fingerprint", "samsung/dream2ltektt/dream2lte:7.0/NRD90M/G955KXXU1AQH3:user/release-keys");
                    android::base::SetProperty("description", "dream2ltektt-user 7.0 NRD90M G955KXXU1AQH3 release-keys");
                    android::base::SetProperty("model", "SM-G955K");
                    android::base::SetProperty("device", "dream2ltektt");
                    break;
                case G955L:
                    /* dream2ltelgt */
                    android::base::SetProperty("fingerprint", "samsung/dream2ltelgt/dream2lte:7.0/NRD90M/G955LXXU1AQH3:user/release-keys");
                    android::base::SetProperty("description", "dream2ltelgt-user 7.0 NRD90M G955LXXU1AQH3 release-keys");
                    android::base::SetProperty("model", "SM-G955L");
                    android::base::SetProperty("device", "dream2ltelgt");
                    break;
                case G955W8:
                    /* dream2ltebmc */
                    android::base::SetProperty("fingerprint", "samsung/dream2ltebmc/dream2lte:7.0/NRD90M/G955W8XXU1AQH3:user/release-keys");
                    android::base::SetProperty("description", "dream2ltebmc-user 7.0 NRD90M G955W8XXU1AQH3 release-keys");
                    android::base::SetProperty("model", "SM-G955W8");
                    android::base::SetProperty("device", "dream2ltebmc");
                    break;
                default:
                    break;
            }

            std::string device = android::base::GetProperty("ro.product.device", "");
        }

    }
}
