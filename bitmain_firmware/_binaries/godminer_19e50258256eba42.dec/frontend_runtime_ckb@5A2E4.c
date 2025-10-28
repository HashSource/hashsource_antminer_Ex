void *frontend_runtime_ckb()
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
  src[7] = stratum_handle_response_base;
  src[8] = 369184;
  src[9] = 368860;
  src[10] = stratum_subscribe_base;
  src[11] = stratum_authorize_base;
  src[12] = 365772;
  src[13] = 367220;
  src[14] = stratum_set_diff_or_target_base;
  src[15] = QMap<tagE_LEVEL,MFaultLabel::FaultType>::empty;
  src[16] = diff_to_target_ckb;
  src[17] = target_to_double_diff_ckb;
  dest = calloc(1u, 0x54u);
  memcpy(dest, src, 0x54u);
  return dest;
}
