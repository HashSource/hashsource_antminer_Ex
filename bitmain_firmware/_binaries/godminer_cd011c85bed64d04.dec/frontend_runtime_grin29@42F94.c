void *frontend_runtime_grin29()
{
  void *v0; // r0

  dword_1670A0 = (int)stratum_connect;
  dword_1670A4 = (int)stratum_disconnect;
  dword_1670A8 = (int)stratum_recv_line;
  dword_1670AC = (int)stratum_send_line;
  dword_1670B0 = (int)stratum_login_base;
  dword_1670B4 = (int)stratum_handle_method_grin29;
  dword_1670B8 = (int)stratum_handle_response_base;
  dword_1670C0 = (int)stratum_prepare_upstream_work_grin29;
  dword_1670C4 = (int)nonce_pop_handler_grin29;
  dword_1670C8 = (int)check_job_grin29;
  dword_1670BC = (int)push_work_grin29;
  dword_1670CC = (int)pre_push_work_grin29;
  dword_1670D0 = (int)stratum_subscribe_base;
  dword_1670D4 = (int)stratum_authorize_grin29;
  dword_1670E4 = (int)target_to_diff_grin29;
  dword_1670E8 = (int)diff_to_target_grin29;
  dword_1670EC = (int)target_to_double_diff_grin29;
  dword_1670F0 = (int)"g";
  dword_1670F4 = 60;
  dword_1670D8 = 0;
  dword_1670DC = 0;
  dword_1670E0 = 0;
  v0 = calloc(1u, 0x60u);
  return memcpy(v0, algn_16709C, 0x60u);
}
