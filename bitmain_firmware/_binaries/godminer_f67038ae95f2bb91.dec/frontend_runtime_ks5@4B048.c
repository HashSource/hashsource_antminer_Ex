void *frontend_runtime_ks5()
{
  __int64 v0; // r2
  void *v1; // r0

  dword_195850 = (int)stratum_connect;
  dword_195854 = (int)stratum_disconnect;
  dword_195858 = (int)stratum_recv_line;
  dword_19585C = (int)stratum_send_line;
  dword_195860 = (int)stratum_login_base;
  dword_195864 = (int)stratum_handle_method_base;
  dword_195868 = (int)pre_stratum_handle_method_base;
  dword_19586C = (int)stratum_handle_response_ks5;
  dword_195870 = (int)sub_4A580;
  dword_195874 = (int)sub_49884;
  dword_195878 = (int)sub_4B030;
  dword_19587C = (int)stratum_authorize_ks5;
  dword_195880 = (int)sub_49D04;
  LODWORD(v0) = diff_to_target_ks5;
  HIDWORD(v0) = target_to_double_diff_ks5;
  dword_195884 = (int)sub_49A10;
  dword_195888 = (int)stratum_set_diff_or_target_base;
  *(_QWORD *)&dword_195890 = v0;
  dword_19588C = (int)target_to_diff_ks5;
  v1 = calloc(1u, 0x54u);
  return memcpy(v1, &dword_195850, 0x54u);
}
