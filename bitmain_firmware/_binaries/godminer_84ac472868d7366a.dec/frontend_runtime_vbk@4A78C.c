void *frontend_runtime_vbk()
{
  void *v0; // r0

  dword_1662D4 = (int)stratum_connect;
  dword_1662D8 = (int)stratum_disconnect;
  dword_1662DC = (int)stratum_recv_line;
  dword_1662E0 = (int)stratum_send_line;
  dword_1662E4 = (int)stratum_login_vbk;
  dword_1662E8 = (int)stratum_handle_method_vbk;
  dword_1662EC = (int)stratum_handle_response_vbk;
  dword_1662F4 = (int)stratum_prepare_upstream_work_vbk;
  dword_1662F8 = (int)nonce_pop_handler_vbk;
  dword_1662FC = (int)check_job_vbk;
  dword_1662F0 = (int)push_work_vbk;
  dword_166300 = (int)pre_push_work_vbk;
  dword_166304 = (int)stratum_subscribe_vbk;
  dword_166308 = (int)stratum_authorize_vbk;
  dword_166318 = (int)target_to_diff_vbk;
  dword_16631C = (int)diff_to_target_vbk;
  dword_166320 = (int)target_to_double_diff_vbk;
  dword_166324 = (int)"H";
  dword_166328 = 60;
  dword_16630C = 0;
  dword_166310 = 0;
  dword_166314 = 0;
  v0 = calloc(1u, 0x60u);
  return memcpy(v0, &unk_1662D0, 0x60u);
}
