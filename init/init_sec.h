#ifndef INIT_SEC_H
#define INIT_SEC_H

#include <string.h>

enum device_variant {
    VARIANT_G955F = 0,
    VARIANT_G955W8,
    VARIANT_G955K,
    VARIANT_G955L,
    VARIANT_G955S,
    VARIANT_G9559,
    VARIANT_G9558,
    VARIANT_G955FD,
    VARIANT_G950W8,
    VARIANT_G950K,
    VARIANT_G950L,
    VARIANT_G950S,
    VARIANT_G9509,
    VARIANT_G9508,
    VARIANT_G950FD,
    VARIANT_MAX
};

typedef struct {
    std::string model;
    std::string codename;
} variant;

static const variant plus_international_models = {
    .model = "SM-G955F",
    .codename = "dream2lte"
};

static const variant plus_canada_models = {
    .model = "SM-G955W8",
    .codename = "dream2ltecan"
};

static const variant plus_korea_docomo_models = {
    .model = "SM-G955K",
    .codename = "dream2ltektt"
};

static const variant plus_korea_uplus_models = {
    .model = "SM-G955L",
    .codename = "dream2ltelgt"
};

static const variant plus_korea_telecom_models = {
    .model = "SM-G955S",
    .codename = "dream2lteskt"
};

static const variant plus_international_dualsim_models = {
    .model = "SM-G955FD",
    .codename = "dream2lte"
};

static const variant noplus_international_models = {
    .model = "SM-G950F",
    .codename = "dream2lte"
};

static const variant noplus_canada_models = {
    .model = "SM-G950W8",
    .codename = "dream2ltecan"
};

static const variant noplus_korea_docomo_models = {
    .model = "SM-G950K",
    .codename = "dream2ltektt"
};

static const variant noplus_korea_uplus_models = {
    .model = "SM-G950L",
    .codename = "dream2ltelgt"
};

static const variant noplus_korea_telecom_models = {
    .model = "SM-G950S",
    .codename = "dream2lteskt"
};

static const variant noplus_international_dualsim_models = {
    .model = "SM-G950FD",
    .codename = "dream2lte"
};
static const variant *all_variants[VARIANT_MAX] = {
	&plus_international_models,
	&plus_canada_models,
	&plus_korea_docomo_models,
	&plus_korea_uplus_models,
	&plus_korea_telecom_models,
	&plus_international_dualsim_models,
	&noplus_international_models,
	&noplus_canada_models,
	&noplus_korea_docomo_models,
	&noplus_korea_uplus_models,
	&noplus_korea_telecom_models,
	&noplus_international_dualsim_models,
};

#endif // INIT_SEC_H
