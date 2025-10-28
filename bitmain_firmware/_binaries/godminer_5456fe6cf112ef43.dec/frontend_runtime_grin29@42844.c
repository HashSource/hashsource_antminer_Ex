void *frontend_runtime_grin29()
{
  void *v0; // r0

  dword_166090 = (int)stratum_connect;
  dword_166094 = (int)stratum_disconnect;
  dword_166098 = (int)stratum_recv_line;
  dword_16609C = (int)stratum_send_line;
  dword_1660A0 = (int)stratum_login_base;
  dword_1660A4 = (int)stratum_handle_method_grin29;
  dword_1660A8 = (int)stratum_handle_response_base;
  dword_1660B0 = (int)stratum_prepare_upstream_work_grin29;
  dword_1660B4 = (int)nonce_pop_handler_grin29;
  dword_1660B8 = (int)check_job_grin29;
  dword_1660AC = (int)push_work_grin29;
  dword_1660BC = (int)pre_push_work_grin29;
  dword_1660C0 = (int)stratum_subscribe_base;
  dword_1660C4 = (int)stratum_authorize_grin29;
  dword_1660D4 = (int)target_to_diff_grin29;
  dword_1660D8 = (int)diff_to_target_grin29;
  dword_1660DC = (int)target_to_double_diff_grin29;
  dword_1660E0 = (int)"g";
  dword_1660E4 = 60;
  dword_1660C8 = 0;
  dword_1660CC = 0;
  dword_1660D0 = 0;
  v0 = calloc(1u, 0x60u);
  return memcpy(v0, algn_16608C, 0x60u);
}
