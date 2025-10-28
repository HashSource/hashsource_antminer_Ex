void *frontend_runtime_kas()
{
  __int64 v0; // r2
  void *v1; // r0

  dword_1957A8 = (int)stratum_connect;
  dword_1957AC = (int)stratum_disconnect;
  dword_1957B0 = (int)stratum_recv_line;
  dword_1957B4 = (int)stratum_send_line;
  dword_1957B8 = (int)stratum_login_base;
  dword_1957BC = (int)stratum_handle_method_base;
  dword_1957C0 = (int)pre_stratum_handle_method_base;
  dword_1957C4 = (int)stratum_handle_response_kas;
  dword_1957C8 = (int)sub_48590;
  dword_1957CC = (int)sub_47894;
  dword_1957D0 = (int)sub_49040;
  dword_1957D4 = (int)stratum_authorize_kas;
  dword_1957D8 = (int)sub_47D14;
  LODWORD(v0) = diff_to_target_kas;
  HIDWORD(v0) = target_to_double_diff_kas;
  dword_1957DC = (int)sub_47A20;
  dword_1957E0 = (int)stratum_set_diff_or_target_base;
  *(_QWORD *)&dword_1957E8 = v0;
  dword_1957E4 = (int)target_to_diff_kas;
  v1 = calloc(1u, 0x54u);
  return memcpy(v1, &dword_1957A8, 0x54u);
}
