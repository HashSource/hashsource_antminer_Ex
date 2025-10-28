void *frontend_runtime_ae()
{
  __int64 v0; // r2
  void *v1; // r0

  dword_165E9C = (int)stratum_connect;
  dword_165EA0 = (int)stratum_disconnect;
  dword_165EA4 = (int)stratum_recv_line;
  dword_165EA8 = (int)stratum_send_line;
  dword_165EAC = (int)stratum_login_base;
  dword_165EB0 = (int)stratum_handle_method_base;
  dword_165EB4 = (int)stratum_handle_response_base;
  dword_165EBC = (int)stratum_prepare_upstream_work_ae;
  dword_165EC0 = (int)nonce_pop_handler_ae;
  dword_165EC4 = (int)check_job_ae;
  dword_165EB8 = (int)push_work_ae;
  dword_165EC8 = (int)pre_push_work_ae;
  dword_165ECC = (int)stratum_subscribe_base;
  dword_165ED0 = (int)stratum_authorize_base;
  dword_165ED4 = (int)stratum_notify_ae;
  dword_165ED8 = (int)stratum_parse_extranonce_ae;
  LODWORD(v0) = target_to_double_diff_ae;
  HIDWORD(v0) = "H";
  dword_165EDC = (int)stratum_set_diff_or_target_base;
  dword_165EE0 = (int)target_to_diff_ae;
  dword_165EE4 = (int)diff_to_target_ae;
  *(_QWORD *)&dword_165EE8 = v0;
  dword_165EF0 = 120;
  v1 = calloc(1u, 0x60u);
  return memcpy(v1, &unk_165E98, 0x60u);
}
