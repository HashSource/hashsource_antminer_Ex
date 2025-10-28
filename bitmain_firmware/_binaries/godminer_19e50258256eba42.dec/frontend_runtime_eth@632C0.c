void *frontend_runtime_eth()
{
  void *dest; // [sp+4h] [bp-8h]

  dword_5AD034 = (int)stratum_connect;
  dword_5AD038 = (int)stratum_disconnect;
  dword_5AD03C = (int)stratum_recv_line;
  dword_5AD040 = (int)stratum_send_line;
  dword_5AD044 = (int)stratum_login_base;
  dword_5AD048 = (int)stratum_handle_method_eth;
  dword_5AD04C = (int)pre_stratum_handle_method_eth;
  dword_5AD050 = (int)stratum_handle_response_eth;
  dword_5AD054 = 399044;
  dword_5AD058 = 394872;
  dword_5AD05C = 392600;
  dword_5AD060 = (int)stratum_authorize_eth;
  dword_5AD064 = 401256;
  dword_5AD068 = 399548;
  dword_5AD06C = 400440;
  dword_5AD070 = (int)target_to_diff_eth;
  dword_5AD074 = (int)diff_to_target_eth;
  dword_5AD078 = (int)target_to_double_diff_eth;
  dest = calloc(1u, 0x54u);
  memcpy(dest, &dword_5AD034, 0x54u);
  return dest;
}
