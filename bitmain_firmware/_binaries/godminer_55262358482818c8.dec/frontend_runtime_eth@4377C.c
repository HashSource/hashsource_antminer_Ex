void *frontend_runtime_eth()
{
  __int64 v0; // r2
  void *v1; // r0

  dword_195668 = (int)stratum_connect;
  dword_19566C = (int)stratum_disconnect;
  dword_195670 = (int)stratum_recv_line;
  dword_195674 = (int)stratum_send_line;
  dword_195678 = (int)stratum_login_base;
  dword_19567C = (int)stratum_handle_method_eth;
  dword_195680 = (int)pre_stratum_handle_method_eth;
  dword_195684 = (int)stratum_handle_response_eth;
  dword_195688 = (int)sub_42730;
  dword_19568C = (int)sub_42658;
  dword_195690 = (int)sub_4180C;
  dword_195694 = (int)stratum_authorize_eth;
  dword_195698 = (int)sub_42190;
  LODWORD(v0) = diff_to_target_eth;
  HIDWORD(v0) = target_to_double_diff_eth;
  dword_19569C = (int)sub_41FA8;
  dword_1956A0 = (int)sub_41DC8;
  *(_QWORD *)&dword_1956A8 = v0;
  dword_1956A4 = (int)target_to_diff_eth;
  v1 = calloc(1u, 0x54u);
  return memcpy(v1, &dword_195668, 0x54u);
}
