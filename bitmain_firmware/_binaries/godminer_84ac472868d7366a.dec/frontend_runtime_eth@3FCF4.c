void *frontend_runtime_eth()
{
  void *v0; // r0

  dword_16602C = (int)stratum_connect;
  dword_166030 = (int)stratum_disconnect;
  dword_166034 = (int)stratum_recv_line;
  dword_166038 = (int)stratum_send_line;
  dword_16603C = (int)stratum_login_base;
  dword_166040 = (int)stratum_handle_method_eth;
  dword_166044 = (int)stratum_handle_response_base;
  dword_16604C = (int)sub_3F048;
  dword_166050 = (int)sub_3F654;
  dword_166054 = (int)sub_3EFDC;
  dword_166048 = (int)sub_3EEA4;
  dword_166058 = (int)sub_3EF78;
  dword_16605C = (int)stratum_subscribe_base;
  dword_166060 = (int)stratum_authorize_eth;
  dword_166068 = (int)sub_3EE9C;
  dword_166070 = (int)target_to_diff_eth;
  dword_166074 = (int)diff_to_target_eth;
  dword_166078 = (int)target_to_double_diff_eth;
  dword_16607C = (int)"H";
  dword_166080 = 120;
  dword_166064 = 0;
  dword_16606C = 0;
  v0 = calloc(1u, 0x60u);
  return memcpy(v0, &unk_166028, 0x60u);
}
