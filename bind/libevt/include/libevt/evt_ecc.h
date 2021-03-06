/**
 *  @file
 *  @copyright defined in evt/LICENSE.txt
 */
#pragma once
#include "evt.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef evt_data_t evt_public_key_t;
typedef evt_data_t evt_private_key_t;
typedef evt_data_t evt_signature_t;
typedef evt_data_t evt_checksum_t;

int evt_generate_new_pair(evt_public_key_t** pub_key /* out */, evt_private_key_t** priv_key /* out */);
int evt_get_public_key(evt_private_key_t* priv_key, evt_public_key_t** pub_key /* out */);
int evt_sign_hash(evt_private_key_t* priv_key, evt_checksum_t* hash, evt_signature_t** sign /* out */);
int evt_recover(evt_signature_t* sign, evt_checksum_t* hash, evt_public_key_t** pub_key /* out */);
int evt_hash(const char* buf, size_t sz, evt_checksum_t** hash /* out */);

int evt_public_key_string(evt_public_key_t* pub_key, char** str /* out */);
int evt_private_key_string(evt_private_key_t* priv_key, char** str /* out */);
int evt_signature_string(evt_signature_t* sign, char** str /* out */);
int evt_checksum_string(evt_checksum_t* hash, char** str /* out */);

int evt_public_key_from_string(const char* str, evt_public_key_t** pub_key /* out */);
int evt_private_key_from_string(const char* str, evt_private_key_t** priv_key /* out */);
int evt_signature_from_string(const char* str, evt_signature_t** sign /* out */);
int evt_checksum_from_string(const char* str, evt_checksum_t** hash /* out */);

#ifdef __cplusplus
} // extern "C"
#endif
