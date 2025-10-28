void *frontend_runtime_ltc()
{
  __int64 v0; // r2
  void *v1; // r0

  dword_16626C = (int)stratum_connect;
  dword_166270 = (int)stratum_disconnect;
  dword_166274 = (int)stratum_recv_line;
  dword_166278 = (int)stratum_send_line;
  dword_16627C = (int)stratum_login_base;
  dword_166280 = (int)stratum_handle_method_base;
  dword_166284 = (int)stratum_handle_response_base;
  dword_16628C = (int)sub_487DC;
  dword_166290 = (int)sub_48874;
  dword_166294 = (int)sub_47D68;
  dword_166288 = (int)sub_48728;
  dword_166298 = (int)sub_484F4;
  dword_16629C = (int)stratum_subscribe_base;
  dword_1662A0 = (int)stratum_authorize_base;
  dword_1662A4 = (int)sub_47DA0;
  dword_1662A8 = (int)sub_47AA0;
  LODWORD(v0) = target_to_double_diff_ltc;
  HIDWORD(v0) = "H";
  dword_1662AC = (int)stratum_set_diff_or_target_base;
  dword_1662B0 = (int)target_to_diff_ltc;
  dword_1662B4 = (int)diff_to_target_ltc;
  *(_QWORD *)&dword_1662B8 = v0;
  dword_1662C0 = 70;
  v1 = calloc(1u, 0x60u);
  return memcpy(v1, &unk_166268, 0x60u);
}
