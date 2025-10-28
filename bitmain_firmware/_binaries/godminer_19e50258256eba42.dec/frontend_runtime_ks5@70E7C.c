void *frontend_runtime_ks5()
{
  void *dest; // [sp+4h] [bp-8h]

  dword_5AD220 = (int)stratum_connect;
  dword_5AD224 = (int)stratum_disconnect;
  dword_5AD228 = (int)stratum_recv_line;
  dword_5AD22C = (int)stratum_send_line;
  dword_5AD230 = (int)stratum_login_base;
  dword_5AD234 = (int)stratum_handle_method_base;
  dword_5AD238 = (int)pre_stratum_handle_method_base;
  dword_5AD23C = (int)stratum_handle_response_ks5;
  dword_5AD240 = 457604;
  dword_5AD244 = 457028;
  dword_5AD248 = 453920;
  dword_5AD24C = (int)stratum_authorize_ks5;
  dword_5AD250 = 460244;
  dword_5AD254 = 457804;
  dword_5AD258 = (int)stratum_set_diff_or_target_base;
  dword_5AD25C = (int)target_to_diff_ks5;
  dword_5AD260 = (int)diff_to_target_ks5;
  dword_5AD264 = (int)target_to_double_diff_ks5;
  dest = calloc(1u, 0x54u);
  memcpy(dest, &dword_5AD220, 0x54u);
  return dest;
}
