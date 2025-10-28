void *frontend_runtime_rvn()
{
  __int64 v0; // r2
  void *v1; // r0

  dword_165D5C = (int)stratum_connect;
  dword_165D60 = (int)stratum_disconnect;
  dword_165D64 = (int)stratum_recv_line;
  dword_165D68 = (int)stratum_send_line;
  dword_165D6C = (int)stratum_login_base;
  dword_165D70 = (int)stratum_handle_method_base;
  dword_165D74 = (int)pre_stratum_handle_method_base;
  dword_165D78 = (int)stratum_handle_response_rvn;
  dword_165D7C = (int)sub_43128;
  dword_165D80 = (int)sub_43050;
  dword_165D84 = (int)sub_43B5C;
  dword_165D88 = (int)stratum_authorize_rvn;
  dword_165D8C = (int)sub_429E0;
  LODWORD(v0) = diff_to_target_rvn;
  HIDWORD(v0) = target_to_double_diff_rvn;
  dword_165D90 = (int)sub_429C8;
  dword_165D94 = (int)stratum_set_diff_or_target_base;
  *(_QWORD *)&dword_165D9C = v0;
  dword_165D98 = (int)target_to_diff_rvn;
  v1 = calloc(1u, 0x54u);
  return memcpy(v1, &dword_165D5C, 0x54u);
}
