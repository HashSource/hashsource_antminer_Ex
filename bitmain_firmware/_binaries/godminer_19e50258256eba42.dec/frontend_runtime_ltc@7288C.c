void *frontend_runtime_ltc()
{
  void *dest; // [sp+4h] [bp-8h]

  dword_5AD274 = (int)stratum_connect;
  dword_5AD278 = (int)stratum_disconnect;
  dword_5AD27C = (int)stratum_recv_line;
  dword_5AD280 = (int)stratum_send_line;
  dword_5AD284 = (int)stratum_login_base;
  dword_5AD288 = (int)stratum_handle_method_base;
  dword_5AD28C = (int)pre_stratum_handle_method_base;
  dword_5AD290 = (int)stratum_handle_response_base;
  dword_5AD294 = 468868;
  dword_5AD298 = 468528;
  dword_5AD29C = (int)stratum_subscribe_base;
  dword_5AD2A0 = (int)stratum_authorize_base;
  dword_5AD2A4 = 463740;
  dword_5AD2A8 = 467224;
  dword_5AD2AC = (int)stratum_set_diff_or_target_base;
  dword_5AD2B0 = (int)target_to_diff_ltc;
  dword_5AD2B4 = (int)diff_to_target_ltc;
  dword_5AD2B8 = (int)target_to_double_diff_ltc;
  dest = calloc(1u, 0x54u);
  memcpy(dest, &dword_5AD274, 0x54u);
  return dest;
}
