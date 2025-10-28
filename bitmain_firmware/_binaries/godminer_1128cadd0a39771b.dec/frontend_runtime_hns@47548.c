void *frontend_runtime_hns()
{
  __int64 v0; // r2
  void *v1; // r0

  dword_1671A8 = (int)stratum_connect;
  dword_1671AC = (int)stratum_disconnect;
  dword_1671B0 = (int)stratum_recv_line;
  dword_1671B4 = (int)stratum_send_line;
  dword_1671B8 = (int)stratum_login_base;
  dword_1671BC = (int)stratum_handle_method_base;
  dword_1671C0 = (int)stratum_handle_response_hns;
  dword_1671C8 = (int)sub_46330;
  dword_1671CC = (int)sub_45CD0;
  dword_1671D0 = (int)sub_45CF0;
  dword_1671C4 = (int)sub_4640C;
  dword_1671D4 = (int)sub_45CAC;
  dword_1671D8 = (int)stratum_subscribe_base;
  dword_1671DC = (int)stratum_authorize_base;
  dword_1671E0 = (int)sub_465C4;
  dword_1671E4 = (int)sub_45FF0;
  LODWORD(v0) = target_to_double_diff_hns;
  HIDWORD(v0) = "";
  dword_1671E8 = (int)stratum_set_diff_or_target_base;
  dword_1671EC = (int)target_to_diff_word_hns;
  dword_1671F0 = (int)diff_to_target_hns;
  *(_QWORD *)&dword_1671F4 = v0;
  dword_1671FC = 60;
  v1 = calloc(1u, 0x60u);
  return memcpy(v1, &unk_1671A4, 0x60u);
}
