void *frontend_runtime_ckb()
{
  __int64 v0; // r2
  void *v1; // r0

  dword_165F04 = (int)stratum_connect;
  dword_165F08 = (int)stratum_disconnect;
  dword_165F0C = (int)stratum_recv_line;
  dword_165F10 = (int)stratum_send_line;
  dword_165F14 = (int)stratum_login_base;
  dword_165F18 = (int)stratum_handle_method_base;
  dword_165F1C = (int)stratum_handle_response_base;
  dword_165F24 = (int)sub_3C5A8;
  dword_165F28 = (int)sub_3C610;
  dword_165F2C = (int)sub_3BFC0;
  dword_165F20 = (int)sub_3C4F4;
  dword_165F30 = (int)sub_3C374;
  dword_165F34 = (int)stratum_subscribe_base;
  dword_165F38 = (int)stratum_authorize_base;
  dword_165F3C = (int)sub_3BFF8;
  dword_165F40 = (int)sub_3BC1C;
  LODWORD(v0) = target_to_double_diff_ckb;
  HIDWORD(v0) = "H";
  dword_165F44 = (int)stratum_set_diff_or_target_base;
  dword_165F48 = (int)target_to_diff_ckb;
  dword_165F4C = (int)diff_to_target_ckb;
  *(_QWORD *)&dword_165F50 = v0;
  dword_165F58 = 60;
  v1 = calloc(1u, 0x60u);
  return memcpy(v1, &unk_165F00, 0x60u);
}
