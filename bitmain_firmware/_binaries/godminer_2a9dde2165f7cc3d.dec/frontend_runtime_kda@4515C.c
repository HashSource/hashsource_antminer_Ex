void *frontend_runtime_kda()
{
  __int64 v0; // r2
  void *v1; // r0

  dword_173FD0 = (int)stratum_connect;
  dword_173FD4 = (int)stratum_disconnect;
  dword_173FD8 = (int)stratum_recv_line;
  dword_173FDC = (int)stratum_send_line;
  dword_173FE0 = (int)stratum_login_base;
  dword_173FE4 = (int)stratum_handle_method_base;
  dword_173FE8 = (int)pre_stratum_handle_method_base;
  dword_173FEC = (int)stratum_handle_response_base;
  dword_173FF0 = (int)sub_450C4;
  dword_173FF4 = (int)sub_44B28;
  dword_173FF8 = (int)stratum_subscribe_base;
  dword_173FFC = (int)stratum_authorize_base;
  dword_174000 = (int)sub_44DF0;
  LODWORD(v0) = diff_to_target_kda;
  HIDWORD(v0) = target_to_double_diff_kda;
  dword_174004 = (int)sub_44B5C;
  dword_174008 = (int)stratum_set_diff_or_target_base;
  *(_QWORD *)&dword_174010 = v0;
  dword_17400C = (int)target_to_diff_kda;
  v1 = calloc(1u, 0x54u);
  return memcpy(v1, &dword_173FD0, 0x54u);
}
