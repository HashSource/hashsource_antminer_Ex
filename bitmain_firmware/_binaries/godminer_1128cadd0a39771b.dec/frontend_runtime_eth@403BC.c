void *frontend_runtime_eth()
{
  void *v0; // r0

  dword_16703C = (int)stratum_connect;
  dword_167040 = (int)stratum_disconnect;
  dword_167044 = (int)stratum_recv_line;
  dword_167048 = (int)stratum_send_line;
  dword_16704C = (int)stratum_login_base;
  dword_167050 = (int)stratum_handle_method_eth;
  dword_167054 = (int)stratum_handle_response_base;
  dword_16705C = (int)sub_3F710;
  dword_167060 = (int)sub_3FD1C;
  dword_167064 = (int)sub_3F6A4;
  dword_167058 = (int)sub_3F56C;
  dword_167068 = (int)sub_3F640;
  dword_16706C = (int)stratum_subscribe_base;
  dword_167070 = (int)stratum_authorize_eth;
  dword_167078 = (int)sub_3F564;
  dword_167080 = (int)target_to_diff_eth;
  dword_167084 = (int)diff_to_target_eth;
  dword_167088 = (int)target_to_double_diff_eth;
  dword_16708C = (int)"H";
  dword_167090 = 120;
  dword_167074 = 0;
  dword_16707C = 0;
  v0 = calloc(1u, 0x60u);
  return memcpy(v0, &unk_167038, 0x60u);
}
