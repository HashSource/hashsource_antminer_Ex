void *frontend_runtime_kas()
{
  __int64 v0; // r2
  void *v1; // r0

  dword_173F7C = (int)stratum_connect;
  dword_173F80 = (int)stratum_disconnect;
  dword_173F84 = (int)stratum_recv_line;
  dword_173F88 = (int)stratum_send_line;
  dword_173F8C = (int)stratum_login_base;
  dword_173F90 = (int)stratum_handle_method_base;
  dword_173F94 = (int)pre_stratum_handle_method_base;
  dword_173F98 = (int)stratum_handle_response_kas;
  dword_173F9C = (int)sub_43F64;
  dword_173FA0 = (int)sub_43268;
  dword_173FA4 = (int)sub_44A14;
  dword_173FA8 = (int)stratum_authorize_kas;
  dword_173FAC = (int)sub_436E8;
  LODWORD(v0) = diff_to_target_kas;
  HIDWORD(v0) = target_to_double_diff_kas;
  dword_173FB0 = (int)sub_433F4;
  dword_173FB4 = (int)stratum_set_diff_or_target_base;
  *(_QWORD *)&dword_173FBC = v0;
  dword_173FB8 = (int)target_to_diff_kas;
  v1 = calloc(1u, 0x54u);
  return memcpy(v1, &dword_173F7C, 0x54u);
}
