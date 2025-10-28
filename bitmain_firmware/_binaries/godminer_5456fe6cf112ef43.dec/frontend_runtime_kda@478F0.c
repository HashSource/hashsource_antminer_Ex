void *frontend_runtime_kda()
{
  __int64 v0; // r2
  void *v1; // r0

  dword_166204 = (int)stratum_connect;
  dword_166208 = (int)stratum_disconnect;
  dword_16620C = (int)stratum_recv_line;
  dword_166210 = (int)stratum_send_line;
  dword_166214 = (int)stratum_login_base;
  dword_166218 = (int)stratum_handle_method_base;
  dword_16621C = (int)stratum_handle_response_base;
  dword_166224 = (int)sub_47834;
  dword_166228 = (int)sub_478A0;
  dword_16622C = (int)sub_47470;
  dword_166220 = (int)sub_47754;
  dword_166230 = (int)sub_470AC;
  dword_166234 = (int)stratum_subscribe_base;
  dword_166238 = (int)stratum_authorize_base;
  dword_16623C = (int)sub_474A8;
  dword_166240 = (int)sub_471A4;
  LODWORD(v0) = target_to_double_diff_kda;
  HIDWORD(v0) = "H";
  dword_166244 = (int)stratum_set_diff_or_target_base;
  dword_166248 = (int)target_to_diff_kda;
  dword_16624C = (int)diff_to_target_kda;
  *(_QWORD *)&dword_166250 = v0;
  dword_166258 = 70;
  v1 = calloc(1u, 0x60u);
  return memcpy(v1, &unk_166200, 0x60u);
}
