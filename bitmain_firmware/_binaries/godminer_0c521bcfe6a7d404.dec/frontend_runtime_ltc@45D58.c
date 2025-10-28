void *frontend_runtime_ltc()
{
  __int64 v0; // r2
  void *v1; // r0

  dword_174024 = (int)stratum_connect;
  dword_174028 = (int)stratum_disconnect;
  dword_17402C = (int)stratum_recv_line;
  dword_174030 = (int)stratum_send_line;
  dword_174034 = (int)stratum_login_base;
  dword_174038 = (int)stratum_handle_method_base;
  dword_17403C = (int)pre_stratum_handle_method_base;
  dword_174040 = (int)stratum_handle_response_base;
  dword_174044 = (int)sub_45C90;
  dword_174048 = (int)sub_45510;
  dword_17404C = (int)stratum_subscribe_base;
  dword_174050 = (int)stratum_authorize_base;
  dword_174054 = (int)sub_45548;
  LODWORD(v0) = diff_to_target_ltc;
  HIDWORD(v0) = target_to_double_diff_ltc;
  dword_174058 = (int)sub_45258;
  dword_17405C = (int)stratum_set_diff_or_target_base;
  *(_QWORD *)&dword_174064 = v0;
  dword_174060 = (int)target_to_diff_ltc;
  v1 = calloc(1u, 0x54u);
  return memcpy(v1, &dword_174024, 0x54u);
}
