void *frontend_runtime_ltc()
{
  __int64 v0; // r2
  void *v1; // r0

  dword_16727C = (int)stratum_connect;
  dword_167280 = (int)stratum_disconnect;
  dword_167284 = (int)stratum_recv_line;
  dword_167288 = (int)stratum_send_line;
  dword_16728C = (int)stratum_login_base;
  dword_167290 = (int)stratum_handle_method_base;
  dword_167294 = (int)stratum_handle_response_base;
  dword_16729C = (int)sub_48EA4;
  dword_1672A0 = (int)sub_48F3C;
  dword_1672A4 = (int)sub_48430;
  dword_167298 = (int)sub_48DF0;
  dword_1672A8 = (int)sub_48BBC;
  dword_1672AC = (int)stratum_subscribe_base;
  dword_1672B0 = (int)stratum_authorize_base;
  dword_1672B4 = (int)sub_48468;
  dword_1672B8 = (int)sub_48168;
  LODWORD(v0) = target_to_double_diff_ltc;
  HIDWORD(v0) = "H";
  dword_1672BC = (int)stratum_set_diff_or_target_base;
  dword_1672C0 = (int)target_to_diff_ltc;
  dword_1672C4 = (int)diff_to_target_ltc;
  *(_QWORD *)&dword_1672C8 = v0;
  dword_1672D0 = 70;
  v1 = calloc(1u, 0x60u);
  return memcpy(v1, &unk_167278, 0x60u);
}
