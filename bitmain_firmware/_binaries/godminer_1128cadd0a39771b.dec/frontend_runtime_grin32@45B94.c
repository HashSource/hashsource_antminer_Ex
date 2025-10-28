void *frontend_runtime_grin32()
{
  void *v0; // r0

  dword_167104 = (int)stratum_connect;
  dword_167108 = (int)stratum_disconnect;
  dword_16710C = (int)stratum_recv_line;
  dword_167110 = (int)stratum_send_line;
  dword_167114 = (int)stratum_login_base;
  dword_167118 = (int)stratum_handle_method_grin32;
  dword_16711C = (int)stratum_handle_response_base;
  dword_167124 = (int)stratum_prepare_upstream_work_grin32;
  dword_167128 = (int)nonce_pop_handler_grin32;
  dword_16712C = (int)check_job_grin32;
  dword_167120 = (int)push_work_grin32;
  dword_167130 = (int)pre_push_work_grin32;
  dword_167134 = (int)stratum_subscribe_base;
  dword_167138 = (int)stratum_authorize_grin32;
  dword_167148 = (int)target_to_diff_grin32;
  dword_16714C = (int)diff_to_target_grin32;
  dword_167150 = (int)target_to_double_diff_grin32;
  dword_167154 = (int)"g";
  dword_167158 = 60;
  dword_16713C = 0;
  dword_167140 = 0;
  dword_167144 = 0;
  v0 = calloc(1u, 0x60u);
  return memcpy(v0, &unk_167100, 0x60u);
}
