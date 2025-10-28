void *frontend_runtime_kda()
{
  void *dest; // [sp+4h] [bp-8h]

  dword_5AD1CC = (int)stratum_connect;
  dword_5AD1D0 = (int)stratum_disconnect;
  dword_5AD1D4 = (int)stratum_recv_line;
  dword_5AD1D8 = (int)stratum_send_line;
  dword_5AD1DC = (int)stratum_login_base;
  dword_5AD1E0 = (int)stratum_handle_method_base;
  dword_5AD1E4 = (int)pre_stratum_handle_method_base;
  dword_5AD1E8 = (int)stratum_handle_response_base;
  dword_5AD1EC = 452256;
  dword_5AD1F0 = 452140;
  dword_5AD1F4 = (int)stratum_subscribe_base;
  dword_5AD1F8 = (int)stratum_authorize_base;
  dword_5AD1FC = 449712;
  dword_5AD200 = 450852;
  dword_5AD204 = (int)stratum_set_diff_or_target_base;
  dword_5AD208 = (int)target_to_diff_kda;
  dword_5AD20C = (int)diff_to_target_kda;
  dword_5AD210 = (int)target_to_double_diff_kda;
  dest = calloc(1u, 0x54u);
  memcpy(dest, &dword_5AD1CC, 0x54u);
  return dest;
}
