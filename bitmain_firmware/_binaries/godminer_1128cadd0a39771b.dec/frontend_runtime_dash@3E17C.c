void *frontend_runtime_dash()
{
  __int64 v0; // r2
  void *v1; // r0

  dword_166F74 = (int)stratum_connect;
  dword_166F78 = (int)stratum_disconnect;
  dword_166F7C = (int)stratum_recv_line;
  dword_166F80 = (int)stratum_send_line;
  dword_166F84 = (int)stratum_login_base;
  dword_166F88 = (int)stratum_handle_method_base;
  dword_166F8C = (int)stratum_handle_response_base;
  dword_166F94 = (int)sub_3E068;
  dword_166F98 = (int)sub_3E114;
  dword_166F9C = (int)sub_3D178;
  dword_166F90 = (int)sub_3DFB8;
  dword_166FA0 = (int)sub_3DDBC;
  dword_166FA4 = (int)stratum_subscribe_base;
  dword_166FA8 = (int)stratum_authorize_base;
  dword_166FAC = (int)sub_3D1B0;
  dword_166FB0 = (int)sub_3CE54;
  LODWORD(v0) = target_to_double_diff_dash;
  HIDWORD(v0) = "H";
  dword_166FB4 = (int)stratum_set_diff_or_target_base;
  dword_166FB8 = (int)target_to_diff_dash;
  dword_166FBC = (int)diff_to_target_dash;
  *(_QWORD *)&dword_166FC0 = v0;
  dword_166FC8 = 60;
  v1 = calloc(1u, 0x60u);
  return memcpy(v1, &unk_166F70, 0x60u);
}
