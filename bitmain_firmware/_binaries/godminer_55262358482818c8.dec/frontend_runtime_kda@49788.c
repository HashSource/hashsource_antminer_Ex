void *frontend_runtime_kda()
{
  __int64 v0; // r2
  void *v1; // r0

  dword_1957FC = (int)stratum_connect;
  dword_195800 = (int)stratum_disconnect;
  dword_195804 = (int)stratum_recv_line;
  dword_195808 = (int)stratum_send_line;
  dword_19580C = (int)stratum_login_base;
  dword_195810 = (int)stratum_handle_method_base;
  dword_195814 = (int)pre_stratum_handle_method_base;
  dword_195818 = (int)stratum_handle_response_base;
  dword_19581C = (int)sub_496F0;
  dword_195820 = (int)sub_49154;
  dword_195824 = (int)stratum_subscribe_base;
  dword_195828 = (int)stratum_authorize_base;
  dword_19582C = (int)sub_4941C;
  LODWORD(v0) = diff_to_target_kda;
  HIDWORD(v0) = target_to_double_diff_kda;
  dword_195830 = (int)sub_49188;
  dword_195834 = (int)stratum_set_diff_or_target_base;
  *(_QWORD *)&dword_19583C = v0;
  dword_195838 = (int)target_to_diff_kda;
  v1 = calloc(1u, 0x54u);
  return memcpy(v1, &dword_1957FC, 0x54u);
}
