void *frontend_runtime_rvn()
{
  __int64 v0; // r2
  void *v1; // r0

  dword_1958F8 = (int)stratum_connect;
  dword_1958FC = (int)stratum_disconnect;
  dword_195900 = (int)stratum_recv_line;
  dword_195904 = (int)stratum_send_line;
  dword_195908 = (int)stratum_login_base;
  dword_19590C = (int)stratum_handle_method_base;
  dword_195910 = (int)pre_stratum_handle_method_base;
  dword_195914 = (int)stratum_handle_response_rvn;
  dword_195918 = (int)sub_4C49C;
  dword_19591C = (int)sub_4C3C4;
  dword_195920 = (int)sub_4CED0;
  dword_195924 = (int)stratum_authorize_rvn;
  dword_195928 = (int)sub_4BD58;
  LODWORD(v0) = diff_to_target_rvn;
  HIDWORD(v0) = target_to_double_diff_rvn;
  dword_19592C = (int)sub_4BD40;
  dword_195930 = (int)stratum_set_diff_or_target_base;
  *(_QWORD *)&dword_195938 = v0;
  dword_195934 = (int)target_to_diff_rvn;
  v1 = calloc(1u, 0x54u);
  return memcpy(v1, &dword_1958F8, 0x54u);
}
