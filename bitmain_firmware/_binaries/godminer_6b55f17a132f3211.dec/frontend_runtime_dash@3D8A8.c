void *frontend_runtime_dash()
{
  __int64 v0; // r2
  void *v1; // r0

  dword_165B20 = (int)stratum_connect;
  dword_165B24 = (int)stratum_disconnect;
  dword_165B28 = (int)stratum_recv_line;
  dword_165B2C = (int)stratum_send_line;
  dword_165B30 = (int)stratum_login_base;
  dword_165B34 = (int)stratum_handle_method_base;
  dword_165B38 = (int)pre_stratum_handle_method_base;
  dword_165B3C = (int)stratum_handle_response_base;
  dword_165B40 = (int)sub_3D7DC;
  dword_165B44 = (int)sub_3CA3C;
  dword_165B48 = (int)stratum_subscribe_base;
  dword_165B4C = (int)stratum_authorize_base;
  dword_165B50 = (int)sub_3CAA8;
  LODWORD(v0) = diff_to_target_dash;
  HIDWORD(v0) = target_to_double_diff_dash;
  dword_165B54 = (int)sub_3C74C;
  dword_165B58 = (int)stratum_set_diff_or_target_base;
  *(_QWORD *)&dword_165B60 = v0;
  dword_165B5C = (int)target_to_diff_dash;
  v1 = calloc(1u, 0x54u);
  return memcpy(v1, &dword_165B20, 0x54u);
}
