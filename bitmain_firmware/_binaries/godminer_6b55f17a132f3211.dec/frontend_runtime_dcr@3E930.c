void *frontend_runtime_dcr()
{
  __int64 v0; // r2
  void *v1; // r0

  dword_165B74 = (int)stratum_connect;
  dword_165B78 = (int)stratum_disconnect;
  dword_165B7C = (int)stratum_recv_line;
  dword_165B80 = (int)stratum_send_line;
  dword_165B84 = (int)stratum_login_base;
  dword_165B88 = (int)stratum_handle_method_base;
  dword_165B8C = (int)pre_stratum_handle_method_base;
  dword_165B90 = (int)stratum_handle_response_base;
  dword_165B94 = (int)sub_3E830;
  dword_165B98 = (int)sub_3E7C8;
  dword_165B9C = (int)stratum_subscribe_base;
  dword_165BA0 = (int)stratum_authorize_base;
  dword_165BA4 = (int)sub_3DCDC;
  LODWORD(v0) = diff_to_target_dcr;
  HIDWORD(v0) = target_to_double_diff_dcr;
  dword_165BA8 = (int)sub_3D9A4;
  dword_165BAC = (int)stratum_set_diff_or_target_base;
  *(_QWORD *)&dword_165BB4 = v0;
  dword_165BB0 = (int)target_to_diff_dcr;
  v1 = calloc(1u, 0x54u);
  return memcpy(v1, &dword_165B74, 0x54u);
}
