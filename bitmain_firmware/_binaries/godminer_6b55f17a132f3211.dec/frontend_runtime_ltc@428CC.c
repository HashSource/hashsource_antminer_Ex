void *frontend_runtime_ltc()
{
  __int64 v0; // r2
  void *v1; // r0

  dword_165D08 = (int)stratum_connect;
  dword_165D0C = (int)stratum_disconnect;
  dword_165D10 = (int)stratum_recv_line;
  dword_165D14 = (int)stratum_send_line;
  dword_165D18 = (int)stratum_login_base;
  dword_165D1C = (int)stratum_handle_method_base;
  dword_165D20 = (int)pre_stratum_handle_method_base;
  dword_165D24 = (int)stratum_handle_response_base;
  dword_165D28 = (int)sub_42804;
  dword_165D2C = (int)sub_42078;
  dword_165D30 = (int)stratum_subscribe_base;
  dword_165D34 = (int)stratum_authorize_base;
  dword_165D38 = (int)sub_420B0;
  LODWORD(v0) = diff_to_target_ltc;
  HIDWORD(v0) = target_to_double_diff_ltc;
  dword_165D3C = (int)sub_41DC4;
  dword_165D40 = (int)stratum_set_diff_or_target_base;
  *(_QWORD *)&dword_165D48 = v0;
  dword_165D44 = (int)target_to_diff_ltc;
  v1 = calloc(1u, 0x54u);
  return memcpy(v1, &dword_165D08, 0x54u);
}
