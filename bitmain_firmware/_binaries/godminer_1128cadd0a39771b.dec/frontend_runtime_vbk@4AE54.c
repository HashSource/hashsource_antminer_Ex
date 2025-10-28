void *frontend_runtime_vbk()
{
  void *v0; // r0

  dword_1672E4 = (int)stratum_connect;
  dword_1672E8 = (int)stratum_disconnect;
  dword_1672EC = (int)stratum_recv_line;
  dword_1672F0 = (int)stratum_send_line;
  dword_1672F4 = (int)stratum_login_vbk;
  dword_1672F8 = (int)stratum_handle_method_vbk;
  dword_1672FC = (int)stratum_handle_response_vbk;
  dword_167304 = (int)stratum_prepare_upstream_work_vbk;
  dword_167308 = (int)nonce_pop_handler_vbk;
  dword_16730C = (int)check_job_vbk;
  dword_167300 = (int)push_work_vbk;
  dword_167310 = (int)pre_push_work_vbk;
  dword_167314 = (int)stratum_subscribe_vbk;
  dword_167318 = (int)stratum_authorize_vbk;
  dword_167328 = (int)target_to_diff_vbk;
  dword_16732C = (int)diff_to_target_vbk;
  dword_167330 = (int)target_to_double_diff_vbk;
  dword_167334 = (int)"H";
  dword_167338 = 60;
  dword_16731C = 0;
  dword_167320 = 0;
  dword_167324 = 0;
  v0 = calloc(1u, 0x60u);
  return memcpy(v0, &unk_1672E0, 0x60u);
}
