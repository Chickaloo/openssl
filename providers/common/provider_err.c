/*
 * Generated by util/mkerr.pl DO NOT EDIT
 * Copyright 1995-2019 The OpenSSL Project Authors. All Rights Reserved.
 *
 * Licensed under the Apache License 2.0 (the "License").  You may not use
 * this file except in compliance with the License.  You can obtain a copy
 * in the file LICENSE in the source distribution or at
 * https://www.openssl.org/source/license.html
 */

#include <openssl/err.h>
#include "internal/providercommonerr.h"

#ifndef OPENSSL_NO_ERR

static const ERR_STRING_DATA PROV_str_reasons[] = {
    {ERR_PACK(ERR_LIB_PROV, 0, PROV_R_AES_KEY_SETUP_FAILED),
    "aes key setup failed"},
    {ERR_PACK(ERR_LIB_PROV, 0, PROV_R_BAD_DECRYPT), "bad decrypt"},
    {ERR_PACK(ERR_LIB_PROV, 0, PROV_R_CIPHER_OPERATION_FAILED),
    "cipher operation failed"},
    {ERR_PACK(ERR_LIB_PROV, 0, PROV_R_FAILED_TO_GET_PARAMETER),
    "failed to get parameter"},
    {ERR_PACK(ERR_LIB_PROV, 0, PROV_R_FAILED_TO_SET_PARAMETER),
    "failed to set parameter"},
    {ERR_PACK(ERR_LIB_PROV, 0, PROV_R_INVALID_KEYLEN), "invalid keylen"},
    {ERR_PACK(ERR_LIB_PROV, 0, PROV_R_OUTPUT_BUFFER_TOO_SMALL),
    "output buffer too small"},
    {ERR_PACK(ERR_LIB_PROV, 0, PROV_R_WRONG_FINAL_BLOCK_LENGTH),
    "wrong final block length"},
    {0, NULL}
};

#endif

int ERR_load_PROV_strings(void)
{
#ifndef OPENSSL_NO_ERR
    if (ERR_func_error_string(PROV_str_reasons[0].error) == NULL)
        ERR_load_strings_const(PROV_str_reasons);
#endif
    return 1;
}