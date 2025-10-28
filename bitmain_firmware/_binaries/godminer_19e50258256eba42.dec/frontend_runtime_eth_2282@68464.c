void *frontend_runtime_eth_2282()
{
  void *dest; // [sp+4h] [bp-8h]

  dword_5AD08C = (int)stratum_connect;
  dword_5AD090 = (int)stratum_disconnect;
  dword_5AD094 = (int)stratum_recv_line;
  dword_5AD098 = (int)stratum_send_line;
  dword_5AD09C = (int)stratum_login_base;
  dword_5AD0A0 = (int)stratum_handle_method_eth_2282;
  dword_5AD0A4 = (int)pre_stratum_handle_method_eth_2282;
  dword_5AD0A8 = (int)stratum_handle_response_eth_2282;
  dword_5AD0AC = 419040;
  dword_5AD0B0 = 415028;
  dword_5AD0B4 = 412756;
  dword_5AD0B8 = (int)stratum_authorize_eth_2282;
  dword_5AD0BC = 421968;
  dword_5AD0C0 = 420260;
  dword_5AD0C4 = 421152;
  dword_5AD0C8 = (int)target_to_diff_eth_2282;
  dword_5AD0CC = (int)diff_to_target_eth_2282;
  dword_5AD0D0 = (int)target_to_double_diff_eth_2282;
  dest = calloc(1u, 0x54u);
  memcpy(dest, &dword_5AD08C, 0x54u);
  return dest;
}
