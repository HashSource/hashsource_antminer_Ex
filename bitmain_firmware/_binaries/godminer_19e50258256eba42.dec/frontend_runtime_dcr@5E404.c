void *frontend_runtime_dcr()
{
  void *dest; // [sp+4h] [bp-8h]

  dword_5ACFE0 = (int)stratum_connect;
  dword_5ACFE4 = (int)stratum_disconnect;
  dword_5ACFE8 = (int)stratum_recv_line;
  dword_5ACFEC = (int)stratum_send_line;
  dword_5ACFF0 = (int)stratum_login_base;
  dword_5ACFF4 = (int)stratum_handle_method_base;
  dword_5ACFF8 = (int)pre_stratum_handle_method_base;
  dword_5ACFFC = (int)stratum_handle_response_base;
  dword_5AD000 = 385720;
  dword_5AD004 = 385208;
  dword_5AD008 = (int)stratum_subscribe_base;
  dword_5AD00C = (int)stratum_authorize_base;
  dword_5AD010 = 379644;
  dword_5AD014 = 383696;
  dword_5AD018 = (int)stratum_set_diff_or_target_base;
  dword_5AD01C = (int)target_to_diff_dcr;
  dword_5AD020 = (int)diff_to_target_dcr;
  dword_5AD024 = (int)target_to_double_diff_dcr;
  dest = calloc(1u, 0x54u);
  memcpy(dest, &dword_5ACFE0, 0x54u);
  return dest;
}
