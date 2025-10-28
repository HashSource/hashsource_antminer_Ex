void *frontend_runtime_kda()
{
  __int64 v0; // r2
  void *v1; // r0

  dword_167214 = (int)stratum_connect;
  dword_167218 = (int)stratum_disconnect;
  dword_16721C = (int)stratum_recv_line;
  dword_167220 = (int)stratum_send_line;
  dword_167224 = (int)stratum_login_base;
  dword_167228 = (int)stratum_handle_method_base;
  dword_16722C = (int)stratum_handle_response_base;
  dword_167234 = (int)sub_47F84;
  dword_167238 = (int)sub_47FF0;
  dword_16723C = (int)sub_47BC0;
  dword_167230 = (int)sub_47EA4;
  dword_167240 = (int)sub_477FC;
  dword_167244 = (int)stratum_subscribe_base;
  dword_167248 = (int)stratum_authorize_base;
  dword_16724C = (int)sub_47BF8;
  dword_167250 = (int)sub_478F4;
  LODWORD(v0) = target_to_double_diff_kda;
  HIDWORD(v0) = "H";
  dword_167254 = (int)stratum_set_diff_or_target_base;
  dword_167258 = (int)target_to_diff_kda;
  dword_16725C = (int)diff_to_target_kda;
  *(_QWORD *)&dword_167260 = v0;
  dword_167268 = 70;
  v1 = calloc(1u, 0x60u);
  return memcpy(v1, &unk_167210, 0x60u);
}
