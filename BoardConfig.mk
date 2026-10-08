#
# SPDX-FileCopyrightText: The LineageOS Project
# SPDX-License-Identifier: Apache-2.0
#

DEVICE_PATH := device/infinix/X6882
CONFIGS_PATH := $(DEVICE_PATH)/configs

# Properties
TARGET_PRODUCT_PROP += $(CONFIGS_PATH)/properties/product.prop
TARGET_SYSTEM_PROP += $(CONFIGS_PATH)/properties/system.prop
TARGET_VENDOR_PROP += $(CONFIGS_PATH)/properties/vendor.prop

# Inherit the proprietary files
include vendor/infinix/X6882/BoardConfigVendor.mk
