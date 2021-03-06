/*
    This file is part of AcceSSL.

    Copyright 2011-2014 Marcin Gozdalik <gozdal@gmail.com>

    AcceSSL is free software; you can redistribute it and/or modify
    it under the terms of the GNU Affero General Public License as published by
    the Free Software Foundation; either version 3 of the License, or
    (at your option) any later version.

    AcceSSL is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Affero General Public License for more details.

    You should have received a copy of the GNU Affero General Public License
    along with AcceSSL; if not, write to the Free Software
    Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
*/

/*
 * This product includes cryptographic software written by Eric Young
 * (eay@cryptsoft.com).  This product includes software written by Tim
 * Hudson (tjh@cryptsoft.com).
 *
 */

#ifndef HEADER_ACCESSL_ERR_H
#define HEADER_ACCESSL_ERR_H

/* BEGIN ERROR CODES */
/* The following lines are auto generated by the script mkerr.pl. Any changes
 * made after this point may be overwritten when the script is next run.
 */

static void ERR_load_accessl_strings(void);
static void ERR_unload_accessl_strings(void);
static void ERR_accessl_error(int function, int reason, char *file, int line);

#define ACCESSLerr(f,r) ERR_accessl_error((f),(r),__FILE__,__LINE__)

/* Error codes for the ACCESSL functions. */

/* Function codes. */
#define ACCESSL_F_E_ACCESSL_CONVERT_RSA_KEY     103
#define ACCESSL_F_E_ACCESSL_CREATE_RSA_KEY_POST     105
#define ACCESSL_F_E_ACCESSL_CREATE_SERVER       112
#define ACCESSL_F_E_ACCESSL_CTRL         101
#define ACCESSL_F_E_ACCESSL_GET_MODEXP_URL     109
#define ACCESSL_F_E_ACCESSL_GET_RSA_FINGERPRINT     104
#define ACCESSL_F_E_ACCESSL_INIT         100
#define ACCESSL_F_E_ACCESSL_RSA_FINISH       107
#define ACCESSL_F_E_ACCESSL_RSA_INIT       106
#define ACCESSL_F_E_ACCESSL_RSA_KEY_URL       110
#define ACCESSL_F_E_ACCESSL_RSA_MOD_EXP       102
#define ACCESSL_F_E_ACCESSL_RSA_MOD_EXP_PERFORM     111
#define ACCESSL_F_E_ACCESSL_RSA_PRIV_DEC       119
#define ACCESSL_F_E_ACCESSL_RSA_PRIV_ENC       118
#define ACCESSL_F_E_ACCESSL_RSA_PUB_DEC       117
#define ACCESSL_F_E_ACCESSL_RSA_PUB_ENC       116
#define ACCESSL_F_E_ACCESSL_RSA_SIGN       114
#define ACCESSL_F_E_ACCESSL_RSA_VERIFY       115
#define ACCESSL_F_E_ACCESSL_SERVER_PARSE_ADD     113
#define ACCESSL_F_E_ACCESSL_WRITE_FUN       108

/* Reason codes. */
#define ACCESSL_R_ACCESSL_FAILURE       117
#define ACCESSL_R_ACCESSL_RSA_INIT_FAILED     118
#define ACCESSL_R_ALREADY_LOADED         119
#define ACCESSL_R_BN2HEX_FAILURE         110
#define ACCESSL_R_CTRL_COMMAND_NOT_IMPLEMENTED     100
#define ACCESSL_R_CURL_INIT_FAILURE       103
#define ACCESSL_R_DSO_FAILURE         120
#define ACCESSL_R_INET_NTOP_FAILUR       115
#define ACCESSL_R_INVALID_RESPONSE       113
#define ACCESSL_R_INVALID_SYNTAX         116
#define ACCESSL_R_KEY_CONTEXT         109
#define ACCESSL_R_MD5_FAILURE         107
#define ACCESSL_R_MDNS_INIT_FAILURE       104
#define ACCESSL_R_MEMORY_ALLOC         108
#define ACCESSL_R_MISSING_KEY_COMPONENTS       101
#define ACCESSL_R_NO_KEY_CONTEXT         105
#define ACCESSL_R_NO_WORKERS         114
#define ACCESSL_R_PASSED_NULL_PARAM       121
#define ACCESSL_R_RSA_GET_NEW_INDEX_FAILURE     102
#define ACCESSL_R_UNEXPECTED_HTTP_CODE       112
#define ACCESSL_R_WORKER_FAILURE         111

#ifdef  __cplusplus
}
#endif
#endif
