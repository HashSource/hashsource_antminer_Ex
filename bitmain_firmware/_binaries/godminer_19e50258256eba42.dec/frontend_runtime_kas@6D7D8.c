void *frontend_runtime_kas()
{
  void *dest; // [sp+4h] [bp-8h]

  dword_5AD178 = (int)stratum_connect;
  dword_5AD17C = (int)stratum_disconnect;
  dword_5AD180 = (int)stratum_recv_line;
  dword_5AD184 = (int)stratum_send_line;
  dword_5AD188 = (int)stratum_login_base;
  dword_5AD18C = (int)stratum_handle_method_base;
  dword_5AD190 = (int)pre_stratum_handle_method_base;
  dword_5AD194 = (int)stratum_handle_response_kas;
  dword_5AD198 = 443616;
  dword_5AD19C = 443040;
  dword_5AD1A0 = 439932;
  dword_5AD1A4 = (int)stratum_authorize_kas;
  dword_5AD1A8 = 446256;
  dword_5AD1AC = 443816;
  dword_5AD1B0 = (int)stratum_set_diff_or_target_base;
  dword_5AD1B4 = (int)target_to_diff_kas;
  dword_5AD1B8 = (int)diff_to_target_kas;
  dword_5AD1BC = (int)target_to_double_diff_kas;
  dest = calloc(1u, 0x54u);
  memcpy(dest, &dword_5AD178, 0x54u);
  return dest;
}
