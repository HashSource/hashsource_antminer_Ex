void *frontend_runtime_ckb()
{
  __int64 v0; // r2
  void *v1; // r0

  dword_166F14 = (int)stratum_connect;
  dword_166F18 = (int)stratum_disconnect;
  dword_166F1C = (int)stratum_recv_line;
  dword_166F20 = (int)stratum_send_line;
  dword_166F24 = (int)stratum_login_base;
  dword_166F28 = (int)stratum_handle_method_base;
  dword_166F2C = (int)stratum_handle_response_base;
  dword_166F34 = (int)sub_3CC70;
  dword_166F38 = (int)sub_3CCD8;
  dword_166F3C = (int)sub_3C688;
  dword_166F30 = (int)sub_3CBBC;
  dword_166F40 = (int)sub_3CA3C;
  dword_166F44 = (int)stratum_subscribe_base;
  dword_166F48 = (int)stratum_authorize_base;
  dword_166F4C = (int)sub_3C6C0;
  dword_166F50 = (int)sub_3C2E4;
  LODWORD(v0) = target_to_double_diff_ckb;
  HIDWORD(v0) = "H";
  dword_166F54 = (int)stratum_set_diff_or_target_base;
  dword_166F58 = (int)target_to_diff_ckb;
  dword_166F5C = (int)diff_to_target_ckb;
  *(_QWORD *)&dword_166F60 = v0;
  dword_166F68 = 60;
  v1 = calloc(1u, 0x60u);
  return memcpy(v1, &unk_166F10, 0x60u);
}
