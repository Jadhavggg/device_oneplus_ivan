/*
 * Copyright (C) 2021-2022 The LineageOS Project
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#include <libinit_variant.h>
#include <libinit_utils.h>

#include "vendor_init.h"

static const variant_info_t ivan_info = {
    .hwc_value = "",

    .brand = "OnePlus",
    .device = "ivan",
    .model = "OnePlus Nord CE 2 5G",
    .build_fingerprint = "oplus/ossi/ossi:12/SP1A.210812.016/1694405949496:user/release-keys",

    .nfc = true,
};

static const variant_info_t IV2201_info = {
    .hwc_value = "",

    .brand = "OnePlus",
    .device = "IV2201",
    .model = "OnePlus Nord CE 2 5G ",
    .build_fingerprint = "oplus/ossi/ossi:12/SP1A.210812.016/1694405949496:user/release-keys",

    .nfc = true,
};

static const variant_info_t IV2201EEA_info = {
    .hwc_value = "CN",

    .brand = "OnePlus",
    .device = "IV2201EEA",
    .model = "OnePlus Nord CE 2 5G",
    .build_fingerprint = "oplus/ossi/ossi:12/SP1A.210812.016/1694405949496:user/release-keys",

    .nfc = true,
};

static const variant_info_t OP555BL1_info = {
    .hwc_value = "",

    .brand = "Oneplus",
    .device = "OP555BL1",
    .model = "OnePlus Nord CE 2 5G",
    .build_fingerprint = "oplus/ossi/ossi:12/SP1A.210812.016/1694405949496:user/release-keys",

    .nfc = true,
};

static const std::vector<variant_info_t> variants = {
    ivan_info,
    IV2201_info,
    IV2201EEA_info,
    OP555B1_info,
};

void vendor_load_properties() {
    search_variant(variants);
}
