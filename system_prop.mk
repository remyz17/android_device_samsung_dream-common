#
# Copyright (C) 2017 The LineageOS Project
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#      http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.
#

# Audio
PRODUCT_PROPERTY_OVERRIDES += \
    af.fast_track_multiplier=1 \
    audio_hal.force_voice_config=wide

# Bluetooth
PRODUCT_PROPERTY_OVERRIDES += \
    ro.bt.bdaddr_path="/efs/bluetooth/bt_addr"

# Bluetooth workaround:
# The new CAF code defaults to MCT HAL, but we
# need the old H4 HAL for our Broadcom WiFi.
PRODUCT_PROPERTY_OVERRIDES += \
    qcom.bluetooth.soc=rome

# Dalvik/Art
PRODUCT_PROPERTY_OVERRIDES += \
    ro.sys.fw.dex2oat_thread_count=4 \
    dalvik.vm.heapstartsize=8m \
    dalvik.vm.heapgrowthlimit=256m \
    dalvik.vm.heapsize=512m \
    dalvik.vm.heaptargetutilization=0.75 \
    dalvik.vm.heapminfree=2m \
    dalvik.vm.heapmaxfree=8m

# Graphics
PRODUCT_PROPERTY_OVERRIDES += \
    ro.bq.gpu_to_cpu_unsupported=1 \
    ro.opengles.version=196610 \
    ro.sf.lcd_density=560 \
    debug.hwc.force_gpu=1 \
    ro.hardware.egl=mali

# Hwc - not used on cm/aosp
PRODUCT_PROPERTY_OVERRIDES += \
    debug.hwc.winupdate=1 \
    debug.slsi_platform=1

# Hwui
PRODUCT_PROPERTY_OVERRIDES += \
    ro.hwui.texture_cache_size=88 \
    ro.hwui.layer_cache_size=58 \
    ro.hwui.path_cache_size=16 \
    ro.hwui.texture_cache_flushrate=0.4 \
    ro.hwui.shape_cache_size=4 \
    ro.hwui.gradient_cache_size=2 \
    ro.hwui.drop_shadow_cache_size=6 \
    ro.hwui.r_buffer_cache_size=8 \
    ro.hwui.text_small_cache_width=1024 \
    ro.hwui.text_small_cache_height=1024 \
    ro.hwui.text_large_cache_width=4096 \
    ro.hwui.text_large_cache_height=2048 \
    ro.hwui.fbo_cache_size=16

# Network
PRODUCT_PROPERTY_OVERRIDES += \
    net.tcp.default_init_rwnd=60

# Nfc
PRODUCT_PROPERTY_OVERRIDES += \
    ro.nfc.port="I2C" \
    ro.nfc.sec_hal=true

# Radio
PRODUCT_PROPERTY_OVERRIDES += \
    persist.radio.add_power_save=1 \
    persist.radio.apm_sim_not_pwdn=1 \
    rild.libpath=/system/lib64/libsec-ril.so \
    rild.libpath2=/system/lib64/libsec-ril-dsds.so \
    ro.telephony.default_network=9 \
    ro.telephony.ril_class=SlteRIL \
    ro.ril.gprsclass=10 \
    ro.ril.hsxpa=1 \
    ro.ril.telephony.mqanelements=6 \
    telephony.lteOnGsmDevice=1 \
    telephony.lteOnCdmaDevice=0

# Wifi
PRODUCT_PROPERTY_OVERRIDES += \
    wifi.interface=wlan0

# Usb (temp)
PRODUCT_PROPERTY_OVERRIDES += \
    persist.sys.usb.config=mtp,adb
