void *frontend_runtime_zec()
{
  _DWORD src[21]; // [sp+0h] [bp-5Ch] BYREF
  void *dest; // [sp+54h] [bp-8h]

  src[0] = stratum_connect;
  src[1] = stratum_disconnect;
  src[2] = stratum_recv_line;
  src[3] = stratum_send_line;
  src[4] = stratum_login_base;
  src[5] = stratum_handle_method_base;
  src[6] = pre_stratum_handle_method_base;
  src[7] = stratum_handle_response_zec;
  src[8] = 489972;
  src[9] = 486760;
  src[10] = stratum_subscribe_zec;
  src[11] = stratum_authorize_base;
  src[12] = 482780;
  src[13] = 485636;
  src[14] = stratum_set_diff_or_target_base;
  src[15] = target_to_diff_zec;
  src[16] = diff_to_target_zec;
  src[17] = target_to_double_diff_zec;
  dest = calloc(1u, 0x54u);
  memcpy(dest, src, 0x54u);
  return dest;
}
