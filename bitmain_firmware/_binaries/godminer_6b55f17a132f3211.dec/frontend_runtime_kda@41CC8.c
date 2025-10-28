void *frontend_runtime_kda()
{
  __int64 v0; // r2
  void *v1; // r0

  dword_165CB4 = (int)stratum_connect;
  dword_165CB8 = (int)stratum_disconnect;
  dword_165CBC = (int)stratum_recv_line;
  dword_165CC0 = (int)stratum_send_line;
  dword_165CC4 = (int)stratum_login_base;
  dword_165CC8 = (int)stratum_handle_method_base;
  dword_165CCC = (int)pre_stratum_handle_method_base;
  dword_165CD0 = (int)stratum_handle_response_base;
  dword_165CD4 = (int)sub_41C30;
  dword_165CD8 = (int)sub_4169C;
  dword_165CDC = (int)stratum_subscribe_base;
  dword_165CE0 = (int)stratum_authorize_base;
  dword_165CE4 = (int)sub_41960;
  LODWORD(v0) = diff_to_target_kda;
  HIDWORD(v0) = target_to_double_diff_kda;
  dword_165CE8 = (int)sub_416D0;
  dword_165CEC = (int)stratum_set_diff_or_target_base;
  *(_QWORD *)&dword_165CF4 = v0;
  dword_165CF0 = (int)target_to_diff_kda;
  v1 = calloc(1u, 0x54u);
  return memcpy(v1, &dword_165CB4, 0x54u);
}
