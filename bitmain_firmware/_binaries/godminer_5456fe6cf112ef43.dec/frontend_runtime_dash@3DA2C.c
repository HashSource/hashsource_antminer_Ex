void *frontend_runtime_dash()
{
  __int64 v0; // r2
  void *v1; // r0

  dword_165F64 = (int)stratum_connect;
  dword_165F68 = (int)stratum_disconnect;
  dword_165F6C = (int)stratum_recv_line;
  dword_165F70 = (int)stratum_send_line;
  dword_165F74 = (int)stratum_login_base;
  dword_165F78 = (int)stratum_handle_method_base;
  dword_165F7C = (int)stratum_handle_response_base;
  dword_165F84 = (int)sub_3D918;
  dword_165F88 = (int)sub_3D9C4;
  dword_165F8C = (int)sub_3CA28;
  dword_165F80 = (int)sub_3D868;
  dword_165F90 = (int)sub_3D66C;
  dword_165F94 = (int)stratum_subscribe_base;
  dword_165F98 = (int)stratum_authorize_base;
  dword_165F9C = (int)sub_3CA60;
  dword_165FA0 = (int)sub_3C704;
  LODWORD(v0) = target_to_double_diff_dash;
  HIDWORD(v0) = "H";
  dword_165FA4 = (int)stratum_set_diff_or_target_base;
  dword_165FA8 = (int)target_to_diff_dash;
  dword_165FAC = (int)diff_to_target_dash;
  *(_QWORD *)&dword_165FB0 = v0;
  dword_165FB8 = 60;
  v1 = calloc(1u, 0x60u);
  return memcpy(v1, &unk_165F60, 0x60u);
}
