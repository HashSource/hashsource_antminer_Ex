void *frontend_runtime_hns()
{
  __int64 v0; // r2
  void *v1; // r0

  dword_173F24 = (int)stratum_connect;
  dword_173F28 = (int)stratum_disconnect;
  dword_173F2C = (int)stratum_recv_line;
  dword_173F30 = (int)stratum_send_line;
  dword_173F34 = (int)stratum_login_base;
  dword_173F38 = (int)stratum_handle_method_base;
  dword_173F3C = (int)pre_stratum_handle_method_base;
  dword_173F40 = (int)stratum_handle_response_hns;
  dword_173F44 = (int)sub_41FEC;
  dword_173F48 = (int)sub_419F8;
  dword_173F4C = (int)stratum_subscribe_base;
  dword_173F50 = (int)stratum_authorize_base;
  dword_173F54 = (int)sub_420F0;
  LODWORD(v0) = diff_to_target_hns;
  HIDWORD(v0) = target_to_double_diff_hns;
  dword_173F58 = (int)sub_41CF8;
  dword_173F5C = (int)stratum_set_diff_or_target_base;
  *(_QWORD *)&dword_173F64 = v0;
  dword_173F60 = (int)target_to_diff_word_hns;
  v1 = calloc(1u, 0x54u);
  return memcpy(v1, &dword_173F24, 0x54u);
}
