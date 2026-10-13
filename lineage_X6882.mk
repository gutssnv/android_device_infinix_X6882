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
LINEAGE_VERSION_APPEND_TIME_OF_DAY := true
$(call inherit-product, vendor/lineage/config/common_full_phone.mk)

PERF_ANIM_OVERRIDE := true
TARGET_BOOT_ANIMATION_RES := 1080
WITH_GMS := false
WITH_BCR := true

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
