void *frontend_runtime_eth()
{
  __int64 v0; // r2
  void *v1; // r0

  dword_165BC8 = (int)stratum_connect;
  dword_165BCC = (int)stratum_disconnect;
  dword_165BD0 = (int)stratum_recv_line;
  dword_165BD4 = (int)stratum_send_line;
  dword_165BD8 = (int)stratum_login_base;
  dword_165BDC = (int)stratum_handle_method_eth;
  dword_165BE0 = (int)pre_stratum_handle_method_eth;
  dword_165BE4 = (int)stratum_handle_response_eth;
  dword_165BE8 = (int)sub_3F0AC;
  dword_165BEC = (int)sub_3EFD4;
  dword_165BF0 = (int)stratum_subscribe_base;
  LODWORD(v0) = diff_to_target_eth;
  HIDWORD(v0) = target_to_double_diff_eth;
  dword_165BF4 = (int)stratum_authorize_eth;
  dword_165BFC = (int)sub_3F68C;
  dword_165C04 = (int)target_to_diff_eth;
  *(_QWORD *)&dword_165C08 = v0;
  dword_165BF8 = 0;
  dword_165C00 = 0;
  v1 = calloc(1u, 0x54u);
  return memcpy(v1, &dword_165BC8, 0x54u);
}
