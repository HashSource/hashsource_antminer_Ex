void *frontend_runtime_hns()
{
  __int64 v0; // r2
  void *v1; // r0

  dword_166198 = (int)stratum_connect;
  dword_16619C = (int)stratum_disconnect;
  dword_1661A0 = (int)stratum_recv_line;
  dword_1661A4 = (int)stratum_send_line;
  dword_1661A8 = (int)stratum_login_base;
  dword_1661AC = (int)stratum_handle_method_base;
  dword_1661B0 = (int)stratum_handle_response_hns;
  dword_1661B8 = (int)sub_45BE0;
  dword_1661BC = (int)sub_45580;
  dword_1661C0 = (int)sub_455A0;
  dword_1661B4 = (int)sub_45CBC;
  dword_1661C4 = (int)sub_4555C;
  dword_1661C8 = (int)stratum_subscribe_base;
  dword_1661CC = (int)stratum_authorize_base;
  dword_1661D0 = (int)sub_45E74;
  dword_1661D4 = (int)sub_458A0;
  LODWORD(v0) = target_to_double_diff_hns;
  HIDWORD(v0) = "";
  dword_1661D8 = (int)stratum_set_diff_or_target_base;
  dword_1661DC = (int)target_to_diff_word_hns;
  dword_1661E0 = (int)diff_to_target_hns;
  *(_QWORD *)&dword_1661E4 = v0;
  dword_1661EC = 60;
  v1 = calloc(1u, 0x60u);
  return memcpy(v1, &unk_166194, 0x60u);
}
