void *frontend_runtime_dcr()
{
  __int64 v0; // r2
  void *v1; // r0

  dword_166FD8 = (int)stratum_connect;
  dword_166FDC = (int)stratum_disconnect;
  dword_166FE0 = (int)stratum_recv_line;
  dword_166FE4 = (int)stratum_send_line;
  dword_166FE8 = (int)stratum_login_base;
  dword_166FEC = (int)stratum_handle_method_base;
  dword_166FF0 = (int)stratum_handle_response_base;
  dword_166FF8 = (int)sub_3F36C;
  dword_166FFC = (int)sub_3E2C8;
  dword_167000 = (int)sub_3E680;
  dword_166FF4 = (int)sub_3F1C4;
  dword_167004 = (int)sub_3E2A4;
  dword_167008 = (int)stratum_subscribe_base;
  dword_16700C = (int)stratum_authorize_base;
  dword_167010 = (int)sub_3E6B8;
  dword_167014 = (int)sub_3E2FC;
  LODWORD(v0) = target_to_double_diff_dcr;
  HIDWORD(v0) = "";
  dword_167018 = (int)stratum_set_diff_or_target_base;
  dword_16701C = (int)target_to_diff_dcr;
  dword_167020 = (int)diff_to_target_dcr;
  *(_QWORD *)&dword_167024 = v0;
  dword_16702C = 60;
  v1 = calloc(1u, 0x60u);
  return memcpy(v1, algn_166FD4, 0x60u);
}
