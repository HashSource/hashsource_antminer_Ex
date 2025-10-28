void *frontend_runtime_dash()
{
  void *dest; // [sp+4h] [bp-8h]

  dword_5ACF8C = (int)stratum_connect;
  dword_5ACF90 = (int)stratum_disconnect;
  dword_5ACF94 = (int)stratum_recv_line;
  dword_5ACF98 = (int)stratum_send_line;
  dword_5ACF9C = (int)stratum_login_base;
  dword_5ACFA0 = (int)stratum_handle_method_base;
  dword_5ACFA4 = (int)pre_stratum_handle_method_base;
  dword_5ACFA8 = (int)stratum_handle_response_base;
  dword_5ACFAC = 377328;
  dword_5ACFB0 = 376968;
  dword_5ACFB4 = (int)stratum_subscribe_base;
  dword_5ACFB8 = (int)stratum_authorize_base;
  dword_5ACFBC = 370628;
  dword_5ACFC0 = 375536;
  dword_5ACFC4 = (int)stratum_set_diff_or_target_base;
  dword_5ACFC8 = (int)target_to_diff_dash;
  dword_5ACFCC = (int)diff_to_target_dash;
  dword_5ACFD0 = (int)diff_from_target;
  dest = calloc(1u, 0x54u);
  memcpy(dest, &dword_5ACF8C, 0x54u);
  return dest;
}
