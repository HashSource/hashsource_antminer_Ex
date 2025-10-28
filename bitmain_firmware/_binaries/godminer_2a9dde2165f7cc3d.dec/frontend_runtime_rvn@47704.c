void *frontend_runtime_rvn()
{
  __int64 v0; // r2
  void *v1; // r0

  dword_174078 = (int)stratum_connect;
  dword_17407C = (int)stratum_disconnect;
  dword_174080 = (int)stratum_recv_line;
  dword_174084 = (int)stratum_send_line;
  dword_174088 = (int)stratum_login_base;
  dword_17408C = (int)stratum_handle_method_base;
  dword_174090 = (int)pre_stratum_handle_method_base;
  dword_174094 = (int)stratum_handle_response_rvn;
  dword_174098 = (int)sub_465B4;
  dword_17409C = (int)sub_464DC;
  dword_1740A0 = (int)sub_46FE8;
  dword_1740A4 = (int)stratum_authorize_rvn;
  dword_1740A8 = (int)sub_45E70;
  LODWORD(v0) = diff_to_target_rvn;
  HIDWORD(v0) = target_to_double_diff_rvn;
  dword_1740AC = (int)sub_45E58;
  dword_1740B0 = (int)stratum_set_diff_or_target_base;
  *(_QWORD *)&dword_1740B8 = v0;
  dword_1740B4 = (int)target_to_diff_rvn;
  v1 = calloc(1u, 0x54u);
  return memcpy(v1, &dword_174078, 0x54u);
}
