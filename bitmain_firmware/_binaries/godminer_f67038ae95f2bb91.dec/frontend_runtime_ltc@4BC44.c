void *frontend_runtime_ltc()
{
  __int64 v0; // r2
  void *v1; // r0

  dword_1958A4 = (int)stratum_connect;
  dword_1958A8 = (int)stratum_disconnect;
  dword_1958AC = (int)stratum_recv_line;
  dword_1958B0 = (int)stratum_send_line;
  dword_1958B4 = (int)stratum_login_base;
  dword_1958B8 = (int)stratum_handle_method_base;
  dword_1958BC = (int)pre_stratum_handle_method_base;
  dword_1958C0 = (int)stratum_handle_response_base;
  dword_1958C4 = (int)sub_4BB7C;
  dword_1958C8 = (int)sub_4B3FC;
  dword_1958CC = (int)stratum_subscribe_base;
  dword_1958D0 = (int)stratum_authorize_base;
  dword_1958D4 = (int)sub_4B434;
  LODWORD(v0) = diff_to_target_ltc;
  HIDWORD(v0) = target_to_double_diff_ltc;
  dword_1958D8 = (int)sub_4B144;
  dword_1958DC = (int)stratum_set_diff_or_target_base;
  *(_QWORD *)&dword_1958E4 = v0;
  dword_1958E0 = (int)target_to_diff_ltc;
  v1 = calloc(1u, 0x54u);
  return memcpy(v1, &dword_1958A4, 0x54u);
}
