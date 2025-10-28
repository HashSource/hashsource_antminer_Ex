void *frontend_runtime_hns()
{
  void *dest; // [sp+4h] [bp-8h]

  dword_5AD0E0 = (int)stratum_connect;
  dword_5AD0E4 = (int)stratum_disconnect;
  dword_5AD0E8 = (int)stratum_recv_line;
  dword_5AD0EC = (int)stratum_send_line;
  dword_5AD0F0 = (int)stratum_login_base;
  dword_5AD0F4 = (int)stratum_handle_method_base;
  dword_5AD0F8 = (int)pre_stratum_handle_method_base;
  dword_5AD0FC = (int)stratum_handle_response_hns;
  dword_5AD100 = 437412;
  dword_5AD104 = 436952;
  dword_5AD108 = (int)stratum_subscribe_base;
  dword_5AD10C = (int)stratum_authorize_base;
  dword_5AD110 = 429416;
  dword_5AD114 = 434536;
  dword_5AD118 = (int)stratum_set_diff_or_target_base;
  dword_5AD11C = (int)target_to_diff_word_hns;
  dword_5AD120 = (int)diff_to_target_hns;
  dword_5AD124 = (int)target_to_double_diff_hns;
  dest = calloc(1u, 0x54u);
  memcpy(dest, &dword_5AD0E0, 0x54u);
  return dest;
}
