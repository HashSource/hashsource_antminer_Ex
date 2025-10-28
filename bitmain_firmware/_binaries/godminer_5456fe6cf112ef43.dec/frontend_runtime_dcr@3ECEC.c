void *frontend_runtime_dcr()
{
  __int64 v0; // r2
  void *v1; // r0

  dword_165FC8 = (int)stratum_connect;
  dword_165FCC = (int)stratum_disconnect;
  dword_165FD0 = (int)stratum_recv_line;
  dword_165FD4 = (int)stratum_send_line;
  dword_165FD8 = (int)stratum_login_base;
  dword_165FDC = (int)stratum_handle_method_base;
  dword_165FE0 = (int)stratum_handle_response_base;
  dword_165FE8 = (int)sub_3EC1C;
  dword_165FEC = (int)sub_3DB78;
  dword_165FF0 = (int)sub_3DF30;
  dword_165FE4 = (int)sub_3EA74;
  dword_165FF4 = (int)sub_3DB54;
  dword_165FF8 = (int)stratum_subscribe_base;
  dword_165FFC = (int)stratum_authorize_base;
  dword_166000 = (int)sub_3DF68;
  dword_166004 = (int)sub_3DBAC;
  LODWORD(v0) = target_to_double_diff_dcr;
  HIDWORD(v0) = "";
  dword_166008 = (int)stratum_set_diff_or_target_base;
  dword_16600C = (int)target_to_diff_dcr;
  dword_166010 = (int)diff_to_target_dcr;
  *(_QWORD *)&dword_166014 = v0;
  dword_16601C = 60;
  v1 = calloc(1u, 0x60u);
  return memcpy(v1, algn_165FC4, 0x60u);
}
