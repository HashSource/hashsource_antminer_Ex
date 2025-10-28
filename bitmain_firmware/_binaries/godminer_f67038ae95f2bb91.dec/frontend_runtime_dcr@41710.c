void *frontend_runtime_dcr()
{
  __int64 v0; // r2
  void *v1; // r0

  dword_195614 = (int)stratum_connect;
  dword_195618 = (int)stratum_disconnect;
  dword_19561C = (int)stratum_recv_line;
  dword_195620 = (int)stratum_send_line;
  dword_195624 = (int)stratum_login_base;
  dword_195628 = (int)stratum_handle_method_base;
  dword_19562C = (int)pre_stratum_handle_method_base;
  dword_195630 = (int)stratum_handle_response_base;
  dword_195634 = (int)sub_41610;
  dword_195638 = (int)sub_415A8;
  dword_19563C = (int)stratum_subscribe_base;
  dword_195640 = (int)stratum_authorize_base;
  dword_195644 = (int)sub_40ABC;
  LODWORD(v0) = diff_to_target_dcr;
  HIDWORD(v0) = target_to_double_diff_dcr;
  dword_195648 = (int)sub_40780;
  dword_19564C = (int)stratum_set_diff_or_target_base;
  *(_QWORD *)&dword_195654 = v0;
  dword_195650 = (int)target_to_diff_dcr;
  v1 = calloc(1u, 0x54u);
  return memcpy(v1, &dword_195614, 0x54u);
}
