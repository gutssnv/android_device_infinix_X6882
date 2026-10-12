#
# SPDX-FileCopyrightText: The LineageOS Project
# SPDX-License-Identifier: Apache-2.0
#

# Inherit from those products. Most specific first.
$(call inherit-product, $(SRC_TARGET_DIR)/product/core_64_bit_only.mk)
$(call inherit-product, $(SRC_TARGET_DIR)/product/full_base_telephony.mk)

# Inherit from X6882 device
$(call inherit-product, device/infinix/X6882/device.mk)

# Inherit some common Lineage stuff.
TARGET_DISABLE_EPPE := true
$(call inherit-product, vendor/lineage/config/common_full_phone.mk)

BOARD_VENDOR := INFINIX
PRODUCT_NAME := lineage_X6882
PRODUCT_DEVICE := X6882
PRODUCT_MANUFACTURER := INFINIX
PRODUCT_BRAND := Infinix
PRODUCT_MODEL := Infinix-X6882

PRODUCT_GMS_CLIENTID_BASE := android-transsion

PRODUCT_BUILD_PROP_OVERRIDES += \
    DeviceName=X6882 \
    BuildFingerprint=Infinix/X6882-OP/Infinix-X6882:14/UP1A.231005.007/260411V1590:user/release-keys

# Axion
AXION_MAINTAINER := ー々hans.
AXION_PROCESSOR := Mediatek_Helio_G100
TARGET_ENABLE_BLUR := true
TARGET_INCLUDE_AXFX := true

# Camera Spec
AXION_CAMERA_REAR_INFO := 50MP
AXION_CAMERA_FRONT_INFO := 8MP

# Bypass
BYPASS_CHARGE_SUPPORTED := true
BYPASS_CHARGE_TOGGLE_PATH ?= /sys/devices/platform/charger/bypass_charger
