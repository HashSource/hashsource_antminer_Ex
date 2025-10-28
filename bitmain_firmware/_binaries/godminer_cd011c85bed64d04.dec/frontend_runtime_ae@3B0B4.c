void *frontend_runtime_ae()
{
  __int64 v0; // r2
  void *v1; // r0

  dword_166EAC = (int)stratum_connect;
  dword_166EB0 = (int)stratum_disconnect;
  dword_166EB4 = (int)stratum_recv_line;
  dword_166EB8 = (int)stratum_send_line;
  dword_166EBC = (int)stratum_login_base;
  dword_166EC0 = (int)stratum_handle_method_base;
  dword_166EC4 = (int)stratum_handle_response_base;
  dword_166ECC = (int)stratum_prepare_upstream_work_ae;
  dword_166ED0 = (int)nonce_pop_handler_ae;
  dword_166ED4 = (int)check_job_ae;
  dword_166EC8 = (int)push_work_ae;
  dword_166ED8 = (int)pre_push_work_ae;
  dword_166EDC = (int)stratum_subscribe_base;
  dword_166EE0 = (int)stratum_authorize_base;
  dword_166EE4 = (int)stratum_notify_ae;
  dword_166EE8 = (int)stratum_parse_extranonce_ae;
  LODWORD(v0) = target_to_double_diff_ae;
  HIDWORD(v0) = "H";
  dword_166EEC = (int)stratum_set_diff_or_target_base;
  dword_166EF0 = (int)target_to_diff_ae;
  dword_166EF4 = (int)diff_to_target_ae;
  *(_QWORD *)&dword_166EF8 = v0;
  dword_166F00 = 120;
  v1 = calloc(1u, 0x60u);
  return memcpy(v1, &unk_166EA8, 0x60u);
}
