void *frontend_runtime_rvn()
{
  void *dest; // [sp+4h] [bp-8h]

  dword_5AD2C8 = (int)stratum_connect;
  dword_5AD2CC = (int)stratum_disconnect;
  dword_5AD2D0 = (int)stratum_recv_line;
  dword_5AD2D4 = (int)stratum_send_line;
  dword_5AD2D8 = (int)stratum_login_base;
  dword_5AD2DC = (int)stratum_handle_method_base;
  dword_5AD2E0 = (int)pre_stratum_handle_method_base;
  dword_5AD2E4 = (int)stratum_handle_response_rvn;
  dword_5AD2E8 = 477448;
  dword_5AD2EC = 474808;
  dword_5AD2F0 = 470528;
  dword_5AD2F4 = (int)stratum_authorize_rvn;
  dword_5AD2F8 = 478880;
  dword_5AD2FC = 477796;
  dword_5AD300 = (int)stratum_set_diff_or_target_base;
  dword_5AD304 = (int)target_to_diff_rvn;
  dword_5AD308 = (int)diff_to_target_rvn;
  dword_5AD30C = (int)target_to_double_diff_rvn;
  dest = calloc(1u, 0x54u);
  memcpy(dest, &dword_5AD2C8, 0x54u);
  return dest;
}
