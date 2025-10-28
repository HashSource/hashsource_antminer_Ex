void *frontend_runtime_hns()
{
  __int64 v0; // r2
  void *v1; // r0

  dword_165C5C = (int)stratum_connect;
  dword_165C60 = (int)stratum_disconnect;
  dword_165C64 = (int)stratum_recv_line;
  dword_165C68 = (int)stratum_send_line;
  dword_165C6C = (int)stratum_login_base;
  dword_165C70 = (int)stratum_handle_method_base;
  dword_165C74 = (int)pre_stratum_handle_method_base;
  dword_165C78 = (int)stratum_handle_response_hns;
  dword_165C7C = (int)sub_40424;
  dword_165C80 = (int)sub_3FE34;
  dword_165C84 = (int)stratum_subscribe_base;
  dword_165C88 = (int)stratum_authorize_base;
  dword_165C8C = (int)sub_40528;
  LODWORD(v0) = diff_to_target_hns;
  HIDWORD(v0) = target_to_double_diff_hns;
  dword_165C90 = (int)sub_40134;
  dword_165C94 = (int)stratum_set_diff_or_target_base;
  *(_QWORD *)&dword_165C9C = v0;
  dword_165C98 = (int)target_to_diff_word_hns;
  v1 = calloc(1u, 0x54u);
  return memcpy(v1, &dword_165C5C, 0x54u);
}
