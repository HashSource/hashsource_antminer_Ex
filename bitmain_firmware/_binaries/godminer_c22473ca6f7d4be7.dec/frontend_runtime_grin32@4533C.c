void *frontend_runtime_grin32()
{
  void *v0; // r0

  dword_1660F4 = (int)stratum_connect;
  dword_1660F8 = (int)stratum_disconnect;
  dword_1660FC = (int)stratum_recv_line;
  dword_166100 = (int)stratum_send_line;
  dword_166104 = (int)stratum_login_base;
  dword_166108 = (int)stratum_handle_method_grin32;
  dword_16610C = (int)stratum_handle_response_base;
  dword_166114 = (int)stratum_prepare_upstream_work_grin32;
  dword_166118 = (int)nonce_pop_handler_grin32;
  dword_16611C = (int)check_job_grin32;
  dword_166110 = (int)push_work_grin32;
  dword_166120 = (int)pre_push_work_grin32;
  dword_166124 = (int)stratum_subscribe_base;
  dword_166128 = (int)stratum_authorize_grin32;
  dword_166138 = (int)target_to_diff_grin32;
  dword_16613C = (int)diff_to_target_grin32;
  dword_166140 = (int)target_to_double_diff_grin32;
  dword_166144 = (int)"g";
  dword_166148 = 60;
  dword_16612C = 0;
  dword_166130 = 0;
  dword_166134 = 0;
  v0 = calloc(1u, 0x60u);
  return memcpy(v0, &unk_1660F0, 0x60u);
}
