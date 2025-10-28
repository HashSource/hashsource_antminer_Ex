void *frontend_runtime_dash()
{
  __int64 v0; // r2
  void *v1; // r0

  dword_173DE8 = (int)stratum_connect;
  dword_173DEC = (int)stratum_disconnect;
  dword_173DF0 = (int)stratum_recv_line;
  dword_173DF4 = (int)stratum_send_line;
  dword_173DF8 = (int)stratum_login_base;
  dword_173DFC = (int)stratum_handle_method_base;
  dword_173E00 = (int)pre_stratum_handle_method_base;
  dword_173E04 = (int)stratum_handle_response_base;
  dword_173E08 = (int)sub_3E738;
  dword_173E0C = (int)sub_3D998;
  dword_173E10 = (int)stratum_subscribe_base;
  dword_173E14 = (int)stratum_authorize_base;
  dword_173E18 = (int)sub_3DA04;
  LODWORD(v0) = diff_to_target_dash;
  HIDWORD(v0) = target_to_double_diff_dash;
  dword_173E1C = (int)sub_3D6A4;
  dword_173E20 = (int)stratum_set_diff_or_target_base;
  *(_QWORD *)&dword_173E28 = v0;
  dword_173E24 = (int)target_to_diff_dash;
  v1 = calloc(1u, 0x54u);
  return memcpy(v1, &dword_173DE8, 0x54u);
}
