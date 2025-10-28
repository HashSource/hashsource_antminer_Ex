void *frontend_runtime_eth_2282()
{
  __int64 v0; // r2
  void *v1; // r0

  dword_1956BC = (int)stratum_connect;
  dword_1956C0 = (int)stratum_disconnect;
  dword_1956C4 = (int)stratum_recv_line;
  dword_1956C8 = (int)stratum_send_line;
  dword_1956CC = (int)stratum_login_base;
  dword_1956D0 = (int)stratum_handle_method_eth_2282;
  dword_1956D4 = (int)pre_stratum_handle_method_eth_2282;
  dword_1956D8 = (int)stratum_handle_response_eth_2282;
  dword_1956DC = (int)sub_44E58;
  dword_1956E0 = (int)sub_44D80;
  dword_1956E4 = (int)sub_43878;
  dword_1956E8 = (int)stratum_authorize_eth_2282;
  dword_1956EC = (int)sub_445A0;
  LODWORD(v0) = diff_to_target_eth_2282;
  HIDWORD(v0) = target_to_double_diff_eth_2282;
  dword_1956F0 = (int)sub_44308;
  dword_1956F4 = (int)sub_43E34;
  *(_QWORD *)&dword_1956FC = v0;
  dword_1956F8 = (int)target_to_diff_eth_2282;
  v1 = calloc(1u, 0x54u);
  return memcpy(v1, &dword_1956BC, 0x54u);
}
